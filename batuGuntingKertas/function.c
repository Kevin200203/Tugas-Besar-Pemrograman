#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int printRandoms(int lower, int upper,
                  int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        int num = (rand() %
                   (upper - lower + 1)) +
                  lower;
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
            srand(time(0));
            musuh = printRandoms(lower, upper, count);
            printf("ini Permainan Gunting, Batu , Kertas\n");
            printf("\t\t1. Gunting\n");
            printf("\t\t2. Batu\n");
            printf("\t\t3. Kertas\n");
            printf("\nSilahkan Pilih Tanganmu : ");
            scanf("%d", &player);
            if (musuh == 1 && player == 1)
            {
                printf("\nCpu = Gunting vs Player = Gunting");
                printf("\nPermainan Seri");
            }
            else if (musuh == 1 && player == 2)
            {
                printf("\nCpu = Gunting vs Player = Batu");
                printf("\nPemenangnya Player");
            }
            else if (musuh == 1 && player == 3)
            {
                printf("\nCpu = Gunting vs Player = Kertas");
                printf("\nPemenangnya Cpu");
            }
            else if (musuh == 2 && player == 1)
            {
                printf("\nCpu = Batu vs Player = Gunting");
                printf("\nPemenangnya Cpu");
            }
            else if (musuh == 2 && player == 2)
            {
                printf("\nCpu = Batu vs Player = Batu");
                printf("\nPermainan Seri");
            }
            else if (musuh == 2 && player == 3)
            {
                printf("\nCpu = Batu vs Player = Kertas");
                printf("\nPemenangnya Player");
            }
            else if (musuh == 3 && player == 1)
            {
                printf("\nCpu = Kertas vs Player = Gunting");
                printf("\nPemenangnya Cpu");
            }
            else if (musuh == 3 && player == 2)
            {
                printf("\nCpu = Kertas vs Player = Batu");
                printf("\nPemenangnya Cpu");
            }
            else if (musuh == 3 && player == 3)
            {
                printf("\nCpu = Kertas vs Player = Kertas");
                printf("\nPermainan Seri");
            }

            else
            {
                printf("Masukan anda salah");
            }

            printf("\n\n\tIngin main lagi (y/t) : ");
            scanf("%s", &ulang);
           system("cls");
        } while (ulang == 'y' || ulang == 'Y');
        getch();
}
