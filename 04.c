#include<stdio.h>
#include<stdlib.h>

int main () {
    // Initialise a pointer to null
    // This means that the pointer is initialized but does not point anywhere (it does not have a valid memory address)

    int *ptr = NULL;
    printf("1. Initial ptr value: %p\n", (void*)ptr);

    // This is why thiswill be printed
    if (ptr == NULL) {
        printf("2. ptr is null, cannot derefernce\n");
    }

    // Allocate memory using malloc
    // Malloc creates a void pointer but has memory allocated.
    ptr = malloc(sizeof(int));

    // Since memory is allocated this does not paste.
    if (ptr == NULL) {
        printf("Memory Allocation failed\n");

        return 1;
    }
}