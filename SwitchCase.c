#include <stdio.h>

int main() {
    int hari;

    printf("Masukkan nomor hari : "); 
    scanf("%d", &hari);

    switch (hari) {
        case 1:
            printf("Hari Minggu\n"); 
            break;
        case 2:
            printf("Hari Senin\n");
            break;
        case 3:
            printf("Hari Selasa\n");
            break;
        case 4:
            printf("Hari Rabu\n");
            break;
        case 5:
            printf("Hari Kamis\n");
            break;
        case 6:
            printf("Hari Jumat\n");
            break;
        case 7:
            printf("Hari Sabtu\n");
            break;
        default:
            printf("Hari tidak valid\n");
    }
    return 0;
}

//switch case adalah struktur percabangan untuk memilih satu dari banyaknya pilihan berdasarkan nilai sebuah ekspresi
//Dipakai untuk menu atau pilihan tetap

// switch-case :membandingkan satu variabel dengan nilai tetap (int/char)
//              lebih rapi untuk banyak pilihan, perlu 'break'
//if-else     : bisa kondisi apa saja (rentang, && , ||, perbandingan)
//              lebih fleksibel.

// switch  -> variabel/ekspresi yang diperiksa
// case    -> pilihan nilai; kodenya jalan jika nilai cocok (akhiri 'break')
// default -> dijalankan jika tidak ada case yang cocok (seperti 'else')