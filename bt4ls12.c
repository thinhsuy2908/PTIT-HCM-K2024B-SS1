/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int findMax(int array[], int size) {
    int max = array[0]; 
    for (int i = 1; i < size; i++) {  
        if (array[i] > max) {
            max = array[i];  
        }
    }
    return max;  
}

int main() {
    int array[] = {3, 15, 7, 10, 8, 6};  
    int size = sizeof(array) / sizeof(array[0]);  
    int max = findMax(array, size);  
    printf("So lon nhat trong mang la: %d\n", max); 
    return 0;
}



