#include<stdio.h>

int main(){
    int nilai[5] = {10, 20, 30, 40, 50};

    // printf("%d\n", nilai[0]);
    // printf("%d\n", nilai[1]);
    // printf("%d\n", nilai[2]);
    // printf("%d\n", nilai[3]);

     printf("Nilai index ke-1 %d\n", nilai[1]);
    nilai[1] = 100;

    for(int i = 0; i < 5; i++){
        printf("Nilai ke-%d: %d\n", i, nilai[i]);
    }
    

    return 0;
}