#include <stdio.h>

int main() {
    int materi;

    do {
        printf("\n=======================================================\n");
        printf("1. Materi 1 (Konsep Pemrograman, Flowchart, Variabel, Data)\n");
        printf("2. Materi 2 (Anatomi C, Aturan Variabel, I/O, Increment)\n");
        printf("3. Materi 3 (Jenis-jenis Operator)\n");
        printf("4. Materi 4 (Percabangan IF-ELSE)\n");
        printf("5. Materi 5 (Switch Case)\n");
        printf("6. Materi 6 (Perulangan / Looping)\n");
        printf("0. Keluar\n");
        printf("=======================================================\n");
        printf("Masukkan nomor materi : ");
        scanf("%d", &materi);
        printf("\n");

        switch (materi) {
            case 1:
                printf("================= JAWABAN MATERI 1 =================\n");
                printf("1. Apa itu pemrograman?\n");
                printf("   -> Pemrograman adalah proses menulis, menguji, memperbaiki (debug),\n");
                printf("      dan memelihara instruksi-instruksi (kode program) menggunakan bahasa\n");
                printf("      pemrograman agar komputer dapat menyelesaikan masalah atau tugas tertentu.\n\n");
                printf("2. Dalam flowchart, ikon lingkaran melambangkan:\n");
                printf("   -> 'Connector' (Penghubung dalam satu halaman).\n");
                printf("      Digunakan untuk menghubungkan alur diagram alir yang terputus\n");
                printf("      pada halaman yang sama tanpa membuat garis yang bersilangan/rumit.\n\n");
                printf("3. Apa itu Variabel?\n");
                printf("   -> Wadah atau lokasi penyimpanan di dalam memori komputer yang diberi nama\n");
                printf("      (identifier) untuk menyimpan data yang nilainya dapat berubah selama program berjalan.\n\n");
                printf("4. Contoh cara mendeklarasikan Variabel:\n");
                printf("   - int umur = 20;        (Tipe integer untuk bilangan bulat)\n");
                printf("   - float ipk = 3.75;     (Tipe float untuk bilangan desimal)\n");
                printf("   - char nilai = 'A';     (Tipe char untuk satu karakter)\n\n");
                printf("5. Apa itu Sequence?\n");
                printf("   -> Struktur dasar algoritma di mana setiap instruksi dieksekusi secara berurutan\n");
                printf("      langkah demi langkah dari baris atas ke baris bawah tanpa lompatan/percabangan.\n\n");
                printf("6. Jenis tipe data dalam Bahasa C:\n");
                printf("   a. Tipe Dasar (Primitive):\n");
                printf("      - int   : bilangan bulat (contoh: 10, -5), format: %%d\n");
                printf("      - float : bilangan desimal presisi tunggal (contoh: 3.14), format: %%f\n");
                printf("      - double: desimal presisi ganda (contoh: 3.14159265), format: %%lf\n");
                printf("      - char  : karakter tunggal bertanda petik satu (contoh: 'A'), format: %%c\n");
                printf("   b. Tipe Turunan/Bentukan:\n");
                printf("      - Array, Pointer, Struct, Union, Enum, serta tipe void (tanpa tipe).\n");
                break;

            case 2:
                printf("================= JAWABAN MATERI 2 =================\n");
                printf("1. Anatomi dasar Program C:\n");
                printf("   - Preprocessor Directive (#include <stdio.h>): memuat pustaka fungsi standar.\n");
                printf("   - Fungsi Utama int main(): titik awal (entry point) tempat program mulai dieksekusi.\n");
                printf("   - Badan Program / Block { ... }: berisi deklarasi variabel dan baris-baris perintah.\n");
                printf("   - Return Statement (return 0;): mengembalikan status bahwa program selesai dengan sukses.\n\n");
                printf("2. Contoh nama variabel yang valid & tidak valid:\n");
                printf("   - Valid   : nilaiMahasiswa, total_bayar, _skor, angka1\n");
                printf("   - Tidak Valid :\n");
                printf("     * 1angka      (tidak boleh diawali angka)\n");
                printf("     * total bayar (tidak boleh menggunakan spasi)\n");
                printf("     * uang$       (tidak boleh memakai simbol khusus selain _)\n");
                printf("     * int, for    (tidak boleh memakai kata kunci bawaan C / reserved keyword)\n\n");
                printf("3. Bagaimana cara mencetak output?\n");
                printf("   -> Menggunakan fungsi printf() dari header <stdio.h>.\n");
                printf("      Contoh teks biasa  : printf(\"Halo Dunia!\\n\");\n");
                printf("      Contoh via variabel: printf(\"Umur saya %%d tahun\", umur);\n\n");
                printf("4. Apa itu scanf?\n");
                printf("   -> Fungsi standar C untuk menerima input data dari pengguna melalui keyboard.\n");
                printf("      Membutuhkan format specifier dan operator ampersand (&) untuk menunjuk ke\n");
                printf("      alamat memori variabel penampung. Contoh: scanf(\"%%d\", &nilai);\n\n");
                printf("5. Arti dari x++ dan x--:\n");
                printf("   - x++ (Post-increment): menggunakan nilai x saat ini terlebih dahulu,\n");
                printf("     setelah itu nilai x ditambah 1 (x = x + 1).\n");
                printf("   - x-- (Post-decrement): menggunakan nilai x saat ini terlebih dahulu,\n");
                printf("     setelah itu nilai x dikurangi 1 (x = x - 1).\n");
                break;

            case 3:
                printf("================= JAWABAN MATERI 3 =================\n");
                printf("1. Jenis-jenis operator dalam C:\n");
                printf("   -> Operator Aritmatika, Perbandingan (Relasional), Penugasan (Assignment),\n");
                printf("      Logika, Bitwise, dan Ternary (Kondisional).\n\n");
                printf("2. Isi Operator Aritmatika:\n");
                printf("   - Penjumlahan (+)\n");
                printf("   - Pengurangan (-)\n");
                printf("   - Perkalian (*)\n");
                printf("   - Pembagian (/)\n");
                printf("   - Modulus (%%) -> menghasilkan sisa pembagian bilangan bulat\n");
                printf("   - Increment (++) dan Decrement (--)\n\n");
                printf("3. Isi Operator Perbandingan:\n");
                printf("   - Sama dengan (==)\n");
                printf("   - Tidak sama dengan (!=)\n");
                printf("   - Lebih besar dari (>)\n");
                printf("   - Lebih kecil dari (<)\n");
                printf("   - Lebih besar atau sama dengan (>=)\n");
                printf("   - Lebih kecil atau sama dengan (<=)\n");
                printf("   (Menghasilkan nilai boolean: 1 jika benar/true, 0 jika salah/false)\n\n");
                printf("4. Isi Operator Penugasan:\n");
                printf("   - Penugasan sederhana: =\n");
                printf("   - Compound assignment: +=, -=, *=, /=, %%= \n");
                printf("     Contoh: a += 5 identik dengan a = a + 5\n\n");
                printf("5. Isi Operator Logika:\n");
                printf("   - AND (&&): bernilai benar jika KEDUA kondisi bernilai benar.\n");
                printf("   - OR (||) : bernilai benar jika MINIMAL SATU kondisi bernilai benar.\n");
                printf("   - NOT (!) : membalik nilai kebenaran (!1 = 0, !0 = 1).\n");
                break;

            case 4:
                printf("================= JAWABAN MATERI 4 =================\n");
                printf("1. Apa itu percabangan if-else?\n");
                printf("   -> Struktur kontrol yang menentukan alur eksekusi program berdasarkan kondisi;\n");
                printf("      menjalankan blok kode tertentu jika syarat bernilai benar (true), dan\n");
                printf("      menjalankan blok alternatif (else) jika syarat bernilai salah (false).\n\n");
                printf("2. Contoh analogi if-else:\n");
                printf("   - Analogi Cuaca:\n");
                printf("     IF hari hujan, MAKA bawa payung.\n");
                printf("     ELSE (jika tidak hujan), MAKA pakai topi.\n");
                printf("   - Analogi Nilai:\n");
                printf("     IF nilai >= 75, MAKA Lulus.\n");
                printf("     ELSE, MAKA Remedial.\n\n");
                printf("3. Kapan kita menggunakan if-else?\n");
                printf("   -> Saat hanya ada DUA alternatif keputusan yang saling bertolak belakang\n");
                printf("      berdasarkan terpenuhi atau tidaknya satu kondisi.\n\n");
                printf("4. Kapan kita menggunakan if else-if?\n");
                printf("   -> Saat terdapat LEBIH DARI DUA kondisi atau kriteria yang perlu diuji\n");
                printf("      secara bertahap (multi-kondisi), seperti grading nilai (A, B, C, D, E).\n");
                break;

            case 5:
                printf("============ JAWABAN MATERI 5 (SWITCH CASE) ============\n");
                printf("1. Apa itu switch-case? Kapan kita menggunakannya?\n");
                printf("   -> Struktur percabangan kontrol untuk memilih salah satu dari banyak alternatif\n");
                printf("      berdasarkan kesamaan nilai tunggal (konstanta integer atau karakter).\n");
                printf("   -> Digunakan ketika terdapat banyak cabang keputusan yang didasarkan pada\n");
                printf("      nilai pasti/tetap (seperti pilihan menu nomor 1, 2, 3, atau kode huruf).\n\n");
                printf("2. Perbedaan switch-case dengan if-else:\n");
                printf("   - Tipe Kondisi: if-else bisa menguji rentang nilai (<, >, rentang) dan logika\n");
                printf("     kompleks (&&, ||). Switch-case hanya menguji kesamaan nilai pasti (==).\n");
                printf("   - Keterbacaan: Switch-case jauh lebih rapi dan efisien untuk menu banyak opsi.\n");
                printf("   - Alur: Switch membutuhkan keyword 'break' di tiap case agar tidak lolos (fall-through)\n");
                printf("     mengeksekusi case setelahnya secara tidak sengaja.\n\n");
                printf("3. Arti switch, case, dan default:\n");
                printf("   - switch  : bagian yang mengevaluasi nilai variabel yang akan dicocokkan.\n");
                printf("   - case    : label nilai tertentu; jika nilai variabel cocok, blok ini dieksekusi.\n");
                printf("   - default : blok opsional yang dieksekusi jika tidak ada satupun case yang cocok\n");
                printf("               (fungsinya serupa dengan blok 'else' terakhir pada if-else).\n");
                break;

            case 6:
                printf("======== JAWABAN MATERI 6 (PERULANGAN / LOOPING) ========\n");
                printf("1. Kapan kita perlu menggunakan Perulangan?\n");
                printf("   -> Saat kita perlu menjalankan satu atau serangkaian instruksi yang sama secara\n");
                printf("      berulang-ulang tanpa harus menulis kode yang sama berkali-kali secara manual.\n\n");
                printf("2. Bagian utama perulangan:\n");
                printf("   - Inisialisasi : menentukan nilai awal variabel pencacah (counter), misal: int i = 1;\n");
                printf("   - Kondisi      : syarat kelanjutan loop; bernilai true lanjut, false berhenti (misal: i <= 5).\n");
                printf("   - Iterasi      : pembaruan counter (increment/decrement, misal: i++) agar loop bisa berhenti.\n");
                printf("   - Badan Loop   : kumpulan perintah yang akan dieksekusi di setiap putaran.\n\n");
                printf("3. Perbedaan for, while, do-while & Analoginya:\n");
                printf("   a. For Loop:\n");
                printf("      - Digunakan saat jumlah perulangannya sudah diketahui secara pasti sejak awal.\n");
                printf("      - Analogi: Berlari mengelilingi lintasan stadion sebanyak tepat 5 putaran.\n");
                printf("   b. While Loop:\n");
                printf("      - Pengecekan kondisi di awal (Entry-controlled). Jika kondisi awal salah,\n");
                printf("        badan perulangan tidak akan pernah dieksekusi sama sekali.\n");
                printf("      - Analogi: Menunjukkan tiket sebelum masuk wahana bermain (jika tidak punya tiket,\n");
                printf("        tidak diperbolehkan masuk sama sekali).\n");
                printf("   c. Do-While Loop:\n");
                printf("      - Pengecekan kondisi di akhir (Exit-controlled). Perintah dijalankan minimal 1 kali\n");
                printf("        terlebih dahulu sebelum kondisi diperiksa.\n");
                printf("      - Analogi: Mencicipi sampel makanan gratis 1 kali terlebih dahulu, baru kemudian\n");
                printf("        ditanya apakah ingin mencicipi lagi atau tidak.\n");
                break;

            case 0:
                printf("Terima kasih! Program selesai.\n");
                break;
            default:
                printf("Nomor materi tidak valid! Silakan pilih angka 1-6 atau 0 untuk keluar.\n");
        }
    } while (materi != 0);
    return 0;
}

/* Soal 1: Cetak "Halo, nama saya [Nama kamu]" */
void soal1() {
    // Ganti "Az" dengan nama kamu
    printf("Halo, nama saya Satria\n");
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
    scanf(" %49[^\n]", nama);
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
