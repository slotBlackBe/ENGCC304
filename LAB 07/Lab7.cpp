#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // ตัวเเปรหลักของโปรเเกรม
    int secret, guess; // secret = ตัวเลขลับ, guess = ตัวเลขที่ทาย
    int score; // คะเเนนของเกม (เริ่มต้นที่ 100)
    int command; // คำสั้งเล่นเกมหรือออกจากเกม
    int low, high; // ขอบเขตที่ใช้้เเสดงให้ผู้เล่นเดา (เริ่ม 1-100)

    srand(time(NULL)); // กำหนดค่า seed ให้กับตัวสร้างตัวเลขสุ่ม เพื่อให้ผลลัพธ์เเต่ละรันไม่เมือนกัน

    while (1) { // ลูปหลักของโปรเเกรม: จะวนใหผู้เล่นเลือกเล่นใหม่หรือออกจากเกม
        
        printf("\nDo you want to play game (1=play,-1=exit) :\n");
        if (scanf("%d", &command) != 1) { // อ่านคำสั่งจากผู้ใช้ เเละตรวจสอบว่า scanf รับค่าได้สำเร็จหรือไม่ 
            // ถ้า scanf อ่านค่าไม่ได้ให้ล้างข้อมูลที่ยังค้างในบัฟเฟอร์
            while (getchar() != '\n'); 
            printf("\nPlease enter only 1 or -1.\n");
            continue; // กลับไปถามคำสั่งใหม่
        } 

        if (command == -1) { // ถ้าผู้ใช้เลือก -1 ให้จบโปรเเกรม
            printf("\nSee you again.\n");
            break;
        } else if (command != 1) {
            printf("\nPlease enter only 1 or -1.\n"); // ถ้าผู้ใช้ใส่ค่าอื่นที่ไม่ใช่ 1 หรือ -1 ให้เเสดงข้อผิดพลาด
            continue;
        }

        // เริ่มเกมใหม่: กำหนดค่าเริ่มต้นของตัวเเปร
        score = 100; // คะเเนนเริ่มต้น
        low = 1; // ขอบล่างของช่วงตัวเลข
        high = 100; // ขอบบนของช่วงตัวเลข
        secret = rand() % 100 + 1; // สุ่มตัวเลขลับในช่วง 1-100

        printf("\n(Score=100)\n");
        // ลูปการเดาตัวเลขจะหยุดเมื่อเดาถูก
        while (1) {
            printf("\nGuess the winning number (%d-%d) :\n", low, high); // เเเสดงช่วงปัจจุบันให้ผู้เล่นทราบ
            scanf("%d", &guess);
            // ถ้าผู้เล่นเดาถูก
            if (guess == secret) { 
                printf("\nThat is correct! The winning number is %d.\n", secret);
                printf("\nScore this game: %d\n", score);
                break; // ออกจากลูปการเดา
            } else {
                // หากเดาผิดให้หักคะเเนน 10 คะเเนนต่อครั้งเเเละกันไม่ให้ต่ำกว่า 0
                score -= 10;
                if (score < 0) score = 0;
                // บอกใบ้ว่าค่าจริงสูงหรือต่ำกว่า (Low/higher)
                if (guess < secret) {
                    // ค่าจริงสูกกว่า guess เเจ้ง HIGHER
                    printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                    // ปรับขอบล่างให้เป็น guess + 1 ถ้า guess + 1 ยังมากกว่า low
                    if (guess + 1 > low) low = guess + 1; 
                } else {
                    // ค่าจริงต้่ำกว่า guess เเจ้ง LOWER
                    printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                    // ปรับขอบบนให้เป็น guess - 1 ถ้า guess - 1 ยังน้อยกว่า high
                    if (guess - 1 < high) high = guess - 1; 
                }
            }
        }
    }
    return 0; // จบโปรเเกรม
}
