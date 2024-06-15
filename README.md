# Tugas-IOT

NBI 1462100216
NAMA Ragil Lingga A
IOT - R

Proyek ini melibatkan pembuatan sistem pemantauan suhu IoT menggunakan Arduino, modul Ethernet ENC28J60, sensor suhu LM35, dan LED. Sistem ini membaca data suhu dari sensor LM35, memprosesnya menggunakan Arduino, dan mengirimkannya melalui jaringan menggunakan modul ENC28J60. LED digunakan untuk menunjukkan status yang berbeda.

Komponen yang Digunakan:
Arduino Uno: Unit mikrokontroler utama yang membaca data dari sensor suhu dan mengontrol modul Ethernet serta LED.
Modul Ethernet ENC28J60: Modul ini memungkinkan Arduino untuk terhubung ke jaringan dan mengirim data melalui internet.
Sensor Suhu LM35: Digunakan untuk mengukur suhu sekitar.
LED (D1, D2, D3, D4): Menunjukkan status yang berbeda dari sistem seperti daya, transmisi data, dan kondisi kesalahan.
Penjelasan Skematik:
Arduino Uno (ARD1): Unit pusat dari rangkaian tempat semua komponen terhubung.

Pin Digital: Terhubung ke LED dan modul ENC28J60.
Pin Analog: Digunakan untuk membaca output analog dari sensor LM35.
Modul ENC28J60 (U1): Terhubung ke Arduino menggunakan pin antarmuka SPI (SCK, SO, SI, CS). Modul ini menyediakan konektivitas jaringan agar Arduino dapat berkomunikasi melalui internet.

Sensor Suhu LM35 (U2): Terhubung ke pin input analog Arduino untuk menyediakan data suhu.

LED (D1, D2, D3, D4): Terhubung ke pin output digital Arduino untuk menunjukkan status.

D1: Menunjukkan status daya.
D2: Menunjukkan transmisi data yang berhasil.
D3: Menunjukkan adanya kesalahan.
D4: Indikator status tambahan.
Terminal Virtual:
Terminal virtual dalam skematik menampilkan alamat IP dari server. Dalam kasus ini, pesan "Server berada di 192.168.1.177" menunjukkan bahwa server berjalan di alamat IP 192.168.1.177.

Operasi:
Power On: Saat sistem dinyalakan, LED D1 menyala menunjukkan bahwa sistem memiliki daya.
Pembacaan Suhu: Arduino membaca suhu dari sensor LM35.
Transmisi Data: Arduino memproses data suhu dan mengirimkannya melalui jaringan menggunakan modul ENC28J60.
Indikasi Status: LED D2 dan D3 menunjukkan status transmisi data dan kesalahan, masing-masing.
Konektivitas Jaringan: Terminal virtual menunjukkan alamat IP tempat server dapat diakses.
Instruksi Menjalankan Simulasi:
Buka Proyek di Proteus: Muat file skematik Proteus yang disediakan.
Kompilasi Kode Arduino: Pastikan kode Arduino diunggah dengan benar ke simulasi.
Jalankan Simulasi: Mulai simulasi di Proteus.
Pantau Output: Amati terminal virtual untuk alamat IP server dan LED untuk status sistem.
Catatan Tambahan:
Pastikan semua koneksi dibuat dengan benar sesuai dengan skematik.
Verifikasi kode Arduino untuk setiap kesalahan sintaks atau logika sebelum diunggah.
Alamat IP yang ditampilkan di terminal virtual harus digunakan untuk mengakses server dari browser web atau perangkat jaringan lainnya.
Dengan mengikuti instruksi ini dan memahami skematik, Anda dapat mensimulasikan dan memahami cara kerja sistem pemantauan suhu IoT menggunakan Arduino dan modul Ethernet ENC28J60 dengan efektif.
