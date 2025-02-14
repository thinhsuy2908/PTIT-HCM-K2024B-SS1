#include <stdio.h>

int main() {
    int arr[100];
    int n = 0, i, j;
    int choice, pos, temp, num;

    do {
        printf("\n********Menu********\n");
        printf("[1].Nhap mang\n");
        printf("[2].In mang\n");
        printf("[3].Dem so hoan hao\n");
        printf("[4].Tim so lon thu 2\n");
        printf("[5].Them phan tu\n");
        printf("[6].Xoa phan tu\n");
        printf("[7].Sap xep tang dan\n");
        printf("[8].tim kiem phan thu \n");
        printf("[9].Sap xep so chan truoc, le sau\n");
        printf("[10].Dao nguoc mang\n");
        printf("[10].Thoat\n");
        printf("********\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Nhap arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Cac phan tu trong mang: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3: {
                int soHoanHao = 0;
                for (i = 0; i < n; i++) {
                    int sum = 0;
                    for (j = 1; j < arr[i]; j++) {
                        if (arr[i] % j == 0) {
                            sum += j;
                        }
                    }
                    if (sum == arr[i]) {
                        soHoanHao++;
                    }
                }
                printf("Co %d so hoan hao trong mang\n", soHoanHao);
                break;
            }

            case 4: {
                int max1 = arr[0], max2 = -1;
                for (i = 1; i < n; i++) {
                    if (arr[i] > max1) {
                        max2 = max1;
                        max1 = arr[i];
                    } else if (arr[i] > max2 && arr[i] < max1) {
                        max2 = arr[i];
                    }
                }
                if (max2 != -1) {
                    printf("So lon thu 2 la %d\n", max2);
                } else {
                    printf("Khong co so lon thu 2\n");
                }
                break;
            }

            case 5:
                if (n >= 100) {
                    printf("Mang da day, khong the them!\n");
                    break;
                }
                printf("Nhap phan tu muon them: ");
                scanf("%d", &num);
                printf("Nhap vi tri muon them (0-%d): ", n);
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Vi tri them khong hop le!\n");
                    break;
                }
                for (i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = num;
                n++;
                break;

            case 6:
                printf("Nhap vi tri can xoa (0-%d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                for (i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                break;

            case 7:
                for (i = 1; i < n; i++) {
                    temp = arr[i];
                    j = i - 1;
                    while (j >= 0 && arr[j] > temp) {
                        arr[j + 1] = arr[j];
                        j--;
                    }
                    arr[j + 1] = temp;
                }
                printf("Mang sau khi sap xep: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 8:    

            case 0:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
                break;
        }

    } while (choice != 10);

    return 0;
}
