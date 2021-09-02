#include <stdio.h>
#include <math.h>

int main();
void help();
void info();
void credits();
void start();

int main() {

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    info();

    return 0;
}

void help() {

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    int eingabe = 0;

    printf("Commands:\n"
           "- (1) -> help | Opens this field\n"
           "- (2) -> info | Infos about this application\n"
           "- (3) -> credits | My Credits\n"
           "- (4) -> start | Starts the Program\n"
           "- (0) -> Main Menu | Goes to main menu\n\n"
           "Please select an Option:\n");

    scanf("%d", &eingabe);
    switch (eingabe) {
        case 1: help(); break;
        case 2: info(); break;
        case 3: credits(); break;
        case 4: start(); break;
        case 0: main(); break;
    }
}



void info () {

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    int eingabe = 0;

    printf("This App was programmed to learn something about C\n"
           "It's not practicable to use it for daily math.\n"
           "There are some functions yet, but I'll updating\n"
           "this application soonTM :-D\n\n"
           "Main Menu? (0)\n"
           "For help: Press (1)\n\n");

    scanf("%d", &eingabe);
    switch (eingabe) {
        case 1: help(); break;
        case 0: main(); break;
    }
}

void credits() {

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    int eingabe = 0;

    printf("The Calculator Program is made by Rotstein007\n"
           "GitHub: https://github.com/Rotstein007\n\n"
           ""
           "Main Menu? (0)\n"
            "For help: Press (1)\n\n");

    scanf("%d", &eingabe);
    switch (eingabe) {
        case 1: help(); break;
        case 0: main(); break;
    }
}

void start() {

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    int eingabe = 0;

    printf("-\n"
           "-\n"
           "-\n"
           "-\n\n"
           "Main Menu? (0)\n"
           "For help: Press (1)\n\n");

    scanf("%d", &eingabe);
    switch (eingabe) {
        case 1: help(); break;
        case 0: main(); break;
    }
}