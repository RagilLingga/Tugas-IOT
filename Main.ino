#include <UIPEthernet.h>  // Library untuk ENC28J60

// Pengaturan Ethernet
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(192, 168, 1, 177);

// Pin sensor suhu
const int tempPin = A0;

EthernetServer server(80);

void setup() {
  // Mulai Ethernet
  Ethernet.begin(mac, ip);
  server.begin();

  // Mulai Serial
  Serial.begin(9600);
  Serial.print("Server berada di ");
  Serial.println(Ethernet.localIP());
}

void loop() {
  // Dengarkan klien yang masuk
  EthernetClient client = server.available();
  if (client) {
    String request = client.readStringUntil('\r');
    client.flush();

    // Baca suhu
    int sensorValue = analogRead(tempPin);
    float temperature = sensorValue * (5.0 / 1024.0) * 100;

    // Kirim respon
    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("Connection: close");
    client.println();
    client.println("<!DOCTYPE HTML>");
    client.println("<html>");
    client.print("Temperature: ");
    client.print(temperature);
    client.println(" C");
    client.println("</html>");
    
    delay(1);
    client.stop();
  }
}
