#include<stdio.h>

typedef struct
{
    float x;
    float y;
} Point;


int main() {
    // Size of datatypes in bytes
    printf("Size of int in bytes: %d\n", sizeof(int));
    printf("Size of float in bytes: %d\n", sizeof(float));

    Point p = {1.1, 2.5};
    printf("Size of points: %zu\n", sizeof(Point));
}