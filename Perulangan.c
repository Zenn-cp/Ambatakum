#include <stdio.h>

int main(){

    // int i;
    // for (i = 1; i <= 10; i++) {
    //     printf("Hai Juga\n");
    // }

// int n = 0;
// while (n <= 10) {
//     printf("Coba ke -%d \n", n);
//     n++;
// }

// int n = 0;
// do{
//     printf("Coba ke -%d \n", n);
//     n++;
// } while (n < 10);

int pilihan = 1;

while (pilihan != 0) {

    printf("Masukkan pilihan : ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Anda memilih menu 1\n");
            break;
        case 2:
            printf("Anda memilih menu 2\n");
            break;
        case 3:
            printf("Anda memilih menu 3\n");
            break;
        case 0:
            printf("Keluar dari program\n");
            break;
        default:
            printf("Pilihan tidak valid\n");
            break;
    }
}

return 0;
}

// Perulangan dipake pas nulis kode yang banyak atau menjalalnkan perintah sama yang berulang, jadi lebih ringkas
// Tiga bagian pentingnya yaitu: inisialisasi, kondisi, update

// Perbedaan for, while, do-while

// for = Digunakan saat jumlah perulangan sudah diketahui
//contoh: Lari muter lapangan 5 kali

// do-while = Jumlah perulangan belum diketahui, tapi harus dijalankan dulu satu kali
// contoh = nyicip kopi sekali, baru tentukan mau lanjut minum atau gak

// while = Jumlahnya juga belum diketahui, tapi gak harus dijalanin aja dulu
// contoh = cek tiket masuk tribun, kalau gak ada tiket berarti gak boleh masuk.