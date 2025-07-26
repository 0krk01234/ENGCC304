/*
    จงแสดงผลตัวแปรทั้งหมดเรียงลำดับดังนี้ a b c d

    Output:
        10 20.0 Haha a
*/
#include<stdio.h> 
    int main () {
    int a = 10 ;
    float b = 20 ;
    char c[10] = "Haha" ; // ใช้สำหรับ char ที่มี []
    char d = 'a' ; // ใช้สำหรับ char ที่มีตัวเดียว

    printf("%d %.1f %s %c", a , b , c , d) ; //TODO: #10 Display variable a, b, c and d.   
 return 0;
}