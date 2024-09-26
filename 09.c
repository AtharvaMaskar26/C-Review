#include <stdio.h>
// MACROS

// Examples for each conditional macros
// #if
// #ifdef
// #ifndef
// #elif
// #else
// #endif

#define PI 3.14159
// Outline function in c
#define AREA(R) {pi * R * R}

// Conditional macro that says if radius is not defined then: 
#ifndef radius
#define radius 7
#endif