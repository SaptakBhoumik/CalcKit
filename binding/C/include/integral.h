#ifndef __CALCKIT__C_BIND__INTEGRAL__HPP__
#define __CALCKIT__C_BIND__INTEGRAL__HPP__
#include <stddef.h>
long double Integrate(long double (*func)(long double),
                                  long double a,long double b,long double eps
                                  );//Using Adaptive Simson 1/3 rule to calculate integral from a to b
long double* IntegrateArray(long double* y,long double* x,size_t n);
#endif