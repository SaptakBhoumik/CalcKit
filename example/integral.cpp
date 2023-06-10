#include <CalcKit/integral.hpp>
#include <iostream>
long double f(long double x) {
    return x-std::sin(x);
}
int main(){
    std::cout<<"Integration of x-Sin(x) from 0 to 10: "<<CalcKit::Integrate(f,0,10)<<std::endl;
}
