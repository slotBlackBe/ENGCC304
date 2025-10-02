#include <stdio.h>

int main() {
    char employee[11];
    double hoursWorked, hourlyRate, totalIncome;

    // รับข้อมูล
    printf("Enter the Employee ID: ");
    scanf("%d", &employee);

    printf("Enter the working hrs: ");
    scanf("%lf", &hoursWorked);

    printf("Enter Salary amount/hr: ");
    scanf("%lf", &hourlyRate);

    // คำนวณรายได้ทั้งหมด
    totalIncome = hoursWorked * hourlyRate;

    // แสดงผล
    printf("\nEmployee ID: %d\n", employee);
    printf("Total Income: %.2lf U$\n", totalIncome);

    return 0; //จบโปรเเกรม
}
