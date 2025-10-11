#include <stdio.h>

int main() {
    int num[] = {15, 7, 25, 3, 73, 32, 45};
    int n = 7;
    int i, j, temp;
    int pos = -1;

    printf("Old Series : ");
    for (i = 0; i < n; i++) {
        printf("%d", num[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("\nNew Series : ");
    for (i = 0; i < n; i++) {
        printf("%d", num[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }


    for (i = 0; i < n; i++) {
        if (num[i] == 32) {
            pos = i;
            break;
        }
    }

    printf("\nPos of 32 : %d\n", pos);

    return 0;
}