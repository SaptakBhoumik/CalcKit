#include "limit.hpp"
#include "constant.hpp"
#include <cmath>
#include <iostream>
namespace CalcKit{
long double LeftLimit(std::function<long double(long double)> func,
                      long double x,long double step
                      ){
    return func(x-step);
}
long double RightLimit(std::function<long double(long double)> func,
                       long double x,long double step
                       ){
    return func(x+step);
}
long double Limit(std::function<long double(long double)> func,
                  long double x,long double eps
                  ){
    long double step=1e-6;
    if(std::isinf(x)){
        auto f=[func](long double x){
            return func(1/x);
        };
        if(x<0){
            return LeftLimit(f,0,eps);
        }
        else{
            return RightLimit(f,0,eps);
        }
    }
    long double left=LeftLimit(func,x,eps);
    long double right=RightLimit(func,x,eps);
    auto diff=std::abs(left-right);
    if(diff<=eps){
        return left;
    }
    long double prev_diff=diff;
    while(diff>eps){
        step/=2;
        left=LeftLimit(func,x,step);
        right=RightLimit(func,x,step);
        diff=std::abs(left-right);
        if(diff>=prev_diff){
            throw std::runtime_error("Limit does not exist");
        }
    }
    return left;
}
}
