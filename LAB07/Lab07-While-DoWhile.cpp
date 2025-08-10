//rand() % 100 + 1หมายเหตุ : หากต้องการสุ่มตัวเลขที่เปลี่ยนแปลงตามเวลา ต้องใช้คำสั่ง srand( time( NULL ) ) ในตอนต้นของโปรแกรมด้วย

    //srand( time( NULL ) ) ;
    //FIX CODE
    //#include <stdlib.h>

    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <stdbool.h>
    int main () {

        srand( time( NULL ) ) ;
        int confirm  = 1;
        int number ;  // กำหนดให้มีค่า random
        int Guess ;  // กำหนดไว้รับค่า ตัวเลขที่ทาย
        bool condition = true ; // กำหนด = ture เพื่อ check เงื่อนไขการออกจาก loop
        int check = 0; // 

        
        while(condition) {


            printf("Do you want to play game?(1=paly , -1=exit): ");
            check = scanf("%d" , &confirm);

            if (check == 0 ) {
                printf("กรุณากรอกตัวเลข\n");
                while (getchar () != '\n'); //Getcher ค่าที่รับเข้ามาล่าสุดเพื่อ check ว่า ถ้าเจอ \n จะทำการ ออกจาก loop
            }

            else if(confirm == 1) {
                
                number = rand () % 100 +1 ; // กำหนด ตัวแปร number ให้สุ่มเลข ตั้งแต่ 1 - 100 
                int max = 100 ;
                int min = 1;
                int score = 100 ;
                bool Exit = true ;

            do{
                printf("\n --------------- \n");
                printf("(Score = %d)\n" , score);
                printf("Guess the winning number(%d-%d)\n:   " , min , max);
                check = scanf("%d" , &Guess);

                if (check == 0 ) { // check ตัว อักษร ผ่าน Getchar ถ้ากรอกตัวอักษร จะมีค่า false หรือ 0
                printf("กรุณากรอกตัวเลข\n");
                while (getchar () != '\n'); //Getcher ค่าที่รับเข้ามาล่าสุดเพื่อ check ว่า ถ้าเจอ \n จะทำการ ออกจาก loop
                } // end if

                else if (score == 0) { // กำหนด ถ้า คะแนน = 0 จะ ออกจาก loop ทันที และเริ่มเกมใหม่
                    printf("Ur dead\n");
                    Exit = false ;
                } // end else if

                else if (Guess < min) {
                    printf("กรุณากรอกเลขที่ ไม่น้อยไปกว่า %d \n" , min );
                } // end else if

                else if (Guess > max ) {
                    printf("กรุณากรอกเลขที่ไม่มากไปกว่า %d \n" , max );
                } // end else if
            
                else if(Guess > number) {
                    score -= 10 ;
                    max = Guess - 1 ;
                    printf("Sorry, the winning number is Lower than %d  (score = %d)\n" , Guess , score);
                } // end else if

                else if (Guess < number) {
                    score -=10 ;
                    min = Guess +1 ;
                printf("Sorry, the winning number is Higher than %d  (score = %d)\n" , Guess , score);
                } // end else if

                else if (Guess = number) {
                    printf("Score this game: %d\n" , score );
                    printf("That is correct! the winning number is %d\n", number);                  
                    Exit = false ;
                } // end else if


            } while(Exit) ; // Exit = false ถึงจะออกจาก loop do while
                
            }
        
            else if (confirm != 1 && confirm != -1){
            printf("please Enter only 1 , -1\n");
            }// end else if

            else if (confirm == -1) {
                printf("See you agian");
                condition = false ; // ถ้าเข้าเงื่อนไขนี้ กำหนดให้ condition = false ถึงจะออกจาก loop while
            }// end else if
        } // end while (condition) loop ของ while 
        
        return 0; // จบ กระบวนการ
    }