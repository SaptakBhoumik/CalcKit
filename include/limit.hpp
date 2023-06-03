#ifndef __CALCKIT__LIMIT__HPP__
#define __CALCKIT__LIMIT__HPP__
#include <functional>
#include <cstddef>
#include <cstdint>
//Limitions:-x cant be infinite
namespace CalcKit{
long double LeftLimit(std::function<long double(long double)> func,
                      long double x,long double step=1e-6
                      );//Calculate the left limit of a function at x
long double RightLimit(std::function<long double(long double)> func,
                       long double x,long double step=1e-6
                       );//Calculate the right limit of a function at x
long double Limit(std::function<long double(long double)> func,
                    long double x,long double eps=1e-6
                    );//Calculate the limit of a function at x
}
#endif