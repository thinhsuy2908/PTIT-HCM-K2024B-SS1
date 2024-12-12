/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n,money;
    int a;
    printf("============chuong trinh chuyen doi tien te=============");
    printf("1.USD to VND\n");
    printf("2.EUR to VND\n");
    printf("3.GBP to VND\n");
    printf("4.JPY to VND\n");
    printf("5.VND to USD\n");
    printf("6.VND to EUR\n");
    printf("7.VND to GBP\n");
    printf("8.VND to JPY\n");
    printf("nhap don vi tien te ma ban muon doi(1-8)");
    scanf("%d",&a);
    printf("nhap so tien can chuyen doi");
    scanf("%f",&n);
    switch (a) {
        case 1:
        money=n*23000;
        printf("%.2f USD=%.2f VND\n",n,money);
        break;
        case 2:
        money=n*26000;
        printf("%.2f EUR=%.2f VND\n",n,money);
         break;
        case 3:
        money=n*30000;
        printf("%.2f GBP=%.2f VND\n",n,money);
         break;
        case 4:
        money=n*150;
        printf("%.2f JPY=%.2f VND\n",n,money);
         break;
        case 5:
        money=n/23000;
        printf("%.2f VND=%.2f USD\n",n,money);
         break;
        case 6:
        money=n/26000;
        printf("%.2f VND=%.2f EUR\n",n,money);
         break;
        case 7:
        money=n/30000;
        printf("%.2f VND=%.2f GBP\n",n,money);
         break;
        case 8:
        money=n/150;
        printf("%.2f VND=%.2f JPY\n",n,money);
         break;
        default:
            printf("chuc nang ko hop le\n");
            break;
        
      
    }

    return 0;
}
