#ifndef __CALCKIT__DERIVATIVE__HPP__
#define __CALCKIT__DERIVATIVE__HPP__
#include <functional>
#include <cstddef>
#include "dual.hpp"
#include <cstdint>
namespace CalcKit{
long double Derivative(std::function<long double(long double)> func,
                       long double x,long double eps=1e-6
                       );//Calculate the 1st derivative of a function at x
long double* Derivative(long double* y,long double* x,size_t n);
long double* Diff(long double* x,size_t n);
double Derivative(std::function<Dual(Dual)> func,double x);
}
#endif