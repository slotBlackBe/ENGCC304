#include <stdio.h>

int main() {
    char employee[11];  // เก็บรหัสพนักงานสูงสุด 10 ตัวอักษร + '\0'
    double hoursWorked, hourlyRate, totalIncome;

    // รับข้อมูล
    printf("Enter the Employee ID: ");
    scanf("%10s", employee);   // ใช้ %s สำหรับ string และ %10s ป้องกัน overflow

    printf("Enter the working hrs: ");
    scanf("%lf", &hoursWorked);

    printf("Enter Salary amount/hr: ");
    scanf("%lf", &hourlyRate);

    // คำนวณรายได้ทั้งหมด
    totalIncome = hoursWorked * hourlyRate;

    // แสดงผล
    printf("\nEmployee ID: %s\n", employee);   // ใช้ %s แสดงข้อความ
    printf("Total Income: %.2lf U$\n", totalIncome);

    return 0; // จบโปรแกรม
}
