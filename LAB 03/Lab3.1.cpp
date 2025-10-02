#include <stdio.h>

int main() {
    float base, height, Area;
    printf("H: ");
    scanf("%f", &base);
    printf("W: ");
    scanf("%f", &height);
    Area = (base * height) / 2;
    printf("Area: %.2f\n", Area);
    return 0;
}