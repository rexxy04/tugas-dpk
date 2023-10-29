#include<stdio.h>
#include<string.h>

int main(){
    const char usn[] = {"Admin"};
    const char pwd[] = {"User"};

    char guestuser[100];
    char guestpw[100];
    int cekusn;
    int cekpw;

    printf("Username: ");
    fgets(guestuser, sizeof guestuser, stdin);
    printf("Password: ");
    scanf(guestpw, sizeof guestpw, stdin);

    cekusn = strcmp(usn, guestuser);
    cekpw = strcmp(pwd, guestpw);

    do{
    if (cekusn < cekpw)
    {
        printf("Username salah!");
    }else if (cekusn > cekpw)
    {
        printf("Password Salah!");
    }else if (cekusn == cekpw)
    {
        printf("Selamat datang %s", guestuser);
    }else{
        printf("Parameter error");
    }

    }
    while (guestuser != '\0');
    
return 0; 
}