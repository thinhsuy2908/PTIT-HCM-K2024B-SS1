/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int thinh[] = {12, 11, 13, 5, 6};
    int n = sizeof(thinh) / sizeof(int);
    for (int i = 1; i < n; i++) {
        int key = thinh[i];
        int j = i - 1;
        while (j >= 0 && thinh[j] > key) {
            thinh[j + 1] = thinh[j];
            j = j - 1;
        }
        thinh[j + 1] = key;
    }
    printf("so tu nho den lon: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", thinh[i]);
    }
    printf("\n");


    return 0;
}
