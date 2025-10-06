#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main() {
    int arr[100];
    int count = 0;
    int min, max;

    printf("Enter value:\n");

    while (scanf("%d", &arr[count]) == 1) {
        count++;
        if (getchar() == '\n') break;
    }

    printf("Index: ");
    for (int i = 0; i < count; i++) printf("%d ", i);

    printf("\nArray: ");
    for (int i = 0; i < count; i++) printf("%d ", arr[i]);

    findMinMax(arr, count, &min, &max);

    printf("\n\nMin : %d\n", min);
    printf("Max : %d\n", max);

    return 0; // จบโปรเเกรม
}