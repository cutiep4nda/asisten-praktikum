# Instalasi PostgreSQL

## Daftar Isi

- [Download PostgreSQL](#download-installer-postgresql)
- [Instalasi](#instalasi)

## Download Installer PostgreSQL

Download PostgreSQL dari website resmi :
https://www.postgresql.org/download/

Sesuaikan dengan device yang digunakan

## Instalasi

### 1. Jalankan installer yang sudah di download

Klik next

### 2. Pilih Path dimana PostgreSQL akan diinstall

![Default path PostgreSQL](images/01.png)

Kemudian klik Next

### 3. Pastikan PostgreSQL Server dan pgAdmin tercentang

![Komponen yang diinstall](images/02.png)

Kemudian klik next dan next (biarkan default)

### 4. Buat password untuk superuser 'postgres'

**Catat / ingat-ingat password yang dibuat. Jangan sampai lupa!**

![](images/03.png)

### 5. Klik next terus hingga muncul window instalasi

![](images/04.png)

Tunggu hingga selesai

### 6. Instalasi selesai

Instalasi selesai

![](images/05.png)

### 7. Verifikasi pgAdmin sudah terinstall

![](images/06.png)

### 8. Masuk ke menu PSQL

Isi denga konfigurasi berikut :

```
Server name     : (sesuaikan dengan keinginan)
Host name       : localhost
Port            : 5432
Database        : postgres
User            : postgres
Password        : (ketikkan password yang dibuat sebelumnya)
```

Kemudian klik **Connect & Open PSQL**

Akan muncul tampilan seperti ini

![](images/07.png)
