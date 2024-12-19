/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {6, 5, 9, 29},
        {7, 10, 11, 0}
    };
     int thinh=matrix[0][0];
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] > thinh) {
                thinh = matrix[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", thinh);


    return 0;
}
