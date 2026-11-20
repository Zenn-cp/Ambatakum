#include <stdio.h>

int main(){
    int NIM;
    int kodeSoal;
    char kodeKelas;
    float alas;
    float tinggi;
    int a = 10;
    int b = 3;

    printf("====DATA DIRI====");
    printf("\nMasukkan NIM anda: ");
    scanf("%d", &NIM);
    kodeSoal = 2 - (NIM % 2);
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
    printf("\nLuas Jajar Genjang  : %.1f", alas*tinggi);
    printf("\nLuas Segitiga : %.2f", 0.5*alas*tinggi);


    return 0; 
}

//Pemograman adalah proses menulis, menguji, memperbaiki (debug)

//dalam flowchart, ikon lingkaran melambangkan: 'Connector'

//variabel adalah wadah untuk menyimpan data yang nilainya dapat berubah selama program berjalan

//contoh cara mendeklarasikan variabel: int umur = 20; float ipk = 3.75; char nilai = 'A';

//sequence adalah urutan urutan instruksi yang dieksekusi secara berurutan

//tipe data dalam bahasa C: int, float, double, char,
