/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     int thinh[]={25,16,12,13,2};
    int n=sizeof(thinh)/sizeof(int);
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if (thinh[j] < thinh[min]) {
                min=j;    
            }
        }
        int temp = thinh[min];
                thinh[min] = thinh[i];
                thinh[i] = temp;
    }
    printf("so tu nho den lơn class: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", thinh[i]);
    }
    printf("\n");
    
    return 0;
}