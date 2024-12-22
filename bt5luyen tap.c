/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a;
    printf("nhap so nam");
    scanf("%d",&n);
    printf("nhap so thang");
    scanf("%d",&a);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        printf("so ngay trong thang %d nam %d la 31 ngay\n ",a,n);
    }
     if(a==4||a==6||a==9||a==11){
        printf("so ngay trong thang %d nam %d la 30 ngay\n ",a,n);
     }
     if(a==2){
          if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
            printf("so ngay trong thang %d nam %d la 29 ngay\n ",a,n);
        } else {
           printf("so ngay trong thang %d nam %d la 28 ngay\n ",a,n);
        }

    return 0;
}
}
