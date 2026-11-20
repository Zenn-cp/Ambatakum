#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("mahasiswa.txt", "w");

    if(fp == NULL){
        printf("File tidak dapat dibuka\n");
        return 1;
    }

    fprintf(fp, "Nama : Satria\n");
    fprintf(fp, "NIM : 123456789\n");
    fprintf(fp, "Nilai : 100");

    fclose(fp);

    printf("Data berhasil ditulis ke file mahasiswa.txt");

    return 0;
}