#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "../sistemLogin/sistemLogin.h"





int Randoms(int lower, int upper,
                  int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        int num = (rand() %
                   (upper - lower + 1)) + lower;
        return num;
    }
}



void batuGuntingKertas()
{

    int lower = 1, upper = 3, count = 3;
   
    
   

   
        int musuh, player;
     
        char ulang;

        do
        {
            system("cls");
            srand(time(0));
            musuh = Randoms(lower, upper, count);
         
            printf("ini Permainan Gunting, Batu , Kertas\n");
          
            printf("\t\t1. Gunting\n");
           
            printf("\t\t2. Batu\n");
           
            printf("\t\t3. Kertas\n");
          
            printf("Silahkan Pilih Tanganmu : ");
            scanf("%d", &player);
            if (musuh == 1 && player == 1)
            {
                
                printf("Cpu = Gunting vs Player = Gunting");
               
                printf("Permainan Seri");
            }
            else if (musuh == 1 && player == 2)
            {
              
                printf("Cpu = Gunting vs Player = Batu");
                
                printf("Pemenangnya Player");
            }
            else if (musuh == 1 && player == 3)
            {
               
                printf("Cpu = Gunting vs Player = Kertas");
               
                printf("Pemenangnya Cpu");
            }
            else if (musuh == 2 && player == 1)
            {
                
                printf("Cpu = Batu vs Player = Gunting");
                
                printf("Pemenangnya Cpu");
            }
            else if (musuh == 2 && player == 2)
            {
               
                printf("Cpu = Batu vs Player = Batu");
               
                printf("Permainan Seri");
            }
            else if (musuh == 2 && player == 3)
            {
               
                printf("Cpu = Batu vs Player = Kertas");
               
                printf("Pemenangnya Player");
            }
            else if (musuh == 3 && player == 1)
            {
                
                printf("Cpu = Kertas vs Player = Gunting");
                
                printf("Pemenangnya Cpu");
            }
            else if (musuh == 3 && player == 2)
            {
                
                printf("Cpu = Kertas vs Player = Batu");
               
                printf("Pemenangnya Cpu");
            }
            else if (musuh == 3 && player == 3)
            {
                
                printf("Cpu = Kertas vs Player = Kertas");
                
                printf("Permainan Seri");
            }

            else
            {
                
                printf("Masukan anda salah");
            }

            
            printf("\tIngin main lagi (y/t) : ");
            scanf("%s", &ulang);
        } while (ulang == 'y' || ulang == 'Y');

            
       
        printf("Tekan ENTER untuk melanjutkan");
        getch();
        layarMenunggu();
}
