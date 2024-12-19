/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    int flag=0;
    int thinh[]={18,12,5,29,8,31};
    int n=sizeof(thinh)/sizeof(int);
    printf("hay nhap 1 so can tim \n");
    scanf("%d",&a);
    for(int i=0 ; i<n ; i++){
        if(a==thinh[i]){
            printf("vi tri phan tu trong mang la %d\n",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Phan tu khong ton tai trong mang.\n");
    }
       return 0;
}