/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d,e,thinh=0,phan=0;
    printf("hay nhap 5 so nguyen \n");
    printf("hay nhap so nguyen thu 1 ");
    scanf("%d",&a);
    printf("hay nhap so nguyen thu 2 ");
    scanf("%d",&b);
    printf("hay nhap so nguyen thu 3 ");
    scanf("%d",&c);
    printf("hay nhap so nguyen thu 4 ");
    scanf("%d",&d);
    printf("hay nhap so nguyen thu 5 ");
    scanf("%d",&e);
    if (a % 2 != 0) thinh++; else phan++;
    if (b % 2 != 0) thinh++; else phan++;
    if (c % 2 != 0) thinh++; else phan++;
    if (d % 2 != 0) thinh++; else phan++;
    if (e % 2 != 0) thinh++; else phan++;
    printf("tong so le la %d \n",thinh);
    printf("tong so chan la %d \n",phan);
    

    return 0;
}
