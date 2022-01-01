
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
#include <conio.h>
#include <process.h>


#include "ticTacToe/ticTacToe.h"
#include "sistemLogin/sistemLogin.h"
#include "batuGuntingKertas/batuGuntingKertas.h"



void main() {
 
  
  char menu;
  char game; 
  bool cekUser;


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
    layarMenunggu();
    goto menu;

    break;

  case 'a':
  case 'A'://Login


      cekUser = cekUsernameDanPassword(&pengguna1.username, &pengguna1.password, &pengguna1.inputUsername, &pengguna1.inputPassword); //fungsi  mengembalikan  nilai false / true
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

