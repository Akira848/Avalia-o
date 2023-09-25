/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    float catetoA, catetoB, hipotenusa;

    printf("Informe a medida do cateto A: ");
    scanf("%f", &catetoA);

    printf("Informe a medida do cateto B: ");
    scanf("%f", &catetoB);

    hipotenusa = sqrt(catetoA * catetoA + catetoB * catetoB);

    printf("A medida da hipotenusa é: %.2f\n", hipotenusa);

    return 0;
}


