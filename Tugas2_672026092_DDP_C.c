#include <stdio.h>

void tampilkanMenu() {
    printf("Menu restoran FTI\n");
    printf("1. Bakso (10000)\n");
    printf("2. Mie ayam (5000)\n");
    printf("3. Mie goreng (15000)\n");
    printf("4. Pangsit (3000)\n");
}

int hitungTotal(int pilihan, int jumlah) {
    int harga = 0;
    switch (pilihan) {
        case 1: harga = 10000; break;
        case 2: harga = 5000; break;
        case 3: harga = 15000; break;
        case 4: harga = 3000; break;
        default: harga = 0; break;
    }
    return harga * jumlah;
}

void tampilkanStruk(int pilihan, int jumlah, int total) {
    char *namamenu = "";

    switch (pilihan) {
        case 1:
            namamenu = "Bakso";
            break;
        case 2:
            namamenu = "Mie Ayam";
            break;
        case 3:
            namamenu = "Mie Goreng";
            break;
        case 4:
            namamenu = "Pangsit";
            break;
        default:
            namamenu = "Nama tidak diketahui";
            break;
    }

    printf("\nStruk Pembelian\n");
    printf("Menu yang dipilih : %s\n", namamenu);
    printf("Jumlah pesanan : %d\n", jumlah);
    printf("Total pesanan : %d\n", total);
}

int main() {
    int pilihan;
    int jumlah;
    int totalharga;

    tampilkanMenu();
    printf("Pilih menu makanan yang ingin anda pesan : ");
    scanf("%d", &pilihan);

    if (pilihan < 1 || pilihan > 4) {
        printf("Pilihan tidak valid\n");
        return 0;
    }

    printf("Masukkan jumlah pembelian : ");
    scanf("%d", &jumlah);

    if (jumlah <= 0) {
        printf("Pembelian harus lebih dari 0\n");
        return 0;
    }

    totalharga = hitungTotal(pilihan, jumlah);
    tampilkanStruk(pilihan, jumlah, totalharga);

    return 0;
}