#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bool Ascending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    srand(time(0)); 

    printf("Valores gerados aleatoriamente:\n");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; 
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (Ascending(arr, size)) {
        printf("True.\n");
    } else {
        printf("False.\n");
    }

    return 0;
}

