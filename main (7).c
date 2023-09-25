/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char caractere;

    printf("Informe um caractere: ");
    scanf("%c", &caractere);

    int asciiDecimal = (int)caractere;

    printf("O código ASCII do caractere '%c' em decimal é: %d\n", caractere, asciiDecimal);
    printf("O código ASCII do caractere '%c' em hexadecimal é: %X\n", caractere, asciiDecimal);

    return 0;
}
