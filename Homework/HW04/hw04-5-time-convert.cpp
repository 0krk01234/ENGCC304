#include <stdio.h>
int main () {
    int day;
    int sum;
    int seccond = 60 * 60 *24;
        
        printf("Input Days: ");
        scanf("%d", &day);
        
        sum = day * seccond ;
     
        printf("Output\n");
        printf("%d day = %d Second",day , sum);
    return 0;
}