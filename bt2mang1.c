/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int thinh[5];
    printf("nhap 5 phan tu cho mang \n");
    for(int i=0;i<5;i++){
        printf("nhap so %d cua mang ",i+1);
        scanf("%d",&thinh[i]);
    }
    for(int i=0;i<5;i++){
     printf("\nPhan tu %d: %d\n", i + 1, thinh[i]);
    }

    return 0;
}
