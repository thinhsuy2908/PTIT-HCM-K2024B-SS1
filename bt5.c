/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a,b;
    printf("nhap gia tri bien a");
    scanf("%f",& a);
    printf("nhap gia tri bien b");
    scanf("%f",& b);
    printf("a = %f va b = %f \n",a,b);
    printf("%.2f x %.2f=%.2f\n",a,b,a*b);

    return 0;
}
