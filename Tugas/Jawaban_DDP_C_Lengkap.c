/*
 * ===================================================================
 *  CONTOH SOAL DDP (DASAR-DASAR PEMROGRAMAN) - BAHASA C
 *  Berisi: jawaban soal teori (Materi 1-5) + 10 soal koding
 *  Cara pakai : compile -> jalankan -> pilih menu
 *  Compile    : gcc Jawaban_DDP_C_Lengkap.c -o ddp
 *  Jalankan   : ./ddp
 * ===================================================================
 */
#include <stdio.h>

/* ------------------------------------------------------------------
 *  BAGIAN 1 : JAWABAN SOAL TEORI
 * ------------------------------------------------------------------ */

void materi1() {
    printf("\n===== MATERI 1 =====\n");
    printf("1. Apa itu pemrograman?\n"
           "   Proses menulis serangkaian instruksi (kode) dalam bahasa pemrograman\n"
           "   agar komputer dapat menyelesaikan suatu masalah/tugas tertentu.\n\n");
    printf("2. Ikon lingkaran pada flowchart melambangkan...\n"
           "   Connector (penghubung), yaitu penghubung alur flowchart yang\n"
           "   terpisah (misalnya pindah halaman atau alurnya terlalu panjang).\n\n");
    printf("3. Apa itu Variabel?\n"
           "   Tempat di memori untuk menyimpan data yang nilainya bisa berubah\n"
           "   selama program berjalan. Variabel punya nama dan tipe data.\n\n");
    printf("4. Contoh mendeklarasikan variabel:\n"
           "   int umur;              // deklarasi\n"
           "   int umur = 18;         // deklarasi + isi nilai awal\n"
           "   float tinggi = 170.5;\n"
           "   char huruf = 'A';\n\n");
    printf("5. Apa itu Sequence?\n"
           "   Struktur program yang instruksinya dijalankan berurutan dari atas\n"
           "   ke bawah, satu per satu, tanpa percabangan atau perulangan.\n\n");
    printf("6. Jenis tipe data dalam Bahasa C:\n"
           "   int    -> bilangan bulat          (contoh: 10)\n"
           "   float  -> bilangan desimal        (contoh: 3.14)\n"
           "   double -> desimal presisi ganda   (contoh: 3.14159265)\n"
           "   char   -> satu karakter           (contoh: 'A')\n"
           "   void   -> tidak bertipe / tanpa nilai\n"
           "   (char[] / string -> kumpulan karakter, contoh: \"Halo\")\n");
}

void materi2() {
    printf("\n===== MATERI 2 =====\n");
    printf("1. Anatomi dasar Program C:\n"
           "   #include <stdio.h>      // 1. header / library\n"
           "   int main() {            // 2. fungsi utama (program mulai di sini)\n"
           "       printf(\"Halo\");     // 3. isi program (statement diakhiri ;)\n"
           "       return 0;           // 4. tanda program selesai normal\n"
           "   }                       // 5. kurung kurawal penutup\n\n");
    printf("2. Nama variabel:\n"
           "   Valid   : nama, umur2, nilai_ujian, _total, Harga\n"
           "   Tidak   : 2umur (diawali angka), nilai ujian (ada spasi),\n"
           "             total-harga (ada tanda -), int (keyword C)\n"
           "   Catatan : C bersifat case-sensitive (Nama != nama)\n\n");
    printf("3. Cara mencetak output memakai printf():\n"
           "   printf(\"Halo Dunia\\n\");\n"
           "   printf(\"Umur: %%d\\n\", umur);   // %%d int, %%f float, %%c char, %%s string\n\n");
    printf("4. Apa itu scanf?\n"
           "   Fungsi untuk membaca input dari keyboard dan menyimpannya ke variabel.\n"
           "   Contoh: scanf(\"%%d\", &umur);  (tanda & = alamat variabel)\n\n");
    printf("5. Arti x++ dan x--\n"
           "   x++ -> increment, nilai x ditambah 1 (x = x + 1)\n"
           "   x-- -> decrement, nilai x dikurangi 1 (x = x - 1)\n");
}

void materi3() {
    printf("\n===== MATERI 3 =====\n");
    printf("1. Jenis-jenis operator:\n"
           "   Aritmatika, Perbandingan (Relasional), Penugasan (Assignment), Logika\n\n");
    printf("2. Operator Aritmatika:\n"
           "   +  tambah | -  kurang | *  kali | /  bagi | %%  sisa bagi (modulus)\n\n");
    printf("3. Operator Perbandingan (hasil benar=1 / salah=0):\n"
           "   == sama dengan | != tidak sama dengan\n"
           "   >  lebih dari  | <  kurang dari\n"
           "   >= lebih dari atau sama dengan | <= kurang dari atau sama dengan\n\n");
    printf("4. Operator Penugasan:\n"
           "   =  isi nilai       | += tambah lalu isi  | -= kurang lalu isi\n"
           "   *= kali lalu isi   | /= bagi lalu isi    | %%= sisa bagi lalu isi\n\n");
    printf("5. Operator Logika:\n"
           "   && (AND) -> benar jika SEMUA kondisi benar\n"
           "   || (OR)  -> benar jika SALAH SATU kondisi benar\n"
           "   !  (NOT) -> membalik nilai kebenaran\n");
}

void materi4() {
    printf("\n===== MATERI 4 =====\n");
    printf("1. Apa itu percabangan if-else?\n"
           "   Struktur yang memilih blok kode mana yang dijalankan berdasarkan\n"
           "   kondisi: jika kondisi benar -> blok if, jika salah -> blok else.\n\n");
    printf("2. Contoh analogi if-else:\n"
           "   \"JIKA hujan, saya bawa payung. JIKA TIDAK, saya tidak bawa payung.\"\n"
           "   if (hujan) { bawa payung; } else { tidak bawa payung; }\n\n");
    printf("3. Kapan memakai if-else?\n"
           "   Saat hanya ada DUA kemungkinan (benar/salah), contoh: lulus/tidak lulus,\n"
           "   ganjil/genap.\n\n");
    printf("4. Kapan memakai if - else if?\n"
           "   Saat ada LEBIH DARI DUA kemungkinan/kondisi bertingkat, contoh:\n"
           "   penentuan nilai huruf A/B/C/D.\n");
}

void materi5_switch() {
    printf("\n===== MATERI 5 - SWITCH CASE =====\n");
    printf("1. Apa itu switch case? Kapan dipakai?\n"
           "   Percabangan yang memilih satu dari banyak pilihan berdasarkan NILAI\n"
           "   sebuah variabel. Dipakai untuk menu atau pilihan tetap (1,2,3,...).\n\n");
    printf("2. Perbedaan switch-case dengan if-else:\n"
           "   switch-case : membandingkan satu variabel dengan nilai tetap (int/char),\n"
           "                 lebih rapi untuk banyak pilihan, perlu 'break'.\n"
           "   if-else     : bisa kondisi apa saja (rentang, && , ||, perbandingan),\n"
           "                 lebih fleksibel.\n\n");
    printf("3. Apa itu switch, case, default?\n"
           "   switch  -> variabel/ekspresi yang diperiksa\n"
           "   case    -> pilihan nilai; kodenya jalan jika nilai cocok (akhiri 'break')\n"
           "   default -> dijalankan jika tidak ada case yang cocok (seperti 'else')\n");
}

void materi5_loop() {
    printf("\n===== MATERI 5 - PERULANGAN (LOOPING) =====\n");
    printf("1. Kapan perlu perulangan?\n"
           "   Saat suatu instruksi harus dijalankan berulang kali, sehingga kode\n"
           "   lebih singkat (contoh: cetak 1-100, minta input terus-menerus).\n\n");
    printf("2. Bagian utama perulangan:\n"
           "   Inisialisasi (nilai awal), Kondisi (kapan berhenti/lanjut),\n"
           "   Update (increment/decrement), dan Badan perulangan (isi yang diulang).\n\n");
    printf("3. Perbedaan for, while, do-while:\n"
           "   for      : dipakai jika JUMLAH ulangan sudah diketahui.\n"
           "              Analogi: \"Lari keliling lapangan 5 kali.\"\n"
           "   while    : cek kondisi DULU, baru jalan; bisa 0 kali.\n"
           "              Analogi: \"Selama masih lapar, makan.\"\n"
           "   do-while : jalan DULU, baru cek kondisi; minimal 1 kali.\n"
           "              Analogi: \"Cicipi makanan dulu, lalu putuskan mau lanjut makan atau tidak.\"\n");
}

/* ------------------------------------------------------------------
 *  BAGIAN 2 : JAWABAN SOAL KODING (10 SOAL)
 * ------------------------------------------------------------------ */

/* Soal 1: Cetak "Halo, nama saya [Nama kamu]" */
void soal1() {
    // Ganti "Az" dengan nama kamu
    printf("Halo, nama saya Az\n");
}

/* Soal 2: Minta nama, lalu tampilkan */
void soal2() {
    char nama[50];
    printf("Masukkan nama: ");
    scanf(" %49[^\n]", nama);          // boleh pakai spasi
    printf("Nama kamu: %s\n", nama);
}

/* Soal 3: Minta nama, umur, NIM lalu tampilkan lagi */
void soal3() {
    char nama[50], nim[20];            // NIM sebagai string agar angka 0 depan aman
    int umur;
    printf("Masukkan nama: ");
    scanf(" %c 49[^\n]", nama);
    printf("Masukkan umur: ");
    scanf("%d", &umur);
    printf("Masukkan NIM : ");
    scanf("%19s", nim);
    printf("\n=== Data yang dimasukkan ===\n");
    printf("Nama : %s\n", nama);
    printf("Umur : %d\n", umur);
    printf("NIM  : %s\n", nim);
}

/* Soal 4: Dua bilangan bulat -> tambah, kurang, kali, bagi */
void soal4() {
    int a, b;
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua  : ");
    scanf("%d", &b);
    printf("\nPenjumlahan : %d + %d = %d\n", a, b, a + b);
    printf("Pengurangan : %d - %d = %d\n", a, b, a - b);
    printf("Perkalian   : %d * %d = %d\n", a, b, a * b);
    if (b != 0)
        printf("Pembagian   : %d / %d = %.2f\n", a, b, (float)a / b);
    else
        printf("Pembagian   : tidak bisa dibagi dengan 0\n");
}

/* Soal 5: angka = 10, += 5 */
void soal5() {
    int angka = 10;
    angka += 5;                        // angka = angka + 5
    printf("Hasil: %d\n", angka);
}

/* Soal 6: Nilai angka -> nilai huruf */
void soal6() {
    int nilai;
    printf("Masukkan nilai (0-100): ");
    scanf("%d", &nilai);
    if (nilai < 0 || nilai > 100)
        printf("Nilai tidak valid!\n");
    else if (nilai >= 85)
        printf("Nilai huruf: A\n");
    else if (nilai >= 75)
        printf("Nilai huruf: B\n");
    else if (nilai >= 60)
        printf("Nilai huruf: C\n");
    else
        printf("Nilai huruf: D\n");
}

/* Soal 7: Menu minuman (switch-case) */
void soal7() {
    int pilihan;
    printf("=== MENU MINUMAN ===\n");
    printf("1 = Air putih\n2 = Teh\n3 = Kopi\n4 = Susu\n");
    printf("Pilih nomor: ");
    scanf("%d", &pilihan);
    switch (pilihan) {
        case 1: printf("Kamu memilih: Air putih\n"); break;
        case 2: printf("Kamu memilih: Teh\n");        break;
        case 3: printf("Kamu memilih: Kopi\n");       break;
        case 4: printf("Kamu memilih: Susu\n");       break;
        default: printf("Pilihan tidak tersedia!\n");
    }
}

/* Soal 8: Angka 1 sampai 100 dengan for */
void soal8() {
    for (int i = 1; i <= 100; i++)
        printf("%d ", i);
    printf("\n");
}

/* Soal 9: Angka 1 sampai 5 dengan while */
void soal9() {
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
}

/* Soal 10: Minta bilangan berulang sampai pengguna memasukkan 0 (do-while) */
void soal10() {
    int angka;
    do {
        printf("Masukkan sebuah bilangan (0 untuk berhenti): ");
        scanf("%d", &angka);
        if (angka != 0)
            printf("Kamu memasukkan: %d\n", angka);
    } while (angka != 0);
    printf("Program selesai.\n");
}

/* ------------------------------------------------------------------
 *  BAGIAN 3 : MENU UTAMA
 * ------------------------------------------------------------------ */

void menuTeori() {
    int p;
    printf("\n--- JAWABAN TEORI ---\n");
    printf("1. Materi 1\n2. Materi 2\n3. Materi 3\n4. Materi 4\n");
    printf("5. Materi 5 - Switch Case\n6. Materi 5 - Perulangan\n7. Tampilkan semua\n");
    printf("Pilih: ");
    scanf("%d", &p);
    switch (p) {
        case 1: materi1(); break;
        case 2: materi2(); break;
        case 3: materi3(); break;
        case 4: materi4(); break;
        case 5: materi5_switch(); break;
        case 6: materi5_loop(); break;
        case 7:
            materi1(); materi2(); materi3(); materi4();
            materi5_switch(); materi5_loop();
            break;
        default: printf("Pilihan tidak tersedia!\n");
    }
}

void menuKoding() {
    int p;
    printf("\n--- SOAL KODING (1-10) ---\n");
    printf("Pilih nomor soal (1-10): ");
    scanf("%d", &p);
    printf("\n");
    switch (p) {
        case 1:  soal1();  break;
        case 2:  soal2();  break;
        case 3:  soal3();  break;
        case 4:  soal4();  break;
        case 5:  soal5();  break;
        case 6:  soal6();  break;
        case 7:  soal7();  break;
        case 8:  soal8();  break;
        case 9:  soal9();  break;
        case 10: soal10(); break;
        default: printf("Nomor soal tidak tersedia!\n");
    }
}

int main() {
    int menu;
    do {
        printf("\n==============================\n");
        printf("   KUMPULAN JAWABAN DDP (C)\n");
        printf("==============================\n");
        printf("1. Jawaban Soal Teori (Materi 1-5)\n");
        printf("2. Jawaban Soal Koding (1-10)\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        if (scanf("%d", &menu) != 1) {     // input bukan angka / input habis -> keluar
            printf("\nInput tidak valid, program berhenti.\n");
            break;
        }
        switch (menu) {
            case 1: menuTeori();  break;
            case 2: menuKoding(); break;
            case 0: printf("Terima kasih, semangat belajarnya!\n"); break;
            default: printf("Menu tidak tersedia!\n");
        }
    } while (menu != 0);
    return 0;
}
