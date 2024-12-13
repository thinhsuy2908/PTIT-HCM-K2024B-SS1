/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    printf("nhap vao 1 so nguyen duong ");
    scanf("%d",&n);
    if( n<=0){
        printf("phai nhap vao 1 so nguyen duong");
    }
    else if(n==1){
        printf("so %d ko phai la so nguyen to ",n);
    }
     else{
    for( i =2; i<=n/2 ;i++)
     if (n % i == 0){
        printf("%d ko phai la 1 so nguyen to",n);
        break;
    }
    }
    if(i > n / 2){
        printf("%d là số nguyên tố.\n", n);
    }
    
    return 0;
}
