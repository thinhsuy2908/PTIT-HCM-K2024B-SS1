/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for (int n=1;n<=9;n++){
    printf("bang cuu chuong cua %d la\n",n);
    for(int i=1;i<=9;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    }

    return 0;
}
