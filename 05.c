#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // By default an array pointer will point to the first element of the arry
    int *ptr = arr;

    for (int i = 0; i < 5;i ++) {
        printf("%d\n", *ptr);
        printf("%p\n", ptr);

        ptr++;
    }

    // In the output you can see that the difference between each number is 4bytes/32bits size of an integer. 
}