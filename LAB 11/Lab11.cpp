#include <stdio.h>
#include <math.h>

int isArmstrog(int num) {
    int original = num; // เดก็บค่าตัวเลขดั้งเดิมเอาไว้
    int sum = 0, digit, n = 0; // เก็บค่าหลักที่ดึงออกมา n คือจำนวนหลักของตัวเลขนั้น
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp > 0) { // วนหารจำนวนหลักทั้งหมด
        digit = temp % 10; 
        sum += pow(digit, n);
        temp /= 10;
    }
    // คืนค่า 1 ถ้าเป็น Armstrong, 0 ถ้าไม่ใช่
    return (sum == original);

}

int main() {
    int number;

    printf("Enter Number:");
    scanf("%d", &number);

    if (isArmstrog(number)) {
        printf("%d", &number);
    } else {
        printf("Not Pass.\n");
    }

    return 0;
}
