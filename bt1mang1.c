/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int thinh[]={4,2,3,9,5};
    int length = sizeof(thinh) / sizeof(int);
    for(int i=0;i<length;i++){
     printf("Phan tu %d: %d\n", i + 1, thinh[i]);
    }
    printf("Do dai cua mang la: %d\n", length);

    return 0;
}
