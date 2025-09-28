#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20] ;
    char ID [5];
    float scoreSub1 ; 
    float scoreSub2 ; 
    float scoreSub3 ; 
    float scoreSub4 ; 
    float scoreSub5 ; 
} typedef S;
void checkGrade(float Score) {
  if (Score >= 80 ) {
        printf("A ");
    }//end if
    else if (Score >=75 && Score < 80) {
        printf("B+ ");
    }//end else if
    else if (Score >=70 && Score < 75) {
        printf("B ");
    }// end else if
    else if (Score >=65 && Score < 70) {
        printf("C+ ");
    }// end else if     
    else if (Score >=60 && Score < 65) {
        printf("C ");
    }//end else if
    else if (Score >=55 && Score < 60) {
        printf("D+ ");
    }//end else if
    else if (Score >=50 && Score < 55) {
        printf("D ");
    }//end else if
    else {
        printf("F ");
    }// end else
} // end ฟังก์ชั้น

int main () {
    
    int n = 3 ;
    S Student[n];

    printf("Enter the details of 3 students : \n");

    for(int i = 0 ; i < n ; i ++) { // start for

        printf("Student %d:\n" , i + 1);
        printf("Name: ") ;
        scanf("%s" ,Student[i].Name);

        printf("ID: ");
        scanf("%s" , Student[i].ID);

        printf("Score in Subject 1: ");
        scanf("%f" ,&Student[i].scoreSub1);

        printf("Score in Subject 2: ");
        scanf("%f" ,&Student[i].scoreSub2);

        printf("Score in Subject 3: ");
        scanf("%f" ,&Student[i].scoreSub3);

        printf("Score in Subject 4: ");
        scanf("%f" ,&Student[i].scoreSub4);

        printf("Score in Subject 5: ");
        scanf("%f" ,&Student[i].scoreSub5);

    } // end for

    for (int i = 0 ; i < n ; i ++) {

        float averagescore ; 

        printf("Student %d\n" , i + 1) ;
        printf("Name: %s\n" ,Student[i].Name);
        printf("ID: %s\n" ,Student[i].ID);
        printf("Score: %.0f %.0f %.0f %.0f %.0f\n" ,
            Student[i].scoreSub1,
            Student[i].scoreSub2,
            Student[i].scoreSub3,
            Student[i].scoreSub4,
            Student[i].scoreSub5
        );
        
        printf("Grades: ");
            checkGrade(Student[i].scoreSub1);
            checkGrade(Student[i].scoreSub2);
            checkGrade(Student[i].scoreSub3);
            checkGrade(Student[i].scoreSub4);
            checkGrade(Student[i].scoreSub5);
        printf("\n");

        averagescore = Student[i].scoreSub1 + Student[i].scoreSub2 + Student[i].scoreSub3 + Student[i].scoreSub4 + Student[i].scoreSub5 ;
        averagescore = averagescore / 5 ;
        printf("Average Score: %.1f\n", averagescore );
        printf("\n");
    }// end for


    return 0 ;
}
// ฟังก์ชั่น viod ใช้สำหรับรับค่าเข้ามาแล้วไม่ส่งกลับไป โลกหลัก
// แต่ฟังก์ชั่น int จำเป็นต้อง ส่งค่ากลับไปเพื่อให้ได้ output ออกมา
