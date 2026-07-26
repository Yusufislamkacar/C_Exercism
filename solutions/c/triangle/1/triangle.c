#include "triangle.h"

int is_triangle(triangle_t sides){
    if (sides.a < 0 || sides.b < 0 || sides.c < 0) return 0;
    return ((sides.a + sides.b > sides.c) ? ((sides.a + sides.c > sides.b) ? ((sides.b + sides.c >sides.a) ? 1 : 0) : 0) : 0);
}

int is_equilateral(triangle_t sides){
   return (is_triangle(sides) ? ((sides.a == sides.b && sides.a == sides.c) ? 1 : 0) : 0); 
}

int is_isosceles(triangle_t sides){
    //if(is_equilateral(sides)) return 0;
    return (is_triangle(sides) ? ((sides.a == sides.b || sides.a == sides.c || sides.c == sides.b) ? 1 : 0) : 0); 
}

int is_scalene(triangle_t sides){
    return (is_triangle(sides) ? ((sides.a != sides.b && sides.a != sides.c && sides.c != sides.b) ? 1 : 0) : 0); 
}