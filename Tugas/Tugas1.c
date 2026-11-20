#include <stdio.h>

int main() {
    // int x = 5;
    // int y = 10;
    // int a = 2;
    // int b = 5;
    // int c = a % b;
    // int hasil = x*y;
    // int umur = 30;
    // int luaspersegi;
    // int sisi = 10;
    // int lahir;
    // int nilaiTugas1 = 85;
    // int nilaiTugas2 = 75;
    int NIM;
    int kodeSoal = NIM % 2 + 2;
    char kodeKelas;
    float alas;
    float tinggi;
 
    // luaspersegi = sisi * sisi;

    // printf("luas persegi itu %d\n", luaspersegi);
    // printf("luas persegi adalah %d\n", sisi*sisi);
    // printf("%d\n", hasil);
    // printf("%d\n", umur);
    // printf("Hello World\n");
    
    // printf("Masukkan tahun lahir anda: ");
    // scanf("%d", &lahir);
    // printf("Tahun lahir anda adalah %d\n", lahir);

    // printf("Hasil perbandingan dari x == y: %d\n", x == y);
    // printf("Hasil perbandingan dari x != y: %d\n", x != y);
    
    // printf("Hasil perbandingan dari x > y: %d\n", x > y);
    // printf("Hasil perbandingan dari x < y: %d\n", x < y);
    
    // printf("Hasil perbandingan dari x >= y: %d\n", x >= y);
    // printf("Hasil perbandingan dari x <= y: %d\n", x <= y);

    // int statuslulus = (nilaiTugas1 > 70 && nilaiTugas2 > 90);
    // printf("Gw lulus atau gak (1= lulus, 0 = gagal) : %d\n" , statuslulus);

    // int remidi = (nilaiTugas1 < 70 || nilaiTugas2 < 80);
    // printf("Cek aja remidi apa engga (1= yap, 0=tidak) : %d\n", remidi);

    printf("====DATA DIRI====");
    printf("\nMasukkan NIM anda: ");
    scanf("%d", &NIM);
    printf("Masukkan kode kelas DDP anda: ");
    scanf(" %c", &kodeKelas);

    printf("=====DATA DIRI=====");
    printf("\nNim : %d", NIM);
    printf("\nKode kelas DDP : %c", kodeKelas);
    printf("\nKode soal : %d\n", kodeSoal);

    printf("====Bangun Datar====");
    printf("\nMasukkan Alas : ");
    scanf("%f", &alas);
    printf("Masukkan Tinggi : ");
    scanf("%f", &tinggi);

    printf("====Bangun Datar====");
    printf("\nLuas Jejar Genjang  : %.1f", alas*tinggi);
    printf("\nLuas Segitiga : %.2f", 0.5*alas*tinggi);


    return 0;
}

