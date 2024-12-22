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
    while(1){
    printf("vui long nhap 1 so nguyen ");
    scanf("%d",&n);
    if (n==18){
    printf("ban da chon dung %d ",n);
    break;
    }else{
        printf("sai roi chon lai di\n" );
    }
    }
    

    return 0;
}
