 //Test case:
   //     Input the Employees ID(Max. 10 chars): 
     //       0342
       // Input the working hrs: 
         //   8
        //Salary amount/hr: 
      //      15000
   // Output:
     //   Expected Output:
       // Employees ID = 0342
     //   Salary = U$ 120,000.00
#include <stdio.h>
int main () {
    char Employees [10];
    int hrs;
    int Salary; 

        printf("Input employees id: ");
        scanf("%s", Employees);

        printf("Input working hrs: ");
        scanf("%d" , &hrs);

        printf("Input Salary: ");
        scanf("%d", &Salary);

        printf("Output\n");
        printf("Expected Output\n");
        printf("Employees ID = %s\n" , Employees);
        printf("Salary = U$ %d",hrs * Salary);

    return 0;
}                                                     // Output:
     //   Expected Output:
       // Employees ID = 0342
     //   Salary = U$ 120,000.00