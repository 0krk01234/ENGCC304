
#include <stdio.h>
#include <string.h>
int main () {

    char user[20];
    char user_reverse[20];

    printf("Enter ur name : ");
    scanf("%s" , user);
    strlwr (user) ; //ฟังก์ชั่น ปรับ ขนาดตัวหนังสือ

    int len = strlen(user) ;
    int l = len ;

    printf("%d" , l)   ;  // check position text
    for (int i = 0 ; i <= strlen(user) ; i ++ ) { // นับจำนวน user
        user_reverse[i]  = user[strlen (user) - 1 - i  ] ;
                      
    }// end for                      

    printf ("%s\n" , user_reverse);                                                                 
    int answer ;                                                                    

    answer = strcmp (user , user_reverse) ;     // check ค่าของ user                                 

    if(answer == 0 ) {
        printf("Pass") ;
    }// end if
    else {
        printf("NOT PASS");
    }// end else
    
    return 0 ;
}