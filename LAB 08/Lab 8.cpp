#include <stdio.h>

int main() {
    int position, years, projects; // ตำแหน่งงาน, จำนวนปีที่ทำงาน, จำนวนโปรเจคที่สำเร็จ
    float baseSalary = 0, bonus = 0, extraBonus = 0, netSalary = 0; // เงินเดือนพื้นฐาน, โบนัสตามอายุงาน, โบนัสพิเศษ, เงินเดือนสุทธิ

    // รับค่าผู้ใช้
    printf("กรุณาเลือกตำแหน่งงาน (1=Junior, 2=Mid-Level, 3=Senior): ");  
    scanf("%d", &position);
    // รับจำนวนปีที่ทำงาน
    printf("กรุณากรอกจำนวนปีที่ทำงาน: ");
    scanf("%d", &years);
    // รับจำนวนโปรเจคที่สำเร็จในปีนี้
    printf("กรุณากรอกจำนวนโปรเจคที่สำเร็จในปีนี้: ");
    scanf("%d", &projects);

    // กำหนดเงินเดือนพื้นฐาน
    switch (position) { //
        case 1: baseSalary = 20000; break; // Junior
        case 2: baseSalary = 35000; break; // Mid-Level
        case 3: baseSalary = 50000; break; // Senior
        default: 
            // ถ้าผู้ใช้ป้อนตำเเหน่งที่ไม่อยู่ในตัวเลือกให้เเสดงข้อความเเล้วจบโปรเเกรม
            printf("ตำแหน่งงานไม่ถูกต้อง\n");
            return 0;
    }

    // โบนัสตามอายุงาน
    if (years < 1) bonus = 0; // น้อยกว่า ๅ ปี ไม่มีโบนัส
    else if (years <= 3) bonus = baseSalary * 0.10; // 1-3 ปี ได้โบนัส 10%
    else if (years <= 5) bonus = baseSalary * 0.15; // 4-5 ปี ได้โบนัส 15%
    else bonus = baseSalary * 0.20; // มากกว่า 5 ปี ได้โบนัส 20%

    // โบนัสพิเศษตามจำนวนโปรเจค
    if (projects > 5) {
        extraBonus = baseSalary * 0.05; // ถ้าเกิน 5 โปรเจคได้โบนัสพิเศษ 5%
    }

    // เงินเดือนสุทธิ
    netSalary = baseSalary + bonus + extraBonus; // คำนวณเงินเดือสุทธิ

    // แสดงผลลัพธ์
    printf("\n--- ผลการคำนวณ ---\n");
    printf("เงินเดือนพื้นฐาน: %.2f บาท\n", baseSalary);
    printf("โบนัสตามอายุงาน: %.2f บาท\n", bonus);
    printf("โบนัสพิเศษ: %.2f บาท\n", extraBonus);
    printf("เงินเดือนสุทธิ: %.2f บาท\n", netSalary);
    // เเสดงตรงหน้าจอทั้งหมด
    return 0; // จบโปรเเกรม
}

// switch ใช้ตรวจสอบค่า psoition 
// case 1: กำหนดเงินเดือนพื้นฐานสำหรับตำเเเหน่ง Junior
// case 2: Mid-Level
// case 3: Senior
// default: กรณีที่ผู้ใช้ป้อนตำเเหน่งไม่ถูกต้องให้เเสดงข้อความเเล้วจบโปรเเกรม
