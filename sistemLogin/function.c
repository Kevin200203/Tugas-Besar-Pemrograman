
void menujuxy(int x, int y)
{
        COORD coord;

        coord.X = x;
        coord.Y = y;

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void tampilkanSelamatDatang(){
        system("cls");
        menujuxy(20, 10);
        printf("\t\t   _____   ______   _                   __  __              _______     _____               _______              _   _    _____   \n");
        menujuxy(20, 11);
        printf("\t\t  / ____| |  ____| | |          /\\     |  \\/  |     /\\     |__   __|   |  __ \\      /\\     |__   __|     /\\     | \\ | |  / ____|  \n");
        menujuxy(20, 12);
        printf("\t\t | (___   | |__    | |         /  \\    | \\  / |    /  \\       | |      | |  | |    /  \\       | |       /  \\    |  \\| | | |  __   \n");
        menujuxy(20, 13);
        printf("\t\t  \\___ \\  |  __|   | |        / /\\ \\   | |\\/| |   / /\\ \\      | |      | |  | |   / /\\ \\      | |      / /\\ \\   | . ` | | | |_ |  \n");
        menujuxy(20, 14);
        printf("\t\t  ____) | | |____  | |____   / ____ \\  | |  | |  / ____ \\     | |      | |__| |  / ____ \\     | |     / ____ \\  | |\\  | | |__| |  \n");
        menujuxy(20, 15);
        printf("\t\t |_____/  |______| |______| /_/    \\_\\ |_|  |_| /_/    \\_\\    |_|      |_____/  /_/    \\_\\    |_|    /_/    \\_\\ |_| \\_|  \\_____|   \n");

        
        printf("\n");
        menujuxy(23, 17);
        printf("\t\t\t\t\t\t\t\t _____    _____ \n");
        menujuxy(23, 18);
        printf("\t\t\t\t\t\t\t\t|  __ \\ |_   _|\n");
        menujuxy(23, 19);
        printf("\t\t\t\t\t\t\t\t| |  | |   | |  \n");
        menujuxy(23, 20);
        printf("\t\t\t\t\t\t\t\t| |  | |   | |  \n");
        menujuxy(23, 21);
        printf("\t\t\t\t\t\t\t\t| |__| |  _| |_ \n");
        menujuxy(23, 22);
        printf("\t\t\t\t\t\t\t\t|_____/  |_____|\n");

    
        printf("\n");
        menujuxy(21, 25);
        printf("\t\t\t\t   _____   _   _              _  __  ______      _____   _____     ____     _____    _____          \n");
        menujuxy(21, 26);
        printf("\t\t\t\t  / ____| | \\ | |     /\\     | |/ / |  ____|    / ____| |  __ \\   / __ \\   / ____|  / ____|     \n");
        menujuxy(21, 27);
        printf("\t\t\t\t | (___   |  \\| |    /  \\    | ' /  | |__      | |      | |__) | | |  | | | (___   | (___         \n");
        menujuxy(21, 28);
        printf("\t\t\t\t  \\___ \\  | . ` |   / /\\ \\   |  <   |  __|     | |      |  _  /  | |  | |  \\___ \\   \\___ \\  \n");
        menujuxy(21, 29);
        printf("\t\t\t\t  ____) | | |\\  |  / ____ \\  | . \\  | |____    | |____  | | \\ \\  | |__| |  ____) |  ____) |    \n");
        menujuxy(21, 30);
        printf("\t\t\t\t |_____/  |_| \\_| /_/    \\_\\ |_|\\_\\ |______|    \\_____| |_|  \\_\\  \\____/  |_____/  |_____/ \n");

        menujuxy(21, 32);
        printf("\t\t\t\tTekan ENTER untuk melanjutkan");
        getchar();
        system("cls");
}





void tampilkanJudul(){
        system("cls");
        printf("\n\n");

        menujuxy(40, 17);
        printf("\t\t  |===================================================================|\n");
        menujuxy(40, 18);
        printf("\t\t  |===========================SnakeCross Mini Game====================|\n");
        menujuxy(40, 19);
        printf("\t\t  |==============SELAMAT DATANG DI PROGRAM MINI GAME SEDERHANA========|\n");
        menujuxy(40, 20);
        printf("\t\t  |                                                                   |\n");
        menujuxy(40, 21);
        printf("\t\t  |                Program disusun dan dibuat oleh:                   |\n");
        menujuxy(40, 22);
        printf("\t\t  |               1. I Gede Ari Wisnu Sanjaya (2105551047)            |\n");
        menujuxy(40, 23);
        printf("\t\t  |               2. Kevin Siringoringo       (2105551031)            |\n");
        menujuxy(40, 24);
        printf("\t\t  |===================================================================|\n");
        menujuxy(40, 25);
        printf("\t\t          Program Ini Dibuat Untuk Memenuhi Tugas Besar Pemrograman    \n\t");

        menujuxy(40, 27);
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getchar();
        system("cls");
}

char tampilkanMenu(){
        system("cls");
        
        char value;
        menujuxy(40, 17);
        printf("\t\t|====================================SILAHKAN TEKAN PILIHAN DI BAWAH PADA KEYBOARD==============================|\n");
        menujuxy(40, 18);
        printf("\t\t|===============================================================================================================|\n");
        menujuxy(40, 19);
        printf("\t\t|             G DAFTAR AKUN                       A Login                    B Keluar                           |\n");
        menujuxy(40, 20);
        printf("\t\t|===============================================================================================================|\n");
        menujuxy(45, 21);
        value = getch();
        system("cls");
        return value;    
}




void masukanDataDiri(char (*namad)[25],char (*namab)[25],char (*email)[25]){
        system("cls");
        menujuxy(40, 17);
        printf("\t\t=========================================MASUKAN DATA DIRI===========================================\n");
        menujuxy(40, 18);
        printf("\t\t=====================================================================================================\n");
        menujuxy(40, 20);
        printf("\t\t                     Nama depan anda      : ");
        scanf("%s", namad);                                                
        menujuxy(40, 21);
        printf("\t\t                     Nama belakang anda   : ");                                                                 
        scanf("%s", namab); 
        menujuxy(40, 22);
        printf("\t\t                     Masukkan Email anda  : ");
        scanf("%s", email);
        menujuxy(40, 24);
        printf("\t\t=====================================================================================================\n");
        menujuxy(40, 25);
        printf("\t\t=====================================================================================================\n");
        menujuxy(40, 29);
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        system("cls");
}

void buatPasswordDanUsername(char (*username)[25],char (*password)[25]){
        system("cls");
        menujuxy(40, 17);
        printf("\t\t=========================================MASUKAN USERNAME DAN PASSWORD====================================\n");
        menujuxy(40, 19);
        printf("\t\t                       Username : ");
        scanf("%s", username);
        fflush(stdin);
        menujuxy(40, 21);
        printf("\t\t                       Password : ");
        scanf("%s", password);
        menujuxy(40, 23);
        printf("\t\t===========================================================================================================\n");
        menujuxy(40, 24);
        getch();
        system("cls");

        menujuxy(40, 17);
        printf("\t\t            _  __ _    _  _   _    ____   ______  _____   _    _             _____  _____  _        _____  _____   ____   _    _        _______               \n");
        menujuxy(40, 18);
        printf("\t\t     /\\    | |/ /| |  | || \\ | |  |  _ \\ |  ____||  __ \\ | |  | |    /\\     / ____||_   _|| |      |  __ \\|_   _| |  _ \\ | |  | |   /\\ |__   __|      \n");
        menujuxy(40, 19);
        printf("\t\t    /  \\   | ' / | |  | ||  \\| |  | |_) || |__   | |__) || |__| |   /  \\   | (___    | |  | |      | |  | | | |   | |_) || |  | |  /  \\   | |             \n");
        menujuxy(40, 20);
        printf("\t\t   / /\\ \\  |  <  | |  | || . ` |  |  _ < |  __|  |  _  / |  __  |  / /\\ \\   \\___ \\   | |  | |      | |  | | | |   |  _ < | |  | | / /\\ \\  | |         \n");
        menujuxy(40, 21);
        printf("\t\t  / ____ \\ | . \\ | |__| || |\\  |  | |_) || |____ | | \\ \\ | |  | | / ____ \\  ____) | _| |_ | |____  | |__| |_| |_  | |_) || |__| |/ ____ \\ | |          \n");
        menujuxy(40, 22);
        printf("\t\t /_/    \\_\\|_|\\_\\ \\____/ |_| \\_|  |____/ |______||_|  \\_\\|_|  |_|/_/    \\_\\|_____/ |_____||______| |_____/|_____| |____/  \\____//_/    \\_\\|_|    \n");
        menujuxy(40, 24);
        printf("\t\t====================================================================================================================================================\n");
        getch();
        system("cls");
        
}

bool cekUsernameDanPassword( char (*username)[25], char (*password)[25], char (*inputUsername)[25], char (*inputPassword)[25]){
        system("cls");
        menujuxy(40, 17);
        printf("\t\t=========================================MASUKAN USERNAME DAN PASSWORD======================================\n\n");
        menujuxy(40, 18);
        printf("\t\t                              Username : ");
        scanf("%s", inputUsername);
        printf("\n");
        menujuxy(40, 19);
        printf("\t\t                              Password : ");
        scanf("%s", inputPassword);
        printf("\n");
         menujuxy(40, 20);
        printf("\t\t============================================================================================================\n");
        getch();
        system("cls");

        if (strcmp(*inputUsername, *username) == 0 && strcmp(*inputPassword, *password) == 0)
        {
           return true;      
        }else
        {
            return false;
        }
}


char masukMenuGame(char (*namad)[25],char (*namab)[25]){
        system("cls");
        
        char value;
        menujuxy(40, 17);
        printf("\t\t|========================================= %s %s ====================================|\n", namad, namab);
        menujuxy(40, 18);
        printf("\t\t|=========================== Silakan Pilih Game Yang Ingin Di Mainkan =======================|\n");
        menujuxy(40, 19);
        printf("\t\t|======================= DENGAN MENEKAN PILIHAN DI BAWAH PADA KEYBOARD ======================|\n");
        menujuxy(40, 20);
        printf("\t\t|                                                                                            |\n");
        menujuxy(40, 21);
        printf("\t\t|               C TicTacToe            W Batu Gunting Kertas          B Keluar               |\n");
        menujuxy(40, 22);
        printf("\t\t|                                                                                            |\n");
        menujuxy(40, 23);
        printf("\t\t|============================================================================================|\n");
        menujuxy(40, 24);
        printf("\t\t|============================================================================================|\n");
        value = getch();
        system("cls");
        return value;

}



int layarMenunggu(){
       system("cls");
       
       int i,j,a;
       system("Color 0F");
       menujuxy(95, 17);
       printf("Memuat");
       menujuxy(95,19);
        
        for ( i = 0; i <=30 ; i++)
        {
                for ( j = 0; j < 100000000; j++)
                {
                       a = j;
                }
                printf("%c",219);
        }

        menujuxy(95, 21);
        printf("klik enter");

        getchar();
        system("cls");
        
}