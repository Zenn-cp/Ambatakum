#include <stdio.h>
#include <string.h>

int main(){
    char nama[] = "Satria";
    char tambahan[] = "Adalah mahasiswa ganteng";
    char tambahan2[]= "dan keren";

    strcat(strcat(nama, tambahan), tambahan2);
    printf("hasil penggabungan : %s\n", nama);
    return 0;
}