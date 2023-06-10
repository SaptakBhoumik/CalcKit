#include <CalcKit/integral.hpp>
#include <CalcKit/limit.hpp>
#include <CalcKit/derivative.hpp>
#include <CalcKit/constant.hpp>
#include <iostream>
using namespace CalcKit;
long double f(long double x) {
    return x-std::sin(x);
}

long double g(long double x){
    return std::sin(5*x)/x;
}

long double h(long double x){
    return std::pow(x,x);
}

int main(){
    std::cout<<"f(x)=x-Sin(x)"<<std::endl;
    std::cout<<"Integration of f(x) from 0 to 10: "<<Integrate(f,0,10)<<std::endl;
    std::cout<<"g(x)=Sin(5x)/x"<<std::endl;
    std::cout<<"Limit of g(x) at 0: "<<Limit(g,0)<<std::endl;
    std::cout<<"h(x)=x^x"<<std::endl;
    std::cout<<"Derivative of h(x) at 2: "<<Derivative(h,2)<<std::endl;
}