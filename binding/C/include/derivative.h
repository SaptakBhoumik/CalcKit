#ifndef __CALCKIT__C_BIND__DERIVATIVE__HPP__
#define __CALCKIT__C_BIND__DERIVATIVE__HPP__
#include <stddef.h>
#include "dual.hpp"
long double Derivative(long double (*func)(long double),
                       long double x,long double eps
                       );//Calculate the 1st derivative of a function at x
long double* DerivativeArray(long double* y,long double* x,size_t n);
long double* Diff(long double* x,size_t n);
double DerivativeWithDuel(struct Duel(*func)(struct Duel),double x);
#endif