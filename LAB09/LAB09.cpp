#include <stdio.h>
#include <stdbool.h>
int main () {
    int number [100] ;
    int N ;
    int i ; 

    printf("Enter N : ");
    scanf ("%d" , & N ) ; 
// scan 
    for ( i = 0 ; i < N ; i ++) {
        printf("Enter Value [%d] : " , i) ;
        scanf("%d" , & number[i]) ;
    } // end for
    // print index
    printf("index "); 
    for (i = 0 ; i < N ; i ++) {
        printf(" %d" , i);
    }// end for

    printf("\n");
    printf("Array: ") ;

    for (i = 0 ; i < N ; i ++){
        
        bool isprime = true ;
        int  prime = number [i] ; 
        for (int j = 2; j  < prime ; j ++) {
            if(prime % j == 0 ){
                isprime = false ; 
            }
        } // end for
        if( isprime ) {
            printf("%d " , prime) ;
        } // end if
        else {
            printf("# ") ;
        }// end else 
    } // end for
    return 0;
}