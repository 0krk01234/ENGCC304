#include <stdio.h>
int main () {
    int Celsius ;
    int Fahrenheit;
 
    printf("User input: ") ;
    scanf("%d",&Celsius);

    Fahrenheit = (Celsius * 9.0/5) + 32 ;

    printf("Output\n");
    printf("%d degree Celsius = %d degree Fahrenheit",Celsius , Fahrenheit);
    return 0;
}