extern char kotak[10];

void menampilkanPapan()
{
    system("cls");
    printf("\n\n\t Tic Tac Toe \n\n");
    printf("Pemain 1 (X) - Pemain 2 (O) \n\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", kotak[1], kotak[2], kotak[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", kotak[4], kotak[5], kotak[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", kotak[7], kotak[8], kotak[9]);
    printf("     |     |     \n");
}