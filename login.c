#include<stdio.h>
#include<string.h>

int main(){
    const char usn[] = {"Admin"};
    const char pwd[] = {"User"};

    char useri[100];
    char pwi[100];
    int cekusn;
    int cekpw;

    printf("Username: ");
    fgets(useri, sizeof useri, stdin);
    printf("Password: ");
    scanf(pwi, sizeof pwi, stdin);
    strtok(useri, "\n");
    strtok(pwi, "\n");

    if (strcmp(usn, useri) && strcmp(pwd, pwi) == 0)
    {
        printf("Selamat datang %s", useri);
    }else if (strcmp (usn, useri) && strcmp(pwd, pwi) < 0)
    {
        printf("Pw Salah!");
    }else{
        printf("Parameter error");
    }

return 0; 
}
