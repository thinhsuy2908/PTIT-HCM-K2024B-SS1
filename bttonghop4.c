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
    printf("nhap vao 1 so nguyen duong ");
    scanf("%d",&n);
    if( n<=0){
        printf("phai nhap vao 1 so nguyen duong");
    }
    else{
        printf("cac uoc cua %d la ",n);
        for(int i =1; i<=n ;i++)
            if (n % i == 0) {
                printf("%d ", i);
        }
        
    }
    return 0;
}
