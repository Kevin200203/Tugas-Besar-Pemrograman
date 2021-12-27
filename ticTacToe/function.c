#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <mmsystem.h>
#include "../sistemLogin/sistemLogin.h"

char kotak[10];

void menampilkanPapan()
{
    
    system("cls");
    menujuxy(40, 17);
    printf("\t\t|=============================================================================================================|\n");
    menujuxy(40, 18);
    printf("\t\t|===========================================     Tic Tac Toe  ================================================|\n");
    menujuxy(40, 19);
    printf("\t\t|                                         Pemain 1 (X) - Pemain 2 (O)                                         |\n");
    menujuxy(40, 20);
    printf("\t\t|=============================================================================================================|\n");
    menujuxy(40, 21);
    printf("\t\t|=============================================================================================================|\n");
    menujuxy(40, 22);
    printf("\t\t|============================================  _________________  ============================================|\n");
    menujuxy(40, 23);
    printf("\t\t|============================================ |     |     |     | ============================================|\n");
    menujuxy(40, 24);
    printf("\t\t|============================================ |  %c  |  %c  |  %c  | ============================================|\n", kotak[1], kotak[2], kotak[3]);
    menujuxy(40, 25);
    printf("\t\t|============================================ |_____|_____|_____| ============================================|\n");
    menujuxy(40, 26);
    printf("\t\t|============================================ |     |     |     | ============================================|\n");
    menujuxy(40, 27);
    printf("\t\t|============================================ |  %c  |  %c  |  %c  | ============================================|\n", kotak[4], kotak[5], kotak[6]);
    menujuxy(40, 28);
    printf("\t\t|============================================ |_____|_____|_____| ============================================|\n");
    menujuxy(40, 29);
    printf("\t\t|============================================ |     |     |     | ============================================|\n");
    menujuxy(40, 30);
    printf("\t\t|============================================ |  %c  |  %c  |  %c  | ============================================|\n", kotak[7], kotak[8], kotak[9]);
    menujuxy(40, 31);
    printf("\t\t|============================================ |_____|_____|_____| ============================================|\n");
    menujuxy(40, 32);
    printf("\t\t|=============================================================================================================|\n");
}

int cekMenang()
{
    if (kotak[1] == kotak[2] && kotak[2] == kotak[3])
        return 1;
    else if (kotak[4] == kotak[5] && kotak[5] == kotak[6])
        return 1;
    else if (kotak[7] == kotak[8] && kotak[8] == kotak[9])
        return 1;
    else if (kotak[1] == kotak[4] && kotak[4] == kotak[7])
        return 1;
    else if (kotak[2] == kotak[5] && kotak[5] == kotak[8])
        return 1;
    else if (kotak[3] == kotak[6] && kotak[6] == kotak[9])
        return 1;
    else if (kotak[1] == kotak[5] && kotak[5] == kotak[9])
        return 1;
    else if (kotak[3] == kotak[5] && kotak[5] == kotak[7])
        return 1;
    else if (kotak[1] != '1' && kotak[2] != '2' && kotak[3] != '3' && kotak[4] != '4' && kotak[5] != '5' && kotak[6] != '6' && kotak[7] != '7' && kotak[8] != '8' && kotak[9] != '9')
        return 0;
    else
        return -1;
}

void menambahAngka()
{
    int index;
    for (index = 0; index < 10; index++)
    {
        if (index == 0)
        {
            kotak[index] = 'o';
        }
        else if (index == 1)
        {
            kotak[index] = '1';
        }
        else if (index == 2)
        {
            kotak[index] = '2';
        }
        else if (index == 3)
        {
            kotak[index] = '3';
        }
        else if (index == 4)
        {
            kotak[index] = '4';
        }
        else if (index == 5)
        {
            kotak[index] = '5';
        }
        else if (index == 6)
        {
            kotak[index] = '6';
        }
        else if (index == 7)
        {
            kotak[index] = '7';
        }
        else if (index == 8)
        {
            kotak[index] = '8';
        }
        else if (index == 9)
        {
            kotak[index] = '9';
        }
       
    }
}


// tampilkanPemenang

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
        menujuxy(40, 35);
        printf("\t\t                                         Pemain %d, memasukan pilihan : ", pemain);
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
            menujuxy(40, 35);
            printf("\t\t                       pilihan salah ! tekan ENTER untuk memasukan ulang pilihan");
            pemain--;
            getch();
        }
        i = cekMenang();
        pemain++;
    } while (i == -1);
    
   
    
    menampilkanPapan();
    menujuxy(40, 35);
    printf("\t\t                       Tekan ENTER untuk melanjutkan");
    getch();
    
    if (pemain == 2 && i == 1)
    {    
        system("cls");
        system("Color 0F");
        menujuxy(40, 17);
        printf("\t\t _____    ______   __  __              _____   _   _     __     __  __   ______   _   _              _   _    _____\n");
        menujuxy(40, 18);
        printf("\t\t|  __ \\  |  ____| |  \\/  |     /\\     |_   _| | \\ | |   /_ |   |  \\/  | |  ____| | \\ | |     /\\     | \\ | |  / ____|\n");
        menujuxy(40, 19);
        printf("\t\t| |__) | | |__    | \\  / |    /  \\      | |   |  \\| |    | |   | \\  / | | |__    |  \\| |    /  \\    |  \\| | | |  __ \n");
        menujuxy(40, 20);
        printf("\t\t|  ___/  |  __|   | |\\/| |   / /\\ \\     | |   | . ` |    | |   | |\\/| | |  __|   | . ` |   / /\\ \\   | . ` | | | |_ |\n");
        menujuxy(40, 21);
        printf("\t\t| |      | |____  | |  | |  / ____ \\   _| |_  | |\\  |    | |   | |  | | | |____  | |\\  |  / ____ \\  | |\\  | | |__| |\n");
        menujuxy(40, 22);
        printf("\t\t|_|      |______| |_|  |_| /_/    \\_\\ |_____| |_| \\_|    |_|   |_|  |_| |______| |_| \\_| /_/    \\_\\ |_| \\_|  \\_____|\n");
        
        
        menujuxy(40, 25);
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        layarMenunggu();
    }else if (pemain == 3 && i == 1)
    {
        system("cls");
        system("Color 0F");
        menujuxy(40, 17);
        printf("\t\t _____    ______   __  __              _____   _   _     ___      __  __   ______   _   _              _   _    _____\n");
        menujuxy(40, 18);
        printf("\t\t|  __ \\  |  ____| |  \\/  |     /\\     |_   _| | \\ | |   |__ \\    |  \\/  | |  ____| | \\ | |     /\\     | \\ | |  / ____|\n");
        menujuxy(40, 19);
        printf("\t\t| |__) | | |__    | \\  / |    /  \\      | |   |  \\| |      ) |   | \\  / | | |__    |  \\| |    /  \\    |  \\| | | |  __\n");
        menujuxy(40, 20);
        printf("\t\t|  ___/  |  __|   | |\\/| |   / /\\ \\     | |   | . ` |     / /    | |\\/| | |  __|   | . ` |   / /\\ \\   | . ` | | | |_ |\n");
        menujuxy(40, 21);
        printf("\t\t| |      | |____  | |  | |  / ____ \\   _| |_  | |\\  |    / /_    | |  | | | |____  | |\\  |  / ____ \\  | |\\  | | |__| |\n");
        menujuxy(40, 22);
        printf("\t\t|_|      |______| |_|  |_| /_/    \\_\\ |_____| |_| \\_|   |____|   |_|  |_| |______| |_| \\_| /_/    \\_\\ |_| \\_|  \\_____|\n");

        menujuxy(40, 25);
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        layarMenunggu();
    }else if(i == 0){
        system("cls");
        system("Color 0F");
        menujuxy(40, 17);
        printf("\t\t  _____    ______   _____    __  __              _____   _   _              _   _      _____   ______   _____    _____ \n"); 
        menujuxy(40, 18);
        printf("\t\t|  __ \\  |  ____| |  __ \\  |  \\/  |     /\\     |_   _| | \\ | |     /\\     | \\ | |    / ____| |  ____| |  __ \\  |_   _|\n");
        menujuxy(40, 19);
        printf("\t\t| |__) | | |__    | |__) | | \\  / |    /  \\      | |   |  \\| |    /  \\    |  \\| |   | (___   | |__    | |__) |   | |  \n");
        menujuxy(40, 20);
        printf("\t\t|  ___/  |  __|   |  _  /  | |\\/| |   / /\\ \\     | |   | . ` |   / /\\ \\   | . ` |    \\___ \\  |  __|   |  _  /    | |  \n");
        menujuxy(40, 21);
        printf("\t\t| |      | |____  | | \\ \\  | |  | |  / ____ \\   _| |_  | |\\  |  / ____ \\  | |\\  |    ____) | | |____  | | \\ \\   _| |_     \n");
        menujuxy(40, 22);
        printf("\t\t|_|      |______| |_|  \\_\\ |_|  |_| /_/    \\_\\ |_____| |_| \\_| /_/    \\_\\ |_| \\_|   |_____/  |______| |_|  \\_\\ |_____|    \n");

        menujuxy(40, 25);
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        layarMenunggu();
    }

    

   
    return 0;
}