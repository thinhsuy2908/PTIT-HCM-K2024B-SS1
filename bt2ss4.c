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
    printf("nhap 1 so nguyen");
    scanf("%d",&n);
    if(n%2==0){
    printf("la %d so chan.\n",n);
    }else{ 
    printf("la %d so le.\n",n);
    }
    return 0;
}
