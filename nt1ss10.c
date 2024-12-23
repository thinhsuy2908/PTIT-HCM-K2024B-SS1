/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int thinh[] = {3, 7, 1, 9, 5, 2};
    int size = sizeof(thinh) / sizeof(int);
    int n;
    int flag=0;
    printf("nhap so ban muuon tim ");
    scanf("%d", &n);
    for(int i=0;i< size;i++){
        if (thinh[i] == n) {
            printf("Phan tu %d nam o vi tri %d.\n", n, i);
            flag = 1; 
            break;
        }
        if(flag==0){
            printf("phan tu %d ko co trong mang \n",n);
        }    
        
    }
    return 0;
}
