#ifndef SISTEMLOGIN
#define SISTEMLOGIN
#include "function.C"
typedef struct pengguna
{
        char username[25];
        char namad[25];
        char namab[25];
        char email[25];
        char password[25];
        // char listPaswword[20][25];
        // char listUsername[20][25];
        char inputPassword[25];
        char inputUsername[25];
        
}Pengguna;





Pengguna pengguna1;


// char (*nama)[25]  = &pengguna1.nama;
// char (*namad)[25] = &pengguna1.namad;
// char (*namab)[25] = &pengguna1.namab;
// char (*email)[25] = &pengguna1.email;
// char (*password)[25] = &pengguna1.password;
// char *listPaswword = &pengguna1.listPaswword;
// char *listUsername = &pengguna1.listUsername;

void tampilkanJudul(); 
char tampilkanMenu();
void tampilkanSelamatDatang();
void masukanDataDiri();
void buatPasswordDanUsername();

bool cekUsernameDanPassword();

char masukMenuGame();
void menujuxy();
int layarMenunggu();
#endif









