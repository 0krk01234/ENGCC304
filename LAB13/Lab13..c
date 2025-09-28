/*
    โจทย์
จงเขียนโปรแกรมเพื่อสลับตัวเลขจำนวนเต็มโดยใช้ Pointer โดยการสลับค่าตัวแปร จะต้องกระทำที่ฟังก์ชันภายนอกฟังก์ชันหลักเท่านั้น โปรแกรมจึงควรมีลักษณะการทำงานดังนี้

ประกาศตัวแปร num1 และ num2 โดยกำหนดให้ค่าทั้ง 2 ตัวแปรแตกต่างกัน
ประกาศตัวแปร ptr1 และ ptr2 เป็น Pointer เพื่อเก็บค่าที่อยู่ของ num1 และ num2 ตามลำดับ
เรียกใช้ฟังก์ชันชื่อว่า swapNumbers โดยการส่ง Pointer ทั้ง 2 ค่าเข้าไปในฟังก์ชัน (ห้ามใช้ตัวแปรพักค่าเด็ดขาด)
ภายในตัวแปร swapNumbers ให้กับการสลับค่า
ในฟังก์ชันหลัก เรียกใช้งานฟังก์ชัน swapNumbers โดยการส่ง ptr1 และ ptr2 เข้าไป
ในฟังก์ชันหลัก ให้แสดงค่าภายในตัวแปร num1 และ num2 ทั้งก่อนและหลังเรียกใช้งาน swapNumbers

*/

#include <stdio.h>
  struct NameandAge {
        char Name[20];
        int Age;
    } ; // structure

    void SwapNumber(int*swapage1,int*swapage2) {

            
            *swapage1 = *swapage1 + *swapage2; 
            *swapage2 = *swapage1 - *swapage2;
            *swapage1 = *swapage1 - *swapage2; 

    } // end fantion 
      
int main () {

    struct NameandAge First; // First Age
    struct NameandAge Second; // second Age

    printf("Name\n : ");
    scanf("%s",First.Name);
    printf("Age\n: ");
    scanf("%d",&First.Age);
    printf("Name\n : ");
    scanf("%s",Second.Name);
    printf("Age\n: ");
    scanf("%d",&Second.Age);

    printf("-------------\n");

    printf("Name: %s (%d)\n",First.Name ,First.Age);
    printf("Name: %s (%d)\n",Second.Name , Second.Age);

    
    int *ptr1 = &First.Age ;
    int *ptr2 = &Second.Age ;

    SwapNumber(&*ptr1,&*ptr2); //เรียกใช้ ฟังก์ชั้น

    printf("Swap Age\n");

    printf("Name: %s (%d)\n",First.Name ,First.Age);
    printf("Name: %s (%d)\n",Second.Name , Second.Age);


    return 0;
}