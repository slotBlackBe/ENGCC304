#include <stdio.h>

int main() {
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    long long seconds = (long long) days * 24 * 60 * 60;
    printf("%d day(s) = %lld second(s)\n", days, seconds);

    return 0;
} 