/*
    จงแปลงตัวเลขที่ผู้ใช้ป้อนเข้ามาให้กลายเป็นตัวหนังสือ เช่น ผู้ใช้กรอกว่า 3 ให้แสดงผลลัพธ์ว่า Three
    (กำหนดให้สามารถกรอกเลขได้แค่ 0 ถึง 30 เท่านั้น)
    (กำหนดให้ใช้คำสั่ง switch case เท่านั้น)
    
    Test case:
        User input :
            12
    Output:
        Twelve

    Test case:
        User input :
            4
    Output:
        Four
*/
#include <stdio.h>

int main() {
    int choice;
    printf("Userinput: ");
    scanf("%d", &choice);

    switch (choice) {
        case 0:
            printf("ZERO");
            break;

        case 1:  
            printf("ONE"); 
            break;

        case 2:  
            printf("TWO");
             break;

        case 3:  
            printf("THREE"); 
            break;

        case 4:  
            printf("FOUR"); 
            break;

        case 5:  
            printf("FIVE");
             break;

        case 6:  
            printf("SIX");
             break;

        case 7:  
            printf("SEVEN");
             break;

        case 8:  
            printf("EIGHT"); 
            break;

        case 9:  
            printf("NINE"); 
            break;

        case 10: 
            printf("TEN"); 
            break;

        case 11: 
            printf("ELEVEN");
             break;

        case 12: 
            printf("TWELVE");
             break;

        case 13: 
            printf("THIRTEEN"); 
            break;

        case 14: 
            printf("FOURTEEN"); 
            break;

        case 15: 
            printf("FIFTEEN"); 
            break;

        case 16: 
            printf("SIXTEEN");
             break;

        case 17: 
            printf("SEVENTEEN"); 
            break;

        case 18: 
            printf("EIGHTEEN"); 
            break;

        case 19: 
            printf("NINETEEN");
             break;

        case 20: 
            printf("TWENTY"); 
            break;

        case 21: 
            printf("TWENTY-ONE");
             break;

        case 22: 
            printf("TWENTY-TWO");
             break;

        case 23: 
            printf("TWENTY-THREE"); 
            break;

        case 24: 
            printf("TWENTY-FOUR"); 
            break;

        case 25: 
            printf("TWENTY-FIVE"); 
            break;

        case 26: 
            printf("TWENTY-SIX");
             break;

        case 27: 
            printf("TWENTY-SEVEN"); 
            break;

        case 28: 
            printf("TWENTY-EIGHT"); 
            break;

        case 29: 
            printf("TWENTY-NINE"); 
            break;

        case 30: 
            printf("THIRTY"); 
            break;

        default: 
            printf("Enter (0-30 ONLY)");
    }

    return 0;
}