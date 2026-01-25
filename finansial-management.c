#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void save_data();
void login_user();
void main_menu();
void set_persentase();
void count_budget_page();
void finansial_report_page();
void view_activity_page();

typedef struct {
    char username[100];
    int password;
} User;

User user = {"", 4};

void save_data() {
    FILE *f;
    f = fopen("savedata.txt", "r");
}

void login_user() {

    char choice;
    
    while(1) {
        printf("Ingin memuat data lama? (y/n) : ");
        scanf("%c", &choice);

        if(choice == 'y' || choice == 'Y' || choice == 'n' || choice =='N') {
            break;
        }
        else {
            printf("Input tidak valid! Silahkan masukkan 'y' atau 'n'. \n");
        }
        getchar();
    }

    if(choice == 'y' || choice == 'Y') {
        FILE *f = fopen("savedata.txt", "r");
        if(f == NULL) {
            printf("Tidak ada data tersimpan\n");
            printf("Silahkan membuat akun\n");
        }
        else {
            
        }
    }

    printf("Masukkan Username : ");
    fgets(user.username, sizeof(user.username), stdin);

    FILE *f = fopen("savedata.txt", "r");
    if(f == NULL) {
        printf("Membuat data baru\n");
    }
    else {
        printf("Selamat datang kembali\n");
    }
}

void main_menu() {
    printf("== Menu Utama ==\n");
    printf("\n");
    printf("1. Edit Persentase\n");
    printf("2. Atur Keuangan\n");
    printf("3. Lihat Tabel Keuangan\n");
    printf("4. Lihat Aktivitas\n");
    printf("5. Keluar\n");

}
void set_persentase() {

}

void count_budget_persentase() {

}

void finansial_report() {

}

void view_activity() {

}

void welcome_page() {
    printf("===============================================\n");
    printf("=                   WELCOME                   =\n");
    printf("=             Finansial Management            =\n");
    printf("===============================================\n");
    printf("~ Hai, %s\n", user.username);
}

int main() {

    welcome_page();
    login_user();

    return 0;
}