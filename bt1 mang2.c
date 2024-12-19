/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int thinh[]={1,2,3,4,5,};
    int n=sizeof(thinh)/sizeof(int);
    printf("in tu cuoi ve dau \n");
    for(int i = n-1; i>= 0;i--){
        printf("%d",thinh[i]);
    }
    return 0;
}