#include <stdio.h>

int main()
{
    FILE *mahasiswa;
    char teks[100];

    mahasiswa = fopen("mahasiswa.txt", "r");

    if (mahasiswa == NULL)
    {
        printf("File tidak ditemukan");
        return 1;
    }

    while (fgets(teks, sizeof(teks), mahasiswa) != NULL)
    {
        printf("%s", teks);
    }
    fclose(mahasiswa);

    return 0;
}