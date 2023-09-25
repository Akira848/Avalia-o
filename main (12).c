/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ncurses.h>

int main() {
    char caractere;

    initscr();
    printw("Informe um caractere: ");
    refresh();
    scanw("%c", &caractere);

    // Obtém o código ASCII em decimal
    int asciiDecimal = (int)caractere;

    // Obtém o código ASCII em hexadecimal
    printw("O código ASCII do caractere '%c' em decimal é: %d", caractere, asciiDecimal);
    printw("O código ASCII do caractere '%c' em hexadecimal é: %X", caractere, asciiDecimal);
    refresh();

    getch();
    endwin();

    return 0;
}



