#include <stdio.h>

int main() {
    int number[100];
    int n = 0;
    int i;
    int min, max;

    printf("Enter value:\n");

    while (scanf("%d", &number[n]) == 1) {
        n++;
        if (getchar() == '\n') {
            break;
        }
    }

    printf("Index: ");
    for (i = 0; i < n; i++) {
        printf("%3d", i);
    }

    printf("\nArray:");
    for (i = 0; i < n; i++) {
        printf("%3d", number[i]);
    }

    min = number[0];
    max = number[0];

    for (i = 1; i < n; i++) {
        if (number[i] < min) {
            min = number[i];
        }
        if (number[i] > max) {
            max = number[i];
        }
    }

    printf("\n\nMin : %d", min);
    printf("\nMax : %d\n", max);

    return 0;
}