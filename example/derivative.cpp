#include <CalcKit/derivative.hpp>
#include <CalcKit/dual.hpp>
#include <CalcKit/constant.hpp>
#include <iostream>
#include <cmath>

CalcKit::Dual f(CalcKit::Dual x) { return  CalcKit::pow(x,x);}
long double g(long double x) { return std::pow(x,x); }
int main(){
    std::cout << "Derivative of x^x at x=1 using Dual No. is " << CalcKit::Derivative(f, 1) << std::endl;
    std::cout << "Derivative of x^x at x=1 using regular method is " << CalcKit::Derivative(g, 1) << std::endl;
    return 0;
}