#include "complex_numbers.h"
#include <math.h>

complex_t c_add(complex_t a, complex_t b)
{
   complex_t sum;
   sum.real = a.real + b.real;
   sum.imag = a.imag + b.imag;
   return sum;
}

complex_t c_sub(complex_t a, complex_t b)
{
   complex_t sub;
   sub.real = a.real - b.real;
   sub.imag = a.imag - b.imag;
   return sub;
}

complex_t c_mul(complex_t a, complex_t b)
{
   complex_t mul;
   mul.real = a.real * b.real - a.imag * b.imag;
   mul.imag = a.imag * b.real + a.real * b.imag;
   return mul;
}

complex_t c_div(complex_t a, complex_t b)
{
   complex_t div;
   div.real = (a.real * b.real + a.imag * b.imag) / (b.imag * b.imag + b.real * b.real);
   div.imag = (a.imag * b.real - a.real * b.imag) / (b.imag * b.imag + b.real * b.real);
   return div;
}

double c_abs(complex_t x)
{
   return sqrt(x.real * x.real + x.imag * x.imag);
}

complex_t c_conjugate(complex_t x)
{
   complex_t conjugate;
   conjugate.imag = -x.imag;
   conjugate.real = x.real;
   return conjugate;
}

double c_real(complex_t x)
{
   return x.real;
}

double c_imag(complex_t x)
{
   return x.imag;
}

complex_t c_exp(complex_t x)
{
   complex_t expo;
   expo.real = exp(x.real) * cos(x.imag);
   expo.imag = exp(x.real) * sin(x.imag);
   return expo;
}
