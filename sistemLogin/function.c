
void menujuxy(int x, int y)
{
        COORD coord;

        coord.X = x;
        coord.Y = y;

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void tampilkanSelamatDatang(){
        system("cls");
     
        printf("\t\t   _____   ______   _                   __  __              _______     _____               _______              _   _    _____   \n");
       
        printf("\t\t  / ____| |  ____| | |          /\\     |  \\/  |     /\\     |__   __|   |  __ \\      /\\     |__   __|     /\\     | \\ | |  / ____|  \n");
       
        printf("\t\t | (___   | |__    | |         /  \\    | \\  / |    /  \\       | |      | |  | |    /  \\       | |       /  \\    |  \\| | | |  __   \n");
       
        printf("\t\t  \\___ \\  |  __|   | |        / /\\ \\   | |\\/| |   / /\\ \\      | |      | |  | |   / /\\ \\      | |      / /\\ \\   | . ` | | | |_ |  \n");
       
        printf("\t\t  ____) | | |____  | |____   / ____ \\  | |  | |  / ____ \\     | |      | |__| |  / ____ \\     | |     / ____ \\  | |\\  | | |__| |  \n");
     
        printf("\t\t |_____/  |______| |______| /_/    \\_\\ |_|  |_| /_/    \\_\\    |_|      |_____/  /_/    \\_\\    |_|    /_/    \\_\\ |_| \\_|  \\_____|   \n");

        
        printf("\n");
       
        printf("\t\t\t\t\t\t\t\t _____    _____ \n");
       
        printf("\t\t\t\t\t\t\t\t|  __ \\ |_   _|\n");
       
        printf("\t\t\t\t\t\t\t\t| |  | |   | |  \n");
        
        printf("\t\t\t\t\t\t\t\t| |  | |   | |  \n");
       
        printf("\t\t\t\t\t\t\t\t| |__| |  _| |_ \n");
       
        printf("\t\t\t\t\t\t\t\t|_____/  |_____|\n");

    
        printf("\n");
       
        printf("\t\t\t\t   _____   _   _              _  __  ______      _____   _____     ____     _____    _____          \n");
     
        printf("\t\t\t\t  / ____| | \\ | |     /\\     | |/ / |  ____|    / ____| |  __ \\   / __ \\   / ____|  / ____|     \n");
      
        printf("\t\t\t\t | (___   |  \\| |    /  \\    | ' /  | |__      | |      | |__) | | |  | | | (___   | (___         \n");
      
        printf("\t\t\t\t  \\___ \\  | . ` |   / /\\ \\   |  <   |  __|     | |      |  _  /  | |  | |  \\___ \\   \\___ \\  \n");
       
        printf("\t\t\t\t  ____) | | |\\  |  / ____ \\  | . \\  | |____    | |____  | | \\ \\  | |__| |  ____) |  ____) |    \n");
        
        printf("\t\t\t\t |_____/  |_| \\_| /_/    \\_\\ |_|\\_\\ |______|    \\_____| |_|  \\_\\  \\____/  |_____/  |_____/ \n");

      
        printf("\t\t\t\tTekan ENTER untuk melanjutkan");
        getchar();
        system("cls");
}





void tampilkanJudul(){
        system("cls");
        printf("\n\n");

        
        printf("\t\t  |===================================================================|\n");
        
        printf("\t\t  |===========================SnakeCross Mini Game====================|\n");
        
        printf("\t\t  |==============SELAMAT DATANG DI PROGRAM MINI GAME SEDERHANA========|\n");
       
        printf("\t\t  |                                                                   |\n");
       
        printf("\t\t  |                Program disusun dan dibuat oleh:                   |\n");
        
        printf("\t\t  |               1. I Gede Ari Wisnu Sanjaya (2105551047)            |\n");
        
        printf("\t\t  |               2. Kevin Siringoringo       (2105551031)            |\n");
       
        printf("\t\t  |===================================================================|\n");
        
        printf("\t\t          Program Ini Dibuat Untuk Memenuhi Tugas Besar Pemrograman    \n\t");

        
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getchar();
        system("cls");
}

char tampilkanMenu(){
        system("cls");
        
        char value;
       
        printf("\t\t|====================================SILAHKAN TEKAN PILIHAN DI BAWAH PADA KEYBOARD==============================|\n");
       
        printf("\t\t|===============================================================================================================|\n");
       
        printf("\t\t|             G DAFTAR AKUN                       A Login                    B Keluar                           |\n");
       
        printf("\t\t|===============================================================================================================|\n");
       
        value = getch();
        system("cls");
        return value;    
}




void masukanDataDiri(char (*namad)[25],char (*namab)[25],char (*email)[25]){
        system("cls");
       
        printf("\t\t=========================================MASUKAN DATA DIRI===========================================\n");
       
        printf("\t\t=====================================================================================================\n");
        
        printf("\t\t                     Nama depan anda      : ");
        scanf("%s", namad);                                                
     
        printf("\t\t                     Nama belakang anda   : ");                                                                 
        scanf("%s", namab); 
    
        printf("\t\t                     Masukkan Email anda  : ");
        scanf("%s", email);
       
        printf("\t\t=====================================================================================================\n");
        
        printf("\t\t=====================================================================================================\n");
        
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        system("cls");
}

void buatPasswordDanUsername(char (*username)[25],char (*password)[25]){
        system("cls");
       
        printf("\t\t=========================================MASUKAN USERNAME DAN PASSWORD====================================\n");
        
        printf("\t\t                       Username : ");
        scanf("%s", username);
        fflush(stdin);
       
        printf("\t\t                       Password : ");
        scanf("%s", password);
        
        printf("\t\t===========================================================================================================\n");
      
        printf("\t\t\tTekan ENTER untuk melanjutkan");
        getch();
        system("cls");

       
        printf("\n            _  __ _    _  _   _    ____   ______  _____   _    _             _____  _____  _        _____  _____   ____   _    _        _______            ");
        printf("\n     /\\    | |/ /| |  | || \\ | |  |  _ \\ |  ____||  __ \\ | |  | |    /\\     / ____||_   _|| |      |  __ \\|_   _| |  _ \\ | |  | |   /\\ |__   __|   ");
        printf("\n    /  \\   | ' / | |  | ||  \\| |  | |_) || |__   | |__) || |__| |   /  \\   | (___    | |  | |      | |  | | | |   | |_) || |  | |  /  \\   | |          ");
        printf("\n   / /\\ \\  |  <  | |  | || . ` |  |  _ < |  __|  |  _  / |  __  |  / /\\ \\   \\___ \\   | |  | |      | |  | | | |   |  _ < | |  | | / /\\ \\  | |      ");
        printf("\n  / ____ \\ | . \\ | |__| || |\\  |  | |_) || |____ | | \\ \\ | |  | | / ____ \\  ____) | _| |_ | |____  | |__| |_| |_  | |_) || |__| |/ ____ \\ | |       "); 
        printf("\n /_/    \\_\\|_|\\_\\ \\____/ |_| \\_|  |____/ |______||_|  \\_\\|_|  |_|/_/    \\_\\|_____/ |_____||______| |_____/|_____| |____/  \\____//_/    \\_\\|_| ");
       
        printf("\n====================================================================================================================================================");
       
        printf("\t\t\tTekan ENTER untuk kembali ke menu");
        getch();
        system("cls");
        
}

bool cekUsernameDanPassword( char (*username)[25], char (*password)[25], char (*inputUsername)[25], char (*inputPassword)[25]){
        system("cls");
        
        printf("\t\t=========================================MASUKAN USERNAME DAN PASSWORD======================================\n\n");
        
        printf("\t\t                              Username : ");
        scanf("%s", inputUsername);
        printf("\n");
        
        printf("\t\t                              Password : ");
        scanf("%s", inputPassword);
        printf("\n");
        
        printf("\t\t============================================================================================================\n");
        
        printf("\t\t\tTekan ENTER untuk melanjutkan");
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
       
        printf("\t\t                                             %s %s                                          \n", namad, namab);
        
        printf("\t\t|=========================== Silakan Pilih Game Yang Ingin Di Mainkan =======================|\n");
        
        printf("\t\t|======================= DENGAN MENEKAN PILIHAN DI BAWAH PADA KEYBOARD ======================|\n");
        
        printf("\t\t|                                                                                            |\n");
      
        printf("\t\t|               C TicTacToe            W Batu Gunting Kertas          B Keluar               |\n");
        
        printf("\t\t|                                                                                            |\n");
       
        printf("\t\t|============================================================================================|\n");
        
        printf("\t\t|============================================================================================|\n");
        value = getch();
        system("cls");
        return value;

}



int layarMenunggu(){
       system("cls");
       
       int i,j,a;
       system("Color 0F");
   
       printf("\nMemuat\n\n");
      
        
        for ( i = 0; i <=30 ; i++)
        {
                for ( j = 0; j < 100000000; j++)
                {
                       a = j;
                }
                printf("%c",219);
        }

 
        printf("\n\nklik enter");

        getchar();
        system("cls");
        
}