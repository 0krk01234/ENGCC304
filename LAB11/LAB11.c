#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบว่าเป็นเลขอาร์มสตรองหรือไม่
void checkArmstrong(int num) {
    int position = num;
    int count = 0;

    // นับจำนวนหลัก
    while (position != 0) {
        position = position / 10;
        count++;
    }// end while 

    position = num;
    int realcount = count;
    int result = 0;
    int rem, start;

    // คำนวณผลรวมของหลักยกกำลังจำนวนหลัก
    while (position != 0) {
        rem = position % 10;
        start = 1;
        while (realcount != 0) {
            start = start * rem;
            realcount--;
        } // end while
        result += start;
        realcount = count;
        position /= 10;
    } // end while

    if (result == num) {
        printf("PASS");
    } // end if 
    else {
        printf("NOT PASS.");
    }// end else
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    checkArmstrong(num); // เรียกใช้ฟังก์ชัน

    return 0;
}