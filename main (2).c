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
    printf("nhap do dai cua mang ");
    scanf("%d",&n);
    int thinh[n];
    printf("nhap cac phan tu cho mang\n");
    for(int i=0;i<n;i++){
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &thinh[i]);
    }
    printf("\nMang ban vua nhap:\n");
    for(int i = 0; i < n; i++) {
        printf("Phan tu %d: %d\n", i + 1, thinh[i]);
    }
    return 0;
}
