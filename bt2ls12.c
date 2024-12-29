/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void printarray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5}; 
    int size = 5; 

    printarray(array, size); 
    return 0;
}


