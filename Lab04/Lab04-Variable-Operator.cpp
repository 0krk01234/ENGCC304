//Input the Employees ID(Max. 10 chars): 
//0342
//Input the working hrs: 
//8
//Salary amount/hr: 
//15000
//Output
//Expected Output:
//Employees ID = 0342
//Salary = U$ 120000.00

#include<stdio.h>

int main() {
   char Employess_ID [10] ;  
   float a ,b ;
   float sum ;
   
    printf("Inpuut the Employess ID: \n");
    scanf("%s" , Employess_ID);

    printf("Input the working hours: ");
    scanf("%f" , &a);

    printf("Salary: ");
    scanf("%f" , &b);

    sum = a * b;
    
    printf("Employess ID = %s\n" , Employess_ID);
    printf("Salary = %.2f\n" , sum);
    return 0;
}