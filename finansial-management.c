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
    char jenisKebutuhan[100];
    int money;
    int persentaseChoice;
    int persentaseSetByUser;
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
    printf("Pilihan Kamu \n");

    int userChoice;
    printf(":: ");
    scanf("%d", &userChoice);

    switch(userChoice) {
        case 1:
            set_persentase();
            break;
        
        case 2:
            count_budget_page();
            break;
        
        case 3:
            finansial_report_page();
            break;
        
        case 4:
            view_activity();
            break;

        case 5:
            printf("Terima Kasih sudah menggunakan program ini\n");
            return;

        default:
            printf("Maaf Pilihan tidak valid");
    }

}
void set_persentase() {
    int thePersentase = 1;

    printf("Kamu mau bagi keuanganmu menjadi berapa jenis kebutuhan nih?\n");
    printf(":: ");
    scanf("%d", user.persentaseChoice);

    for(int i = 0; i < user.persentaseChoice; i++) {
        printf("Jenis Kebutuhan : ");
        fgets(user.jenisKebutuhan[user.persentaseChoice], sizeof(user.jenisKebutuhan), stdin);
        printf("Persentase Kebutuhan : ");
        scanf("%d", user.persentaseSetByUser);

        thePersentase - user.persentaseSetByUser;
    }
}

void count_budget_page() {
    printf("Masukkan Banyaknya Uang Kamu : ");
    scanf("%d", user.money);

    int *countUserMoney;

    for(int i = 0; i < user.persentaseChoice; i++) {
        countUserMoney[i] = user.money * user.persentaseSetByUser;
        printf("Jenis Kebutuhan [%d] : %s\n", i, user.jenisKebutuhan);
        printf("Maksimal Budget [%d] : %d\n", i, countUserMoney[i]);        
    }


}

void finansial_report_page() {
    
}

void view_activity() {
    printf("Set\n");
    
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