#include <stdio.h>

void reverseArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int V[] = {4, 9, 10, 8, 6};
    int size = sizeof(V) / sizeof(V[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", V[i]);
    }

    reverseArray(V, size);

    printf("\nReversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}
