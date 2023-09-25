/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <ncurses.h>

int main() {
    float catetoA, catetoB, hipotenusa;

    initscr();
    printw("Informe a medida do cateto A: ");
    refresh();
    scanw("%f", &catetoA);

    printw("Informe a medida do cateto B: ");
    refresh();
    scanw("%f", &catetoB);

    hipotenusa = sqrt(catetoA * catetoA + catetoB * catetoB);

    printw("A medida da hipotenusa é: %.2f", hipotenusa);
    refresh();

    getch();
    endwin();

    return 0;
}



