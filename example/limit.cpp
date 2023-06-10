#include <cmath>
#include <CalcKit/limit.hpp>
#include <CalcKit/constant.hpp>
#include <iostream>
long double f(long double x) { return std::sin(x) / x; }
long double h(long double x) { return std::pow(1+1/x,x); }
long double g(long double x) { return std::abs(std::sin(x)) / x; }
int main(){
    std::cout << "Limit of sin(x)/x at x tends to 0= " << CalcKit::Limit(f, 0) << std::endl;
    std::cout << "Limit of (1+1/x)^x at x tends to inf= " << CalcKit::Limit(h, CalcKit::C_INF) << std::endl;
    std::cout << "Right hand limit of |sin(x)|/x as x tends to 0 = " << CalcKit::RightLimit(g, 0) << std::endl;
    std::cout << "Left hand limit of |sin(x)|/x as x tends to 0 = " << CalcKit::LeftLimit(g, 0) << std::endl;
    return 0;
}