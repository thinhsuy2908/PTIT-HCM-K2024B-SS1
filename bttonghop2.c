/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n,a,t,c;
    printf("nhập số giờ công nhân làm");
    scanf("%f",&n);
    printf("nhap tien luong theo gio");
    scanf("%f",&t);
    if(n>160){
     a=160*t;
     c=(n-160)*1.1*t;  
    }
    else{ 
    a=n*t;
    }
    printf("số tiền co ban nhân viên nhận dược là %.2f\n",a);
    printf("số tiền phu cap nhân viên nhận dược là %.2f\n",c);
    printf("số tiền nhân viên nhận dược là %.2f\n",a+c);
    return 0;
}
