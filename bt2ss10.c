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
        for(int j=0;j<n-i-1;j++){
            if (thinh[j] > thinh[j + 1]) {
                int temp = thinh[j];
                thinh[j] = thinh[j + 1];
                thinh[j + 1] = temp;
            }
        }
    }
    printf("so tu nho den lơn class: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", thinh[i]);
    }
    printf("\n");
    
    return 0;
}