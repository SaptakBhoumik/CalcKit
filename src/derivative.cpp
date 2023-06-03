#include "derivative.hpp"
#include "limit.hpp"
#include <iostream>
#include <cmath>
#include <limits>
namespace CalcKit{
long double Derivative(std::function<long double(long double)> func,
                       long double x,long double eps
                       ){
    std::function<long double(long double)> f=[func,x](long double dx){
        return (func(x+dx)-func(x))/dx;
    };
    return Limit(f,0,eps);
}
double Derivative(std::function<Dual(Dual)> func,double x){
    return func(Dual(x,1)).eps;
}
}