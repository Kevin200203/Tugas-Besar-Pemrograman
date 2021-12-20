#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
#include "unite.h"


int ticTacToe();


int main()
{
    Pengguna pengguna1;
    system("Color 0A");
    int game; 
    int menu,i,member, simpanindex =0;
    bool cekUser;

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
    system("Color 0A");
        printf("\n\t SILAHKAN PILIH MENU DIBAWAH INI\n\n");
        printf("1.DAFTAR AKUN                       2.Login                    3.Keluar \n\n");
        printf("=============");
        printf("PILIH MENU :");
        scanf("%d", &menu);
        system("cls");
        switch(menu)
        {
    case 1:

            printf("\n\t|SILAHKAN LANJUTKAN UNTUK MEMBUAT AKUN|\n");
            printf("nama depan anda : ");
            scanf("%s", pengguna1.namad);
            printf("nama belakang anda : ");
            scanf("%s", pengguna1.namab);
            printf("Masukkan Email anda : ");
            scanf("%s", pengguna1.email);
            printf("\t\t\t\t\t|==================================|\n");
            printf("\t\t\t\t\t| SELAMAT DATA ANDA BERHASIL DIBUAT|\n");
            printf("\t\t\t\t\t|Username : ");
            scanf("%s", pengguna1.nama);
            fflush(stdin);
            printf("\t\t\t\t\tBuat Password :");
            scanf("%s", pengguna1.password);
            strcpy(pengguna1.listUsername, pengguna1.nama);
            strcpy(pengguna1.listPaswword, pengguna1.password);
            printf("\t\t\t\n **************** SIPPPP,Akun anda berhasil di buat *************\n\n");
            goto menu;
            break;
    case 2 :
            while(0<1)
            {

                printf("\t*Silahkan login akun yang telah didaftarkan*\n");
                printf("\tUsername : ");
                scanf("%s", pengguna1.nama);

                cekUser = false;

                for(i = 0; pengguna1.listUsername[i][i] != '\0'; i++){

                    if(strcmp(pengguna1.listUsername[i], pengguna1.nama) == 0){
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
        scanf("%s", pengguna1.password);
        cekUser = false;

                for(i = 0; pengguna1.listPaswword[i][i] != '\0'; i++){

                    if(strcmp(pengguna1.listPaswword[i], pengguna1.password) == 0){
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


        printf("|===========================welcome to  our SnakeCross mini game %s======================|\n", pengguna1.nama);
        printf("|Nama Depan : %s            \n", pengguna1.namad);
        printf("|Nama Belakang : %s         \n", pengguna1.namab);
        printf("|Email : %s                 \n", pengguna1.email);

        printf("\nPilih Game yang ingin dimaninkan");
        printf("\n1. TicTacToe");
        printf("\nPILIH GAME : ");
        scanf("%d",&game);
        
         if(game == 1){
            printf("berhasil");
            ticTacToe();
            system("cls");
            goto menu;   
        }
        break;
    case 3 :
        exit(0);
    default :
        printf("\n\njalan-jalan ke gorontalo\n");
        printf("bagus bagus isi bro\n");
        goto menu;

        }
}
}
