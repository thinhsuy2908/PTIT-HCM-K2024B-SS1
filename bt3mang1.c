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
    int flag=0;
    printf("nhap 5 phan tu cho mang \n");
    for(int i=0;i<5;i++){
        printf("nhap so %d cua mang ",i+1);
        scanf("%d",&thinh[i]);
    }
    for(int i=0;i<5;i++){
        if(thinh[i]%2==0){
     printf("Phan tu %d la so chan: %d\n", i + 1, thinh[i]);
     flag=1;
        }
    }
    if(flag==0){
        printf("mảng không chứa số chẵn");
    }

    return 0;
}
