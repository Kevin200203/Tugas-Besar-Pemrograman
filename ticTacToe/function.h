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