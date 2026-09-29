# Soal Kuis 1

[Kode Penyelesaian](kuis1.cpp)

## 06KUIS. Luas Permukaan Ruang 2 Dimensi

Time limit 500 ms

Memory limit 62144 KB

### Deskripsi

Diketahui 4 bentuk ruang permukaan 2 dimensi, yaitu Lingkaran, Segitiga, Segiempat, dan Persegi. Lingkaran memiliki atribut radius atau jari-jari (double), Segitiga memiliki alas (double) dan tinggi (double), Segiempat memiliki panjang (double) dan lebar (double), sedangkan Persegi yang merupakan bentuk khusus dari Segiempat hanya memiliki sisi. Semua bentuk ruang 2 dimensi ini dapat dihitung nilai luas permukaannya masing-masing menggunakan fungsi bernama hitungLuas() dan ditampilkan detil bidang menggunakan fungso show().

Untuk mengolah data keempat bentuk tersebut, disusun struktur sebagai berikut:

```
           Ruang2D (Absrtak)
                 |
                 |
    +------------+-------------+
    |            |             |
    |            |             |
Lingkaran    Segitiga      Segiempat
                               |
                               |
                            Persegi
```

Susunlah program OOP untuk mengolah
N
N objek dan menampilkan detil setiap bidang dan total luas permukaan untuk objek pada selang tertentu. Objek dimulai pada posisi ke-1.

### Batasan

1≤N≤1000

Gunakan nilai
π = 3.14 untuk perhitungan luas lingkaran.

Kode program harus mengimplementasikan konsep enkapsulasi, pewarisan, dan polimorfisme.
Sebanyak N objek disimpan dengan menggunakan struktur Vector.

### Input

[n, banyaknya objek]

[n baris objek dengan nilai atribut masing-masing]

[a b], mengolah objek pada posisi a sampai dengan b

### Output

Output berupa detil objek dan total luas objek pada selang a sampai dengan b, dituliskan dalam 2 digit di belakang tanda desimal.

### Contoh Input

```
5
Segitiga 3.5 8
Lingkaran 5
Persegi 8.5
Segiempat 3 8
Lingkaran 6
2 4
```

### Contoh Output

```
-----------------------------
Nomor Objek : 2
Bidang : Lingkaran
Jari-jari : 5.00
Luas Permukaan : 78.50
-----------------------------
Nomor Objek : 3
Bidang : Persegi
Panjang Sisi : 8.50
Luas Permukaan : 72.25
-----------------------------
Nomor Objek : 4
Bidang : Segiempat
Panjang : 3.00
Lebar : 8.00
Luas Permukaan : 24.00
-----------------------------
TOTAL LUAS : 174.75
-----------------------------
```
