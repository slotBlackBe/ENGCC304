#include <stdio.h>
#include <conio.h>
int main() {
    char EmployeesID[10];
    int Hour = 0;
    float salary = 0;
    printf("the Employees ID : ");
    scanf("%s", EmployeesID);
    printf("the working hrs : ");
    scanf("%d", &Hour);
    printf("Salary amount/hr : %f\n",Hour + salary);
}