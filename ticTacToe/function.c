#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <mmsystem.h>
#include "../sistemLogin/sistemLogin.h"

char kotak[10];
FILE*rule;
char ticrule[100];

void petunjukPermainan(){
    
}

void menampilkanPapan()
{
    
    system("cls");
    
    printf("\t\t|=============================================================================================================|\n");
   
    printf("\t\t|===========================================     Tic Tac Toe  ================================================|\n");
    
    printf("\t\t|                                         Pemain 1 (X) - Pemain 2 (O)                                         |\n");
 
    printf("\t\t|=============================================================================================================|\n");
   
    printf("\t\t|=============================================================================================================|\n");
    
    printf("\t\t|============================================  _________________  ============================================|\n");
   
    printf("\t\t|============================================ |     |     |     | ============================================|\n");
   
    printf("\t\t|============================================ |  %c  |  %c  |  %c  | ============================================|\n", kotak[1], kotak[2], kotak[3]);
    
    printf("\t\t|============================================ |_____|_____|_____| ============================================|\n");
   
    printf("\t\t|============================================ |     |     |     | ============================================|\n");
  
    printf("\t\t|============================================ |  %c  |  %c  |  %c  | ============================================|\n", kotak[4], kotak[5], kotak[6]);
   
    printf("\t\t|============================================ |_____|_____|_____| ============================================|\n");
   
    printf("\t\t|============================================ |     |     |     | ============================================|\n");
    
    printf("\t\t|============================================ |  %c  |  %c  |  %c  | ============================================|\n", kotak[7], kotak[8], kotak[9]);
    
    printf("\t\t|============================================ |_____|_____|_____| ============================================|\n");
   
    printf("\t\t|=============================================================================================================|\n");
    
    
    
    rule=fopen("C:/Users/LENOVO/Documents/tes.txt", "r");
while(!feof(rule)){
  fgets(ticrule,100,rule);
  printf("%s", ticrule);
}
  fclose(rule);

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
           
            printf("\t\t                       pilihan salah ! tekan ENTER untuk memasukan ulang pilihan");
            pemain--;
            getch();
        }
        i = cekMenang();
        pemain++;
    } while (i == -1);
    
   
    
    menampilkanPapan();
  
    printf("\t\t                       Tekan ENTER untuk melanjutkan");
    getch();
    
    if (pemain == 2 && i == 1)
    {    
        system("cls");
        system("Color 0F");
       
        printf("\t\t _____    ______   __  __              _____   _   _     __     __  __   ______   _   _              _   _    _____\n");
      
        printf("\t\t|  __ \\  |  ____| |  \\/  |     /\\     |_   _| | \\ | |   /_ |   |  \\/  | |  ____| | \\ | |     /\\     | \\ | |  / ____|\n");
      
        printf("\t\t| |__) | | |__    | \\  / |    /  \\      | |   |  \\| |    | |   | \\  / | | |__    |  \\| |    /  \\    |  \\| | | |  __ \n");
        
        printf("\t\t|  ___/  |  __|   | |\\/| |   / /\\ \\     | |   | . ` |    | |   | |\\/| | |  __|   | . ` |   / /\\ \\   | . ` | | | |_ |\n");
       
        printf("\t\t| |      | |____  | |  | |  / ____ \\   _| |_  | |\\  |    | |   | |  | | | |____  | |\\  |  / ____ \\  | |\\  | | |__| |\n");
        
        printf("\t\t|_|      |______| |_|  |_| /_/    \\_\\ |_____| |_| \\_|    |_|   |_|  |_| |______| |_| \\_| /_/    \\_\\ |_| \\_|  \\_____|\n");
        
        
       
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        layarMenunggu();
    }else if (pemain == 3 && i == 1)
    {
        system("cls");
        system("Color 0F");
       
        printf("\t\t _____    ______   __  __              _____   _   _     ___      __  __   ______   _   _              _   _    _____\n");
      
        printf("\t\t|  __ \\  |  ____| |  \\/  |     /\\     |_   _| | \\ | |   |__ \\    |  \\/  | |  ____| | \\ | |     /\\     | \\ | |  / ____|\n");
        
        printf("\t\t| |__) | | |__    | \\  / |    /  \\      | |   |  \\| |      ) |   | \\  / | | |__    |  \\| |    /  \\    |  \\| | | |  __\n");
     
        printf("\t\t|  ___/  |  __|   | |\\/| |   / /\\ \\     | |   | . ` |     / /    | |\\/| | |  __|   | . ` |   / /\\ \\   | . ` | | | |_ |\n");
        
        printf("\t\t| |      | |____  | |  | |  / ____ \\   _| |_  | |\\  |    / /_    | |  | | | |____  | |\\  |  / ____ \\  | |\\  | | |__| |\n");
       
        printf("\t\t|_|      |______| |_|  |_| /_/    \\_\\ |_____| |_| \\_|   |____|   |_|  |_| |______| |_| \\_| /_/    \\_\\ |_| \\_|  \\_____|\n");

        
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        layarMenunggu();
    }else if(i == 0){
        system("cls");
        system("Color 0F");
       
        printf("\t\t  _____    ______   _____    __  __              _____   _   _              _   _      _____   ______   _____    _____ \n"); 
       
        printf("\t\t|  __ \\  |  ____| |  __ \\  |  \\/  |     /\\     |_   _| | \\ | |     /\\     | \\ | |    / ____| |  ____| |  __ \\  |_   _|\n");
      
        printf("\t\t| |__) | | |__    | |__) | | \\  / |    /  \\      | |   |  \\| |    /  \\    |  \\| |   | (___   | |__    | |__) |   | |  \n");
       
        printf("\t\t|  ___/  |  __|   |  _  /  | |\\/| |   / /\\ \\     | |   | . ` |   / /\\ \\   | . ` |    \\___ \\  |  __|   |  _  /    | |  \n");
        
        printf("\t\t| |      | |____  | | \\ \\  | |  | |  / ____ \\   _| |_  | |\\  |  / ____ \\  | |\\  |    ____) | | |____  | | \\ \\   _| |_     \n");
        
        printf("\t\t|_|      |______| |_|  \\_\\ |_|  |_| /_/    \\_\\ |_____| |_| \\_| /_/    \\_\\ |_| \\_|   |_____/  |______| |_|  \\_\\ |_____|    \n");

        
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        layarMenunggu();
    }

    

   
    return 0;
}