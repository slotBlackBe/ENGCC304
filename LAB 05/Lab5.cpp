#include <stdio.h>
#include <conio.h>

int main() {
    int score = 0;
    printf("Enter your score: ");
    scanf("%d", &score);
    printf("Grade :");
    if( score >= 90) {
        printf("A");
    } else if (score >= 75) {
        printf("B+");
    } else if (score >= 70) {
        printf("B");
    } else if (score >= 65) {
        printf("C+");
    } else if (score >= 60) {
        printf("C");
    } else if (score >= 65) {
        printf("D+");
    } else if (score >= 50) {
        printf("D");    
    } else {
        printf("F");
    }
    return 0; 
}