#include<stdio.h>

int main() {
    int num = 10;
    float fnum = 3.14;

    // What is a void pointer?
    // A void pointer is basically a pointer which is pointing to nothing and then we can control and typecast it to whatever we want. 

    void *vptr;
    vptr = &num;
    printf("Integer: %d\n", *(int*)vptr);

    vptr = &fnum;
    printf("Float Number: %.2f\n", *(float*)vptr);
}