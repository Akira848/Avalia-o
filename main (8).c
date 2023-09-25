/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float temperaturaFahrenheit, temperaturaCelsius;

    printf("Informe a temperatura em graus Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    temperaturaCelsius = (temperaturaFahrenheit - 32) * (5.0 / 9.0);

    printf("A temperatura em graus Celsius é: %.2f\n", temperaturaCelsius);

    return 0;
}

