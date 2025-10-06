#include <stdio.h>
#include <stdlib.h>

  int CHECKFILE(char *fliename){

        FILE *fp;
        fp = fopen(fliename, "r");
        if (fp == NULL){
            printf("\nError opening flie");
            exit(0) ; // การจบโปรแกรม
        } // end if 

        char name [100] ; 
        int  n = 0 ; // นับค่า ประโยค

        while (fscanf(fp, "%s", name) != EOF) {
            printf("%s", name);
            printf("\n");
            n++ ;
        } // end while
        fclose(fp); // close file
        return n;
    }

int main() {

    char namefile[100];

    printf("ENTER TEXT NAME : "); 
    scanf("%s: ", namefile);

    int count = CHECKFILE(namefile);

    printf("total number of word in '%s' = %d",namefile , count);

    return 0;
}