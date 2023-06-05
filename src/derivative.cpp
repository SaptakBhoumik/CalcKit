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
long double* Derivative(long double* y,long double* x,size_t n){
    if(n<=1){
        throw std::invalid_argument("Size of x and y must be >=2");
    }
    long double* dy_dx=new long double[n-1];
    for(size_t i=1;i<n;i++){
        dy_dx[i-1]=(y[i]-y[i-1])/(x[i]-x[i-1]);
    }
    return dy_dx;
}
long double* Diff(long double* x,size_t n){
    if(n<=1){
        throw std::invalid_argument("Size of x must be >=2");
    }
    long double* dx=new long double[n-1];
    for(size_t i=1;i<n;i++){
        dx[i-1]=x[i]-x[i-1];
    }
    return dx;
}

double Derivative(std::function<Dual(Dual)> func,double x){
    return func(Dual(x,1)).eps;
}
}