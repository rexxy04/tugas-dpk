#include <stdio.h>
#include <string.h>

int main() {
    const char usn[] = {"Admin"};
    const char pwd[] = {"User"};

    char useri[100];
    char pwi[100];

    printf("Username: ");
    fgets(useri, sizeof useri, stdin);
    printf("Password: ");
    fgets(pwi, sizeof pwi, stdin);

    strtok(useri, "\n"); //untuk issue ketika klik enter terbaca karakter
    strtok(pwi, "\n"); //untuk issue ketika klik enter terbaca karakter

    int cekusn = strcmp(usn, useri);
    int cekpw = strcmp(pwd, pwi);

    if (cekusn == 0 && cekpw == 0) {
        printf("Selamat datang %s\n", useri);
    } else if (cekusn != 0 && cekpw == 0) {
        printf("Username salah!\n");
    } else if (cekusn == 0 && cekpw != 0) {
        printf("Password salah!\n");
    } else {
        printf("Parameter error\n");
    }

    return 0;
}
