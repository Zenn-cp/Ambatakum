#include <stdio.h>

int cekLulus(){
    int nilai;

    printf("Masukkan nilai : ");
    scanf("%d", &nilai);

    if (nilai >= 60){
        return 1;
    }else {
        return 0;
    }
}

void inputMahasiswa(){
    char nama[50];

    printf("Masukkan nama : ");
    scanf("%s", nama);

    printf("\nNama: %s\n", nama);
}

int main(){
    int status;
    
    printf("==== DATA MAHASISWA ====\n");

    inputMahasiswa();

    status = cekLulus();

    if (status == 1){
        printf("Kamu lulus");
    }else{
        printf("Kamu tidak lulus");
    }

    return 0;
}