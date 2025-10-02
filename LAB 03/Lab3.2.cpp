#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
int isPrime(int num) {
    if (num < 2) return 0; // จำนวนที่น้อยกว่า 2 ไม่ใช่จำนวนเฉพาะ
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0; // ถ้าเป็นตัวหารของ num แสดงว่าไม่ใช่
    }
    return 1; // เป็นจำนวนเฉพาะ
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter value[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // แสดง Index
    printf("Index:  ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    // แสดง Array โดยแสดง # ถ้าไม่ใช่จำนวนเฉพาะ
    printf("Array:  ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%2d ", arr[i]);
        } else {
            printf("%2s ", "#");
        }
    }
    printf("\n");

    return 0; // จบโปรเเกรม
}
