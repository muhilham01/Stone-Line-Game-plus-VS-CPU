# Stone-Line-Game
#### Kelas Pemrograman Lanjut - 02 : 
#### Muhammad Ilham Akbar / 1706042970
#### Muhammad Hamzah / 1706043065

* [Installation](#Installation)
* [Deskripsi Program](#Deskripsi-Program)
* [Penjelasan Fungsi Modular Utama](#Penjelasan-Fungsi-Modular-Utama)
* [Tutorial Program](#Tutorial-Program)
* [Tampilan Program](#Tampilan-Program)
* [Flowchart](#Flowchart)

## INSTALLATION
1) Download atau clone repository (lihat pada pojok kanan atas) pilih dalam format zip.
2) Ekstrak file zip tersebut ke dalam satu folder dan pastikan bahwa semua source code diletakkan di dalam satu branch.
3) Jalankan dengan membuka main.c dengan menggunakan IDE C/C++ language (contoh : DEV C++).
4) Compile dan Run source code.


## DESKRIPSI PROGRAM
*	Program game stone line ini terdiri dari 6 menu (termasuk menu exit) untuk memudahkan penggunaan program game ini.
*	Program ini mempunyai 4 mode game (2 mode  game player vs player dan 2 mode game player vs computer).
*	Keempat mode game tersebut dikelompokkan menjadi 2 tipe game, yaitu game menambah batu (add stone) dan game mengambil batu (remove stone).
*	Pada game tipe add stone, pemenang ditentukan dari batu siapa yang merupakan batu ke-15 dari barisan. Batu pertama dihitung dari batu yang pertama ada di barisan, kemudian berlanjut ke batu kedua dan seterusnya. Game dimulai dengan tidak ada batu dalam barisan. Player/CPU bergiliran menambahkan batu ke barisan. Penambahan batu pada setiap giliran hanya dapat dilakukan dengan menambahkan 1–3 batu.
*	Pada game tipe remove stone, pemenang ditentukan dari siapa yang dapat mengambil batu yang terakhir ada di barisan. Game dimulai dengan sebuah barisan berisi 15 batu. Player/CPU bergiliran mengambil batu ke barisan. Pengambilan batu pada setiap giliran hanya dapat dilakukan dengan mengambil 1–3 batu.
*	Menu 1 (GAME A) : game tipe add stone dengan 2 player
*	Menu 2 (GAME B) : game tipe remove stone dengan 2 player
*	Menu 3 (GAME C) : sama seperti GAME A, namun melawan Computer (CPU)
*	Menu 4 (GAME D) : sama seperti GAME B,  namun melawan CPU

## PENJELASAN FUNGSI MODULAR UTAMA
<br>

1) Fungsi int GameA()
<br>Fungsi ini digunakan pada menu no 1 yaitu sebagai tipe game untuk menambah batu (add stone) dengan mode player vs player. Penambahan batu ini akan terus berlangsung hingga batu mencapai batu ke-15. Penambahan batu dilakukan dengan cara memanggil fungsi push() dan kemudian pemenang akan ditentukan dengan memanggil fungsi pop() ketika batu sudah mencapai yang ke -15.
<br>
<p align="center"> 
<br>

2) Fungsi int GameB()
<br>Fungsi ini digunakan pada menu no 2 yaitu sebagai tipe game untuk mengambil batu (remove stone) dengan mode player vs player. Pengambilan batu ini akan terus berlangsung hingga batu habis. Pengambilan batu dilakukan dengan cara memanggil fungsi pop() dan kemudian pemenang akan ditentukan dengan memanggil fungsi pop() ketika batu sudah habis.
<br>
<p align="center"> <img width="320" alt="modular game b" src="https://user-images.githubusercontent.com/39519269/50511253-75a09400-0abf-11e9-9557-ea017ac54a99.PNG">
<br>
  
3. Fungsi int GameC()
<br>Fungsi ini digunakan pada menu no 3 yaitu sebagai tipe game untuk menambah batu (add stone) dengan mode player vs komputer. Secara umum memiliki algoritma yang sama dengan menu no 1 tetapi pada algotritma AI komputer menggunakan algoritma random.
<br>
<p align="center"> <img width="331" alt="modular game c" src="https://user-images.githubusercontent.com/39519269/50511257-76d1c100-0abf-11e9-8452-a9abd9bc5e97.PNG">
<br>
  
4. Fungsi int GameD()
<br>Fungsi ini digunakan pada menu no 4 yaitu sebagai tipe game untuk mengambil batu (remove stone) dengan mode player vs komputer. Secara umum memiliki algoritma yang sama dengan menu no 2 tetapi pada algotritma AI komputer menggunakan algoritma random.
<br>
<p align="center"> <img width="318" alt="modular game d" src="https://user-images.githubusercontent.com/39519269/50511259-79341b00-0abf-11e9-8ee4-ae7bb9cc3b42.PNG">
<br>

5. Fungsi void show_current_line(StackNodePtr current)
<br>Fungsi ini menampilkan jumlah batu yang ada pada saat itu, baik itu dalam tipe game menambah batu (add stone) atau tipe game mengambil batu (remove stone).
<br>
<p align="center"><img width="388" alt="jumlah batu" src="https://user-images.githubusercontent.com/39519269/50511274-8bae5480-0abf-11e9-9a3f-f3ff878e5909.PNG">
<br>
    
## TUTORIAL PROGRAM
* User akan melihat tampilan pembuka, setelah itu akan ada tampilan menu  utama di mana user akan diminta memilih menu sesuai keinginan.
* Pilih Menu 1 atau 3 untuk memilih game tipe menambah batu (add stone).
* Pilih Menu 2 atau 4 untuk memilih game tipe mengambil batu (remove stone).
* Menu 1 dan 2 merupakan game player vs player.
* Menu 3 dan 4 merupakan player vs komputer.
* Menu 3 dan 4 merupakan game player vs computer (CPU).
•	Pada game tipe add stone, jadilah yang pertama menambahkan batu ke-15 untuk menang.
•	Pada game tipe remove stone, jadilah yang mengambil batu terakhir untuk menang.
•	Tambahkan/ambil batu sebanyak 1–3 batu pada saat giliran.
<br>
<p align="center"> <img width="430" alt="help" src="https://user-images.githubusercontent.com/39519269/50511275-8ea94500-0abf-11e9-8099-aa40a55163a6.PNG">

## TAMPILAN PROGRAM
a. Menu
<br>
<img width="235" alt="capture" src="https://user-images.githubusercontent.com/39519269/50401695-2c9cc700-07c3-11e9-9b1e-7bf300d79ae3.PNG">

b. Enter Player Name pada menu 1
<br>
<img width="243" alt="capture1" src="https://user-images.githubusercontent.com/39519269/50401932-f6f8dd80-07c4-11e9-95ec-d6e752cccc8e.PNG">

<br>
c. Tampilan menu 1
<br>
<img width="242" alt="capture3" src="https://user-images.githubusercontent.com/39519269/50401934-fa8c6480-07c4-11e9-9e2e-409d861ad977.PNG">

d. Tampilan informasi pemenang
<br>
<img width="372" alt="capture4" src="https://user-images.githubusercontent.com/39519269/50401939-fe1feb80-07c4-11e9-8c13-b628c67b5a0c.PNG">

e. Tampilan menu 2
<br>
<img width="337" alt="capture5" src="https://user-images.githubusercontent.com/39519269/50401944-01b37280-07c5-11e9-9af0-b362d6ec590e.PNG">

f. Tampilan menu 3
<br>
<img width="222" alt="capture6" src="https://user-images.githubusercontent.com/39519269/50401948-0710bd00-07c5-11e9-970b-ef6d13f50685.PNG">
<br>
<img width="287" alt="com 3" src="https://user-images.githubusercontent.com/39519269/50505677-aecd0a00-0aa7-11e9-9833-94b346dc2b4a.PNG">

g. Tampilan menu 4
<br>
<img width="323" alt="capture7" src="https://user-images.githubusercontent.com/39519269/50401951-0aa44400-07c5-11e9-97bf-1db0fcf6596f.PNG">
<br>
<img width="326" alt="com 4" src="https://user-images.githubusercontent.com/39519269/50505680-b1c7fa80-0aa7-11e9-8b8c-0bd66ef6290f.PNG">

## FLOWCHART 

![menu awal edit 2](https://user-images.githubusercontent.com/39519269/50494484-22462b80-0a56-11e9-9bd9-86cef32eea73.png)
<br>
![menu 1](https://user-images.githubusercontent.com/39519269/50494215-7bad5b00-0a54-11e9-92b6-25025a64581a.png)
<br>
![menu 2](https://user-images.githubusercontent.com/39519269/50494218-7e0fb500-0a54-11e9-9716-f662e0959509.png)
<br>
![menu 3](https://user-images.githubusercontent.com/39519269/50494220-80720f00-0a54-11e9-82bf-27c9d46959b4.png)
<br>
![menu 4](https://user-images.githubusercontent.com/39519269/50494221-82d46900-0a54-11e9-9b36-6e639b2f418a.png)


