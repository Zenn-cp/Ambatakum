#include <stdio.h>

int perkalian(){
    int c = 5;
    int d = 2;

    return c * d;
}

int pejumlahan(){
    int a = 10;
    int b = 5;

    return a + a;
}

void sapa(){
    printf("Halo\n");
    printf("Apa kabar\n");
}

int main(){
    sapa();
    sapa();

    int hasilperkalian = perkalian();
    printf("Hasil perkalian adalah %d\n", hasilperkalian);

    int hasilpenjumlahan = pejumlahan();
    printf("Hasil penjumlahanya adalah %d", hasilpenjumlahan);
    return 0;
}

