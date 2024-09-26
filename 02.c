#include<stdio.h>

int main() {
    int value = 42;

    int *ptr1 = &value;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    printf("So lets see what's going on: \n");
    printf("1. Value: %d", value);
    printf("2. ptr1 - %p stores the address of value:%d\n", ptr1, *ptr1);

    printf("3. ptr2 - %p stores the address of ptr1 - %p", ptr2, ptr1);

    printf("4. Finally ptr3 - %p stores the address of ptr2 - %p", ptr3, ptr2);

    printf("Final value will be given as: %d", ***ptr3);
}