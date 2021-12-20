#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <mmsystem.h>
#include "function.h"

char kotak[10];
void menambahAngka();
int cekMenang();
void menampilkanPapan();

int ticTacToe()
{   
    system("color 78");
    int pemain = 1, i, pilihan;
    char tanda; //X,O
    menambahAngka();
    do
    {

        menampilkanPapan();
        pemain = (pemain % 2) ? 1 : 2;
        printf("Pemain %d, memasukan pilihan : ", pemain);
        scanf("%d", &pilihan);
        tanda = (pemain == 1) ? 'X' : 'O';
        if (pilihan == 1 && kotak[1] == '1')
            kotak[1] = tanda;
        else if (pilihan == 2 && kotak[2] == '2')
            kotak[2] = tanda;
        else if (pilihan == 3 && kotak[3] == '3')
            kotak[3] = tanda;
        else if (pilihan == 4 && kotak[4] == '4')
            kotak[4] = tanda;
        else if (pilihan == 5 && kotak[5] == '5')
            kotak[5] = tanda;
        else if (pilihan == 6 && kotak[6] == '6')
            kotak[6] = tanda;
        else if (pilihan == 7 && kotak[7] == '7')
            kotak[7] = tanda;
        else if (pilihan == 8 && kotak[8] == '8')
            kotak[8] = tanda;
        else if (pilihan == 9 && kotak[9] == '9')
            kotak[9] = tanda;

        else
        {
            printf("pilihan salah !");
            pemain--;
            getch();
        }
        i = cekMenang();
        pemain++;
    } while (i == -1);
    
   
    
    menampilkanPapan();
    if (1 == 1)
    {
        printf("==>pemain %d menang", --pemain);
        //sesuaikan path dengan tempat file win.wav
        PlaySound(TEXT("D:\\tugasBesarPemrog\\Tugas-Besar-Pemrograman\\win.wav"), NULL, SND_SYNC);
        }
    else
    {
        printf("==> permainan seri");
    }
    
    
    getch();
    return 0;
}