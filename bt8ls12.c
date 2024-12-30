/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int num1, num2;
    

    printf("nhap so nguyen thu 1: ");
    scanf("%d", &num1);
    printf("nhap so nguyen t2: ");
    scanf("%d", &num2);

    int min = (num1 < num2) ? num1 : num2;  
    int i, thinh = 1; 
 
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            thinh = i;  
        }
    }


    printf("uoc chung lon nhat %d va %d la: %d\n", num1, num2, thinh);

    return 0;
}