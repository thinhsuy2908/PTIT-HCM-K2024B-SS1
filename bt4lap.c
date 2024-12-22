/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("nhap so tu 1 den 10 ");
    scanf("%d",&n);
    if (n<1||n>10){
     printf("nhap so ko hop le vui long nhap lai %d",n);
     return 1;
    }
    printf("bang cuu chuong cua %d la ",n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }

    return 0;
}
