#include <stdio.h>

void SwapNumber(int* swapage1, int* swapage2) {
    *swapage1 = *swapage1 + *swapage2; 
    *swapage2 = *swapage1 - *swapage2;
    *swapage1 = *swapage1 - *swapage2; 
}

int main () {
    int num1, num2;

    printf("Enter num1 :\n");
    scanf("%d", &num1);

    printf("Enter num2 :\n");
    scanf("%d", &num2);

    printf("Before swap (num1 & num2) : %d, %d\n", num1, num2);

    SwapNumber(&num1, &num2);

    printf("After swap (num1 & num2) : %d, %d\n", num1, num2);

    return 0;
}