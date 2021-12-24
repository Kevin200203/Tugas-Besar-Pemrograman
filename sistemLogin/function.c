// #include "sistemLogin.h"

void tampilkanSelamatDatang(){
        printf("\t\t   _____   ______   _                   __  __              _______     _____               _______              _   _    _____   \n");
        printf("\t\t  / ____| |  ____| | |          /\\     |  \\/  |     /\\     |__   __|   |  __ \\      /\\     |__   __|     /\\     | \\ | |  / ____|  \n");
        printf("\t\t | (___   | |__    | |         /  \\    | \\  / |    /  \\       | |      | |  | |    /  \\       | |       /  \\    |  \\| | | |  __   \n");
        printf("\t\t  \\___ \\  |  __|   | |        / /\\ \\   | |\\/| |   / /\\ \\      | |      | |  | |   / /\\ \\      | |      / /\\ \\   | . ` | | | |_ |  \n");
        printf("\t\t  ____) | | |____  | |____   / ____ \\  | |  | |  / ____ \\     | |      | |__| |  / ____ \\     | |     / ____ \\  | |\\  | | |__| |  \n");
        printf("\t\t |_____/  |______| |______| /_/    \\_\\ |_|  |_| /_/    \\_\\    |_|      |_____/  /_/    \\_\\    |_|    /_/    \\_\\ |_| \\_|  \\_____|   \n");

        printf("\n");
        printf("\t\t\t\t\t\t _____    _____ \n");
        printf("\t\t\t\t\t\t|  __ \\ |_   _|\n");
        printf("\t\t\t\t\t\t| |  | |   | |  \n");
        printf("\t\t\t\t\t\t| |  | |   | |  \n");
        printf("\t\t\t\t\t\t| |__| |  _| |_ \n");
        printf("\t\t\t\t\t\t|_____/  |_____|\n");

        printf("\n");
        printf("\t\t   _____   _   _              _  __  ______      _____   _____     ____     _____    _____          \n");
        printf("\t\t  / ____| | \\ | |     /\\     | |/ / |  ____|    / ____| |  __ \\   / __ \\   / ____|  / ____|     \n");
        printf("\t\t | (___   |  \\| |    /  \\    | ' /  | |__      | |      | |__) | | |  | | | (___   | (___         \n");
        printf("\t\t  \\___ \\  | . ` |   / /\\ \\   |  <   |  __|     | |      |  _  /  | |  | |  \\___ \\   \\___ \\  \n");
        printf("\t\t  ____) | | |\\  |  / ____ \\  | . \\  | |____    | |____  | | \\ \\  | |__| |  ____) |  ____) |    \n");
        printf("\t\t |_____/  |_| \\_| /_/    \\_\\ |_|\\_\\ |______|    \\_____| |_|  \\_\\  \\____/  |_____/  |_____/ \n");
        
        printf("\n\t\t\tTekan ENTER untuk melanjutkan");
        getchar();
        system("cls");
}





void tampilkanJudul(){
            printf("\n\n");
            printf("\t\t  |===================================================================|\n");
            printf("\t\t  |===========================SnakeCross Mini Game====================|\n|");
            printf("\t\t  |==============SELAMAT DATANG DI PROGRAM MINI GAME SEDERHANA========|\n");
            printf("\t\t  |                                                                   |\n");
            printf("\t\t  |                Program disusun dan dibuat oleh:                   |\n");
            printf("\t\t  |               1. I Gede Ari Wisnu Sanjaya (2105551047)            |\n");
            printf("\t\t  |               2. Kevin Siringoringo       (2105551031)            |\n");
            printf("\t\t  |===================================================================|\n\n");
            printf("\t\t          Program Ini Dibuat Untuk Memenuhi Tugas Besar Pemrograman    \n\t");
            
            printf("\t\t\tTekan ENTER untuk melanjutkan");
            getchar();
            system("cls");
}

char tampilkanMenu(){
        char value;
        printf("\t\t|============================ SILAHKAN TEKAN PILIHAN DI BAWAH PADA KEYBOARD=====================================|\n");
        printf("\t\t|===============================================================================================================|\n");
        printf("\t\t|             G DAFTAR AKUN                       A Login                    B Keluar                           |\n");
        printf("\t\t|===============================================================================================================|\n");
        value = getch();
        system("cls");
        return value;    
}




void masukanDataDiri(char (*namad)[25],char (*namab)[25],char (*email)[25]){
        printf("\t\t===================================MASUKAN DATA DIRI================================================\n");
        printf("\t\t=====================================================================================================\n");
        printf("\t\t                     Nama depan anda      : ");
        scanf("%s", namad);                                                
        printf("\t\t                     Nama belakang anda   :  ");                                                                 
        scanf("%s", namab); 
        printf("\t\t                     Masukkan Email anda  :  ");
        scanf("%s", email);
        printf("\t\t=====================================================================================================\n");
        printf("\t\t=====================================================================================================\n");
        printf("\n\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        system("cls");      
}

void buatPasswordDanUsername(char (*username)[25],char (*password)[25]){
       
        printf("\t\t=========================================MASUKAN USERNAME DAN PASSWORD====================================\n");
        printf("\t\t                       Username : ");
        scanf("%s", username);
        fflush(stdin);
        printf("\t\t                       Password :");
        scanf("%s", password);
        // strcpy(*pengguna1.listUsername, nama);
        // strcpy(*pengguna1.listPaswword, password);
        printf("\t\t===========================================================================================================\n");
        getch();
        system("cls");

        
        printf("\t\t            _  __ _    _  _   _    ____   ______  _____   _    _             _____  _____  _        _____  _____   ____   _    _        _______               \n"); 
        printf("\t\t     /\\    | |/ /| |  | || \\ | |  |  _ \\ |  ____||  __ \\ | |  | |    /\\     / ____||_   _|| |      |  __ \\|_   _| |  _ \\ | |  | |   /\\ |__   __|      \n");
        printf("\t\t    /  \\   | ' / | |  | ||  \\| |  | |_) || |__   | |__) || |__| |   /  \\   | (___    | |  | |      | |  | | | |   | |_) || |  | |  /  \\   | |             \n");
        printf("\t\t   / /\\ \\  |  <  | |  | || . ` |  |  _ < |  __|  |  _  / |  __  |  / /\\ \\   \\___ \\   | |  | |      | |  | | | |   |  _ < | |  | | / /\\ \\  | |         \n");
        printf("\t\t  / ____ \\ | . \\ | |__| || |\\  |  | |_) || |____ | | \\ \\ | |  | | / ____ \\  ____) | _| |_ | |____  | |__| |_| |_  | |_) || |__| |/ ____ \\ | |          \n");
        printf("\t\t /_/    \\_\\|_|\\_\\ \\____/ |_| \\_|  |____/ |______||_|  \\_\\|_|  |_|/_/    \\_\\|_____/ |_____||______| |_____/|_____| |____/  \\____//_/    \\_\\|_|    \n");
                                                                                                                                                
                                                                                                                                        
        printf("\n\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        system("cls");
        
}

bool cekUsernameDanPassword( char (*username)[25], char (*password)[25], char (*inputUsername)[25], char (*inputPassword)[25]){
        printf("\t*Silahkan login akun yang telah didaftarkan*\n");
        printf("\tUsername : ");
        scanf("%s", inputUsername);
        printf("\n");
        printf("\tMasukkan Password :");
        scanf("%s", inputPassword);
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
        char value;
        printf("\t\t|========================================= %s %s ============================================|\n", namad, namab);
        printf("\t\t|=========================== Silakan Pilih Game Yang Ingin Di Mainkan =======================|\n");
        printf("\t\t|======================= DENGAN MENEKAN PILIHAN DI BAWAH PADA KEYBOARD ======================|\n");
        printf("\t\t|                                                                                            |\n");
        printf("\t\t|                        C TicTacToe                             W Snake                     |\n");
        printf("\t\t|                                                                                            |\n");
        printf("\t\t|============================================================================================|\n");
        printf("\t\t|============================================================================================|\n");
        value = getch();
        system("cls");
        return value;

}


void menujuxy(int x, int y){
   COORD coord;
    
    coord.X = x;
    coord.Y = y; 
    
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int layarMenunggu(){
        system("cls");
        int i,j,a;

        menujuxy(30,10);
        printf("Memuat");
        menujuxy(30,12);
        
        for ( i = 0; i <=20 ; i++)
        {
                for ( j = 0; j < 100000000; j++)
                {
                       a = j;
                }
                printf("%c",219);
        }


        menujuxy(30, 15);
        printf("klik enter");

        getchar();
        system("cls");
        
}