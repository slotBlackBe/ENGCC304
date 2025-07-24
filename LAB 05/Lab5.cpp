#include <stdio.h>
#include <iostream>

int main() {
    int score = 0;
    printf("Enter your score: ");
    scanf("%d", &score);
    printf("Grade :");
    if( score >= 80) {
        printf("A");
    } else if (score >= 70) {
        printf("B");
    } else if (score >= 60) {
        printf("C");
    } else if (score >= 50) {
        printf("A");
    }
    return 0; // Placeholder for the main function
}