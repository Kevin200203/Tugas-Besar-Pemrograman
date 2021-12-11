//header yang digunakan untuk standar input output di bahasa c
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>


int main()
{
    int menu,i,member, simpanindex =0;
    char nama[25],namad[25],namab[25],email[25];
    char password[25],listPassword[20][25],listUsername[20][25];
    bool cekUser;
    FILE *pf;
    printf("\n\n");
    printf("\t\t  |===================================================================|\n");
    printf("\t\t  |===========================SnakeCross Mini Game====================|\n|");
    printf("\t\t  |==============SELAMAT DATANG DI PROGRAM MINI GAME SEDERHANA========|\n");
    printf("\t\t  |                                                                   |\n");
    printf("\t\t  |Program disusun dan dibuat oleh:                                   |\n");
	printf("\t\t  |               1. I Gede Ari Wisnu Sanjaya (2105551047)            |\n");
	printf("\t\t  |               2. Kevin Siringoringo       (2105551031)            |\n");
    printf("\t\t  |===================================================================|\n\n");
    printf("\t\t\tProgram Ini Dibuat Untuk Memenuhi Tugas Besar Pemrograman\n\t");
    printf("\t\t\tTekan ENTER untuk melanjutkan");
    getchar();
    system("cls");
    menu :
        printf("\n\t SILAHKAN PILIH MENU DIBAWAH INI");
        printf("\n\n 1.DAFTAR AKUN\n 2.LOGIN \n 3. KELUAR\n PILIH MENU :");
        scanf("%d", &menu);
        system("cls");
        switch(menu)
        {
    case 1:

        if((pf=fopen("latihan.txt","w"))== NULL)
            {
				printf("file gagal diciptakan!\n");
				exit(1);
			}
            printf("\n\t|SILAHKAN LANJUTKAN UNTUK MEMBUAT AKUN\n");
            printf("nama depan anda : ");
            scanf("%s", namad);
            printf("nama belakang anda : ");
            scanf("%s", namab);
            printf("Masukkan Email anda : ");
            scanf("%s", email);
            printf("\t\t\t\t\t|==================================|\n");
            printf("\t\t\t\t\t| SELAMAT DATA ANDA BERHASIL DIBUAT|\n");
            printf("\t\t\t\t\t|Username : ");
            scanf("%s", nama);
            printf("\t\t\t\t\tBuat Password :");
            scanf("%s", password);
            strcpy(listUsername[member], nama);
            strcpy(listPassword[member], password);
            printf("\t\t\t\n **************** SIPPPP,Akun anda berhasil di buat *************\n\n");
            goto menu;
            break;
    case 2 :
            while(0<1)
            {

                printf("\t*Silahkan login akun yang telah didaftarkan*\n");
                printf("\tUsername : ");
                scanf("%s", nama);

                cekUser = false;

                for(i = 0; listUsername[i][i] != '\0'; i++){

                    if(strcmp(listUsername[i], nama) == 0){
                        simpanindex = 1;
                        cekUser = true;
                    }
                }
        if (cekUser == false){
            printf("\t\nNama anda tidak ada,silahkan lakukan pendaftaran terlebih dahulu\n\n");
            goto menu;
            continue;
        }
        printf("\n");
        printf("\tMasukkan Password :");
        scanf("%s", password);
        cekUser = false;

                for(i = 0; listPassword[i][i] != '\0'; i++){

                    if(strcmp(listPassword[i], password) == 0){
                        simpanindex = 1;
                        cekUser = true;
                    }
                }
        if (cekUser == false){
            printf("\t\nSandi anda salah, mohon periksa kembali\n\n");
            goto menu;
            continue;
        }
        printf("\t\t\t \n\nAnda Berhasil Login\n\n");


        printf("|===========================Welcome to our mini game SnakeCross======================|\n");
        printf("|Nama Depan : %s            \n", namad);
        printf("|Nama Belakang : %s         \n", namab);
        printf("|Email : %s                 \n", email);
        break;
    default :
        printf("\n\njalan-jalan ke gorontalo\n");
        printf("bagus bagus isi bro\n");
        goto menu;

}
        }
}
