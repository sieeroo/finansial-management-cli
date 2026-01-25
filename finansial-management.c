#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void save_data();
void login_user();
void set_persentase();
void count_budget_page();
void finansial_report_page();
void view_activity_page();

typedef struct {
    char username[100];
    int password;
} User;

User user = {"", '[4]'};

void save_data() {

}

void login_user() {

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

    return 0;
}