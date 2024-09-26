#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[] = {10, 11, 12, 13, 14, 15, 16};

    int *ptr1 = arr1; // This by default points to the first element of the array
    int *ptr2 = arr2;

    int *matrix[] = {ptr1, ptr2};

    // Iterating through the 2D matrix

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 9; i++) {
            printf("%d ", *matrix[i]++);
        }
        printf("\n");
    }
}