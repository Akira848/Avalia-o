/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ncurses.h>

int main() {
    float distancia, litros, consumoMedio;

    initscr();
    printw("Informe a distância percorrida (em km): ");
    refresh();
    scanw("%f", &distancia);

    printw("Informe o total de litros de combustível gasto: ");
    refresh();
    scanw("%f", &litros);

    consumoMedio = distancia / litros;

    printw("O consumo médio do automóvel é: %.2f km/l", consumoMedio);
    refresh();

    getch();
    endwin();

    return 0;
}


