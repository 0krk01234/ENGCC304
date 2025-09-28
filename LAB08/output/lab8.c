#include <stdio.h> 
int main () {
    int Position =  0;
    int Year = 0 ; 
    int Completed = 0;
    int Jnuior = 20000 , MidLevel_programer = 35000 , Senior_programer = 50000 ;
    int Job = 0 ;
    int Bonus = 0 ; 
    int Special_Bonus = 0 ;

    printf("Position: ");
    scanf("%d" , &Position);

    printf("Years of Experience: "); 
    scanf("%d" , &Year);

    printf("Number of Projects Completed this Year : ");
    scanf("%d" , &Completed);

    switch(Position) {
        case 1 :
            printf("Position1 Junoir");
            Job = 20000 ;
            break;
        
        case 2 : 
            printf("position2 Mid Level Programer");
            Job = 35000 ;  
            break;

        case 3 :
            printf("Senior_programer") ; 
            Job = 50000 ;
            break;

        default :
            printf("Pls Enter only 1-3");
            break;
    } //end switch case

    if(Completed > 5) {
        Special_Bonus = Job * 5 / 100; 
    }//end if
    else if (Completed < 5) {
        Special_Bonus = 0 ; 
    }// end else if
    
    if(Year >= 1 && Year <= 3) {
        Bonus =  Job *10 / 100 ;
    }// end else if
    else if (Year >= 4 && Year <= 5 ){
        Bonus =  Job *15 / 100 ;
    }// end else if
    else if (Year > 5 ) {
        Bonus =  Job *20 / 100 ; 
    }// end else if 

    int sum = Job + Bonus + Special_Bonus ;
    
    printf("Base Salary %d\n" , Job) ;
    printf("Experice Bonus %d\n" , Bonus) ;
    printf("Speceial %d\n" , Special_Bonus) ; 
    printf("Net salary %d\n" , sum) ;

    return 0;
}