/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a,v,t;
    printf("nhap diem anh");
    scanf("%f",&a);
    printf("nhap diem van");
    scanf("%f",&v);
    printf("nhap diem toan");
    scanf("%f",&t);
    printf("diem tong 3 mon là: %.2f\n",a+v+t);
     printf("diem trung binh 3 mon là: %.2f\n",(a+v+t)/3);


    return 0;
}
