//header yang digunakan dalam pembuatan program game
#include <stdio.h>   //header standar input output bahasa c
#include <stdlib.h>	 //header standar input output bahasa c
#include <string.h>  //header untuk menggunaakan fungsi array of char
#include <windows.h> //header yang digunakan untuk menggunakan fungsi system cls
#include <stdbool.h> //header yang digunakan untuk melakukan pengecekan benar atau salah
#include <conio.h>
#include <process.h>


#include "ticTacToe/ticTacToe.h"
#include "sistemLogin/sistemLogin.h"
#include "batuGuntingKertas/batuGuntingKertas.h"



void main() {
 
  
  char menu;
  char game; 
  bool cekUser;
  FILE* fptr;

  tampilkanJudul(); //fungsi digunakan untuk menamopilkan judul program
  layarMenunggu(); //fungsi digunakan untuk menamopilkan loading screen

  system("Color 0A"); //fungsi digunakan untuk merubah background dan text terminal 

  tampilkanSelamatDatang(); // fungsi digunakan untuk menampilkan kata selemat datang
  
  

  menu:
  system("Color 0A");
  menu = tampilkanMenu(); // fungsi digunakan  menampilkan menu lalu return nilai input yang dimasukan pengguna

  switch (menu) //nilai di dapatkan dari return nilai fungsi tampilkanmenu() yang di simpan ke variabel menu
  {
  case 'g':
  case 'G'://registrasi

    system("Color 0A");
    masukanDataDiri(&pengguna1.namad, &pengguna1.namab, &pengguna1.email); // fungsi yang digunakan unutk meng input nilai data diri 
    buatPasswordDanUsername(&pengguna1.username, &pengguna1.password);// fungsi yang digunakan untuk membuat password dan username
    
    
    
    if ((fptr = fopen(pengguna1.username,"a+")) == NULL)
    {
        
        exit(1);
    }

     
    fputs(pengguna1.username,fptr);
    fputs("\n", fptr);
   
    fputs(pengguna1.password,fptr);
    fputs("\n", fptr);
   
    fputs(pengguna1.namad,fptr);
    fputs("\n", fptr);
    
    fputs(pengguna1.namab,fptr);
    fputs("\n", fptr);
  
    fputs(pengguna1.email,fptr);
    fputs("\n", fptr);
    
    fclose(fptr);
    layarMenunggu();
    goto menu;

    break;

  case 'a':
  case 'A'://Login


      //cekUser = cekUsernameDanPassword(&pengguna1.username, &pengguna1.password, &pengguna1.inputUsername, &pengguna1.inputPassword); //fungsi  mengembalikan  nilai false / true


       system("cls");
        
        printf("\t\t=========================================MASUKAN USERNAME DAN PASSWORD======================================\n\n");
        
        printf("\t\t                              Username : ");
        scanf("%s", pengguna1.inputUsername);
        printf("\n");
        printf("\t\t                              Password : ");
        scanf("%s", pengguna1.inputPassword);
        printf("\n");
        
        printf("\t\t============================================================================================================\n");
        
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        system("cls");


        if((fptr = fopen(pengguna1.inputUsername,"r")) == NULL ){
             cekUser = false;
       
        }

          fgets(pengguna1.username, sizeof(pengguna1.username), fptr);
          fgets(pengguna1.password, sizeof(pengguna1.password), fptr);

            if (strcmp(pengguna1.inputUsername, pengguna1.username) == -1 && strcmp(pengguna1.inputPassword, pengguna1.password) == -1)
            {
              cekUser = true;
            }else
            { 
          
                cekUser = false;
            }
        
       
         fclose(fptr);

      if (cekUser)
      {
      menuGame:
        layarMenunggu();
        system("Color 0A");
        char game = masukMenuGame(&pengguna1.namad, &pengguna1.namab);

            if (game == 'C' || game == 'c')
            {
              layarMenunggu();
              ticTacToe();
              goto menuGame;
            }
            else if (game == 'w' || game == 'W')
            {
              
              batuGuntingKertas();
              goto menuGame;
            }
            else if (game == 'b' || game == 'B')
            {
              layarMenunggu();
              exit(0);  //fungsi yang digunakan untuk keluar dari programs
            }

            else
            {
            
              system("Color 0C");
             
              printf("pilihan anda salah");
              getch();
              goto menuGame;
            } 
      } 
      else
      {
        
        system("Color 0C");
        printf("\t\tUsername atau password Anda salah / Anda belum registrasi\n\n");
        getch();
        goto menu;
      }

    break;

  case 'b':
  case 'B'://keluar

    exit(0);

    break;

  default:
   
    system("Color 0C");
    printf("\t\tpilihan anda salah");
    getch();
    goto menu;
    break;
    }
}

