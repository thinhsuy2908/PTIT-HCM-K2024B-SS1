/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int factorialNumber(int num){
int thinh=1;
        for(int i=1;i<=num;i++){
            thinh*=i;
        }
        return thinh;
}    

int main() {
    int num=5;
        int thinh = factorialNumber(num);  
        printf("so gia thua cua %d la %d\n", num, thinh);  
        
    return 0;
}


