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



void main() {
 

  char menu;
  char game;
  int i, member, simpanindex = 0;
  bool cekUser = false;

  layarMenunggu();
  system("Color 0A");
  
  tampilkanSelamatDatang();
  tampilkanJudul();

  menu:
  system("Color 0A");
  menu = tampilkanMenu();


    switch (menu){
    case 'g':
    case 'G':

        masukanDataDiri(&pengguna1.namad,&pengguna1.namab,&pengguna1.email);
          // printf("|Nama Depan : %s            \n", pengguna1.namad);
          // printf("|Nama Belakang : %s         \n", pengguna1.namab);
          // printf("|Email : %s                 \n", pengguna1.email);
        buatPasswordDanUsername(&pengguna1.username, &pengguna1.password);

          goto menu;
    
          break;
          
    case 'a':
    case 'A': 

        cekUser = cekUsernameDanPassword(&pengguna1.username, &pengguna1.password, &pengguna1.inputUsername, &pengguna1.inputPassword);
        if (cekUser){ 
          char game = masukMenuGame(&pengguna1.namad, &pengguna1.namab);
          
            if (game == 'C' || game == 'c'){
              ticTacToe();
              goto menu;
            }else if (game == 'w' || game == 'W'){
            printf("snake game");
            }else{
              printf("pilihan anda salah");
            }
          
            

        }else{
          printf("\t\nUsername atau password anda salah\n\n");
        }
        

            
    case 'b':
    case 'B':

    exit(0);

    break;
    
    default : 
        break;
    }
}

