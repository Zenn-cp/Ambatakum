#include <stdio.h>

char nama[50];
int nim;

int main () {
    printf("Masukkan nama : ");
    scanf(" %[^\n]", nama);
    
    printf("Masukkan Nim : ");
    scanf("%d", &nim);

    printf("\nNama anda : %s", nama);
    printf("\nNim anda : %d\n", nim);

    return 0;
    }