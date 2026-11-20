#include <stdio.h>
#include <string.h>

int main(){
    char username[20];
    char password[20];

    printf("Masukkan username: ");
    scanf("%s", username);

    printf("Masukkan password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "123") == 0){
        printf("Anda berhasil login");
    } else {
        printf("Hidup anda sisa 5 menit");
    }

    return 0;
}

//anatomi dasar c adalah library utama, fungsi utama, return value

//contohnya nama variable yang valid : Nama_depan (Pakai underscore)
//Yang tidak valid : nama depan (memakai spasi)

//menggunakan printf seperti printf("Hai");

//Scanf adalah untuk memasukkan inputan dari pengguna

//x++ untuk menambahkan 1 nilai, kalau x-- adalah untuk mengurangi nilai 1

