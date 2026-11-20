#include <stdio.h>

void nim(int nim){
    printf("Nim anda %d", nim);
}

void sapa(char nama[]){
    printf("Halo %s", nama);
}

void inputNama(){
    char nama[50];

    printf("\nMasukkan nama : ");
    scanf("%s", nama);
    printf("Nama anda %s", nama);
}

int main(){
    sapa("Satria\n");
    nim(672026092);
    inputNama();
}