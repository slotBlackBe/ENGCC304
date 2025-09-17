#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
    if (n <= 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N;

    printf("Enter N :\n");
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        printf("Enter value[%d] : \n", i);
        scanf("%d", &arr[i]);
    }

    printf("Index: ");
    for (int i = 0; i < N; i++) {
        printf("%3d", i);
    }
    printf("\n");

    printf("Array: ");
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i])) {
            printf("%3d", arr[i]);
        } else {
            printf("%3c", '#');
        }
    }
    printf("\n");

    return 0; // จบโปรเเกรม
}