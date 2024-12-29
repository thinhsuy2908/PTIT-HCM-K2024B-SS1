/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int so1, so2, tong;
    printf("nhap so thu nhat ");
    scanf("%d", &so1);

    printf("nhsp so thu 2 ");
    scanf("%d", &so2);
    tong = tinhTong(so1, so2);
    printf("Tổng của %d và %d là: %d\n", so1, so2, tong);

    return 0;
}