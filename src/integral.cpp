#include "integral.hpp"
#include <iostream>

namespace CalcKit{
struct SimsonRes{
    long double m,fm,integral;
};
SimsonRes __simson(std::function<long double(long double)> func,
                                  long double a,long double fa,
                                  long double b,long double fb){
    long double m = (a + b) / 2;
    long double fm =func(m);
    return SimsonRes{m, fm,(b - a)/6*(fa + 4 * fm + fb)};
}
long double __asr(std::function<long double(long double)> f,
                        long double  a,long double  fa,long double  b,
                        long double  fb,long double  eps,long double  whole,long double  m,
                        long double  fm){
    auto left  = __simson(f, a, fa, m, fm);
    auto right = __simson(f, m, fm, b, fb);
    auto delta = left.integral + right.integral - whole;
    if (std::abs(delta) <= 15 * eps){
        return left.integral + right.integral + delta / 15;
    }
    return __asr(f, a, fa, m, fm, eps/2, left.integral , left.m, left.fm) +
           __asr(f, m, fm, b, fb, eps/2, right.integral, right.m, right.fm);
}
long double Integrate(std::function<long double(long double)> func,
                                  long double a,long double b,long double eps
                                  ){
    int sign = 1;
    if(a>b){
        std::swap(a,b);
        sign=-1;
    }
    else if(a==b){
        return 0;
    }
    auto fa = func(a);
    auto fb = func(b);
    auto temp=__simson(func, a, fa, b, fb);
    auto m = temp.m;
    auto fm = temp.fm;
    auto whole = temp.integral;
    return sign*__asr(func, a, fa, b, fb, eps, whole, m, fm);
}
}