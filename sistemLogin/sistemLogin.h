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
        char inputPassword[25];
        char inputUsername[25];
        
}Pengguna;





Pengguna pengguna1;




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









