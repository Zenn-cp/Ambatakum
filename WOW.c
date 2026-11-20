#include <stdio.h>

int main() {
    char input_str[50];
    double a, b, c;
    double sisi1, sisi2, miring;

    printf("Penentu Segitiga Siku-Siku\n");
    printf("Ketik titik (.) untuk keluar.\n\n");

    while (1) {
        printf("Masukkan sisi pertama : ");
        scanf("%s", input_str);
        if (input_str[0] == '.' && input_str[1] == '\0') {
            printf("Program dihentikan. Terima kasih!\n");
            break;
        }
        sscanf(input_str, "%lf", &a);

        printf("Masukkan sisi kedua : ");
        scanf("%s", input_str);
        if (input_str[0] == '.' && input_str[1] == '\0') {
            printf("Program dihentikan. Terima kasih!\n");
            break;
        }
        sscanf(input_str, "%lf", &b);

        printf("Masukkan sisi ketiga : ");
        scanf("%s", input_str);
        if (input_str[0] == '.' && input_str[1] == '\0') {
            printf("Program dihentikan. Terima kasih!\n");
            break;
        }
        sscanf(input_str, "%lf", &c);

        if (a >= b && a >= c) {
            miring = a;
            sisi1 = b;
            sisi2 = c;
        } else if (b >= a && b >= c) {
            miring = b;
            sisi1 = a;
            sisi2 = c;
        } else {
            miring = c;
            sisi1 = a;
            sisi2 = b;
        }

        double kuadrat_sisi = (sisi1 * sisi1) + (sisi2 * sisi2);
        double kuadrat_miring = miring * miring;

        if (kuadrat_sisi == kuadrat_miring) {
            printf("--> Hasil: Segitiga tersebut adalah SEGITIGA SIKU-SIKU.\n\n");
        } else {
            printf("--> Hasil: Segitiga tersebut BUKAN segitiga siku-siku.\n\n");
        }
    }

    return 0;
}