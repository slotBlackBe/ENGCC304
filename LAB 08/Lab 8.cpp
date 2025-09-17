#include <stdio.h>

int main() {
    int position, years, projects;
    float baseSalary = 0, bonus = 0, extraBonus = 0, netSalary = 0;

    // รับค่าผู้ใช้
    printf("กรุณาเลือกตำแหน่งงาน (1=Junior, 2=Mid-Level, 3=Senior): ");  
    scanf("%d", &position);

    printf("กรุณากรอกจำนวนปีที่ทำงาน: ");
    scanf("%d", &years);

    printf("กรุณากรอกจำนวนโปรเจคที่สำเร็จในปีนี้: ");
    scanf("%d", &projects);

    // กำหนดเงินเดือนพื้นฐาน
    switch (position) { //
        case 1: baseSalary = 20000; break;
        case 2: baseSalary = 35000; break;
        case 3: baseSalary = 50000; break;
        default: 
            printf("ตำแหน่งงานไม่ถูกต้อง\n");
            return 0;
    }

    // โบนัสตามอายุงาน
    if (years < 1) bonus = 0;
    else if (years <= 3) bonus = baseSalary * 0.10;
    else if (years <= 5) bonus = baseSalary * 0.15;
    else bonus = baseSalary * 0.20;

    // โบนัสพิเศษตามจำนวนโปรเจค
    if (projects > 5) {
        extraBonus = baseSalary * 0.05;
    }

    // เงินเดือนสุทธิ
    netSalary = baseSalary + bonus + extraBonus;

    // แสดงผลลัพธ์
    printf("\n--- ผลการคำนวณ ---\n");
    printf("เงินเดือนพื้นฐาน: %.2f บาท\n", baseSalary);
    printf("โบนัสตามอายุงาน: %.2f บาท\n", bonus);
    printf("โบนัสพิเศษ: %.2f บาท\n", extraBonus);
    printf("เงินเดือนสุทธิ: %.2f บาท\n", netSalary);

    return 0;
}
