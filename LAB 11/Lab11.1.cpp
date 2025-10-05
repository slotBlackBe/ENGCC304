#include <stdio.h>
#include <math.h>


int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;

    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
    
}

int main() {
    int num;
    printf("Enter Number:\n");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Pass.\n");
    else
        printf("Not Pass.\n");
    return 0;
}