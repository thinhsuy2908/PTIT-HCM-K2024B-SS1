/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float r;
    const float pi = 3.14;
    printf("nhap gia tri bien r");
    scanf("%f",& r);
    printf("chu vi hinh tron la 2 x pi x%f=%2f\n",r ,2* pi* r);
    printf("dien tich hinh tron la pi x %f^2=%2f\n",r,pi* r*r);

    return 0;
}
