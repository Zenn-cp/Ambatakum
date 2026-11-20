#include <stdio.h>
#include <string.h>

int main(){
    char kalimat [30];

    printf("Masukkan nama panggilan : ");
    fgets(kalimat, sizeof(kalimat), stdin); //input dengan spasi (fgets)

    kalimat[strcspn(kalimat, "\n")] = '\0';

    int panjang = strlen(kalimat);

    printf("Kalimat: %s\n", kalimat);
    printf("Jumlah karakter : %d", panjang);


    return 0;
}