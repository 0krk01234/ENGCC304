#include <stdio.h>
int main () {
    float a , b ;
    printf("H/W: ");
    scanf("%f %f", &a , &b);

    printf("Answer %0.1f", a * b /2);
    return 0;
}