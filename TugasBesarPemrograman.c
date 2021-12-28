
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
        buatPasswordDanUsername(&pengguna1.username, &pengguna1.password);

          goto menu;
    
          break;
          
    case 'a':
    case 'A': 
          
        cekUser = cekUsernameDanPassword(&pengguna1.username, &pengguna1.password, &pengguna1.inputUsername, &pengguna1.inputPassword);
        if (cekUser){ 
          menuGame:
          system("Color 0A");
          char game = masukMenuGame(&pengguna1.namad, &pengguna1.namab);
          
            if (game == 'C' || game == 'c'){
              layarMenunggu();
              ticTacToe();
              goto menuGame;
            }else if (game == 'w' || game == 'W'){
              menujuxy(40, 17);
              batuGuntingKertas();
              goto menuGame;
            }
            else if (game == 'b' || game == 'B')
            {
              exit(0);
            }

            else{
              menujuxy(40, 17);
              printf("pilihan anda salah");
              goto menuGame;
            }
          
            

        }else{
          menujuxy(40, 17);
          printf("\t\nUsername atau password Anda salah / Anda belum registrasi\n\n");
          goto menu;
        }
        

            
    case 'b':
    case 'B':

    exit(0);

    break;
    
    default :
      menujuxy(40, 17);
      printf("pilihan anda salah");
      goto menu;
      break;
    }
}

