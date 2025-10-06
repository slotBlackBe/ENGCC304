#include <stdio.h>

int main() {
    int arr[] = {15, 7, 25, 3, 73, 32, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp, pos = -1;

    printf("Old Series :");
    for (i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size -1 - i; j++) {
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nNew Series :");
    for (i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }

    for (i = 0; i < size; i++) {
        if (arr[i] == 32) {
            pos = i;
            break;
        }
    }

    printf("\nPos of 32 : %d\n", pos);

    return 0;
}