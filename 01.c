#include<stdio.h>

int main() {
    int x = 10;

    // Storing the memory address of x
    int *ptr = &x;
    
    printf("Address of x: %p\n", ptr);
    printf("Value of x: %d\n", *ptr);
}