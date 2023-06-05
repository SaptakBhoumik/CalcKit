#ifndef __CALCKIT__INTEGRAL__HPP__
#define __CALCKIT__INTEGRAL__HPP__
#include <functional>
#include <cstddef>
#include <cstdint>
#include <cmath>
namespace CalcKit{
//Count means no of times we perform integration
long double Integrate(std::function<long double(long double)> func,
                                  long double a,long double b,size_t count=1,long double eps=1e-6
                                  );//Using Adaptive Simson 1/3 rule to calculate integral from a to b
long double* Integrate(long double* y,long double* x,size_t n);
}
#endif