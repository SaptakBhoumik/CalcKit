#ifndef __CALCKIT__INTEGRAL__HPP__
#define __CALCKIT__INTEGRAL__HPP__
#include <functional>
#include <cstddef>
#include <cstdint>
namespace CalcKit{
long double Integrate(std::function<long double(long double)> func,
                                  long double a,long double b,long double eps=1e-6
                                  );//Using Adaptive Simson 1/3 rule to calculate integral from a to b
}
#endif