#include <stdio.h>

int main(){

    int x = 30;
    int y = 10;
    int nilai = 60;
    int umur = 17;

// if(x>y){
//     printf("x lebih dari y");
// }

// if (nilai > 80){
//     printf("Nilai anda adalah A");
// }else if (nilai > 70){
//     printf("Nilai anda adalah B");
// }else if (nilai > 60){
//     printf("Nilai anda adalah C");
// } else {
//     printf("REMIDI");
// }

if (nilai >= 50){
    if (nilai >= 80){
        printf("Nilai anda A");
    } else if(nilai >= 70) {
        printf("Nilai anda B");
    } else {
        printf("Anda lulus dengan nilai C");
    }
} else {
    if(nilai >= 40){
        printf("Anda tidak lulus dengan nilai D");
    } else {
        printf("Anda tidak dengan nilai E");
    }
}

return 0;   
}

//if else menurut saya seperti jika maka, kode akan dijalankan jika kondisi yang kita mau terpenuhi

//• if (Jika):
//Jika langit mendung gelap, maka saya bawa payung.
//• else (Jika tidak / pilihan terakhir):
//Jika tidak (langit cerah/tidak mendung), maka saya tidak membawa payung.

//kapan kita menggunakan if else Saat hanya ada DUA kemungkinan (benar/salah)

//kapan kita menggunakan if else if Saat ada LEBIH DARI DUA kemungkinan/kondisi bertingkat