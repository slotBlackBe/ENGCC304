#include <stdio.h>

int main() {
    char employee[11];  
    double hoursWorked, hourlyRate, totalIncome;

    printf("Enter the Employee ID: ");
    scanf("%10s", employee);   
    printf("Enter the working hrs: ");
    scanf("%lf", &hoursWorked);

    printf("Enter Salary amount/hr: ");
    scanf("%lf", &hourlyRate);

    totalIncome = hoursWorked * hourlyRate;

    printf("\nEmployee ID: %s\n", employee);   
    printf("Total Income: %.2lf U$\n", totalIncome);

    return 0; // จบโปรแกรม
}
