/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ncurses.h>

int main() {
    float n1, n2, media;

    initscr();
    printw("Informe a primeira nota: ");
    refresh();
    scanw("%f", &n1);

    printw("Informe a segunda nota: ");
    refresh();
    scanw("%f", &n2);

    media = (n1 + n2) / 2.0;

    printw("A média final do aluno é: %.2f", media);
    refresh();

    getch();
    endwin();

    return 0;
}


