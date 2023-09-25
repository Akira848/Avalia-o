/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float distancia, litros, consumoMedio;

    printf("distância percorrida (em km): ");
    scanf("%f", &distancia);

    printf("total de litros de combustível gasto: ");
    scanf("%f", &litros);

    consumoMedio = distancia / litros;

    printf("O consumo médio do automóvel é: %.2f km/l\n", consumoMedio);

    return 0;
}