#include <stdio.h>

int main() {
    int n, i = 2, printed = 0;

    printf("Nh?p v�o s? nguy�n duong n: ");
    scanf("%d", &n);

    printf("C�c s? nguy�n t? d?u ti�n l�:\n");

    while (printed < n) {
        int is_prime = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
            printed++;
        }
        i++;
    }

    printf("\n");
    return 0;
}
