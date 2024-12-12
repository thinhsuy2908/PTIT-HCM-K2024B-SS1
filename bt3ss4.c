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
    if(n%3==0&&n%5==0){
    printf("la %d so chia het cho 5 va3.\n",n);
    }else if(n%5==0){ 
    printf("la %d chia hết cho 5.\n",n);
    }
    else if(n%3==0){ 
    printf("la %d chia hết cho 3.\n",n);
    }
    else 
    printf("la %d ko chia hết cho 5 va 3.\n",n);
    return 0;
}
