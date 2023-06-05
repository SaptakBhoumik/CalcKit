#include "integral.hpp"
#include "derivative.hpp"
#include "constant.hpp"
using namespace CalcKit;
#include <iostream>
long double f(long double x){
    return x;//x^2/2,x^3/6
}
long double f1(long double x){
    return x*x/2;
}
long double f2(long double x){
    return x*x*x/6;
}
long double f3(long double x){
    return x*x*x*x/24;
}
int main(){
    long double a=-15,b=20;
    std::cout<<Integrate(f,a,b,1)<<" "<<f1(b)-f1(a)<<std::endl;
    std::cout<<Integrate(f,a,b,2)<<" "<<f2(b)-f2(a)<<std::endl;
    std::cout<<Integrate(f,a,b,3)<<" "<<f3(b)-f3(a)<<std::endl;
    long double x[] = {.1, .2, .5, .6, .7, .8, .9};
    long double y[] = {1, 2, 3, 4, 4, 5, 6};
    auto dy_dx=Derivative(y,x,7);
    for(int i=0;i<6;i++){
        std::cout<<dy_dx[i]<<" ";
    }
    std::cout<<std::endl;
    auto I=Integrate(y,x,7);
    for(int i=0;i<7;i++){
        std::cout<<I[i]<<" ";
    }
    return 0;
}