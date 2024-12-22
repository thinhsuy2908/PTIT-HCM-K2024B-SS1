/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a,p;
   printf("CALCULATOR\n");
    printf("vui long chon chuong trinh\n");
    printf("1.tong 2 so\n");
    printf("2.hieu 2 so\n");
    printf("3.tich 2 so\n");
    printf("4.thuong 2 so\n");
    printf("5.thoat\n");
    printf("Nhap lua chon (1-5): \n ");
    scanf("%d", &p);
    if (p == 5) {
        printf("\nThoat chuong trinh. Tam biet!\n");}
    printf("Nhap so thu nhat: ");
    scanf("%d", &n);
    printf("Nhap so thu hai: ");
    scanf("%d", &a);
    switch (p){
    case 1:
        printf("\n Tong hai so = %d\n", n + a);
        break;
    case 2:
        printf("\n Hieu hai so = %d\n", n - a);
        break;
    case 3:
        printf("\n Tich hai so = %d\n", n * a);
        break;
    case 4:
        if (a != 0) {
        printf("\nThuong hai so = %d\n", n / a);
        } else {
            printf("\nKhong the chia cho 0.\n");
            }
            break;
            default:
                printf("\nLua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    return 0;
}
