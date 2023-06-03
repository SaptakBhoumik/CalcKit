#ifndef __CALCKIT__DUAL__HPP__
#define __CALCKIT__DUAL__HPP__
#include <iostream>
namespace CalcKit{
class Dual{
    public:
    double re;
    double eps;
    Dual()=default;
    Dual(double re, double eps=0);
    Dual(const Dual& other);
    Dual(Dual&& other);
    Dual& operator=(const Dual& other);
    Dual operator+(const Dual& other) const;
    Dual operator-(const Dual& other) const;
    Dual operator*(const Dual& other) const;
    Dual operator/(const Dual& other) const;
    Dual operator+(double other) const;
    Dual operator-(double other) const;
    Dual operator*(double other) const;
    Dual operator/(double other) const;
    Dual operator-() const;
    Dual& operator+=(const Dual& other);
    Dual& operator-=(const Dual& other);
    Dual& operator*=(const Dual& other);
    Dual& operator/=(const Dual& other);
    Dual& operator+=(double other);
    Dual& operator-=(double other);
    Dual& operator*=(double other);
    Dual& operator/=(double other);
    bool operator==(const Dual& other) const;
    bool operator!=(const Dual& other) const;
    Dual conjugate() const;
    Dual reciprocal() const;
};
Dual abs(Dual a);
Dual ln(Dual a);
Dual log(Dual a,double base=10);
Dual log(Dual a,Dual c);
Dual exp(Dual a);
Dual sqrt(Dual a);
Dual pow(Dual a,double exponent);
Dual pow(Dual a,const Dual& exponent);
Dual sin(Dual a);
Dual cos(Dual a);
Dual tan(Dual a);
Dual cosec(Dual a);
Dual sec(Dual a);
Dual cot(Dual a);
Dual asin(Dual a);
Dual acos(Dual a);
Dual atan(Dual a);
Dual acosec(Dual a);
Dual asec(Dual a);
Dual acot(Dual a);
Dual sinh(Dual a);
Dual cosh(Dual a);
Dual tanh(Dual a);
Dual cosech(Dual a);
Dual sech(Dual a);
Dual coth(Dual a);
Dual asinh(Dual a);
Dual acosh(Dual a);
Dual atanh(Dual a);
Dual acosech(Dual a);
Dual asech(Dual a);
Dual acoth(Dual a);
std::ostream& operator<<(std::ostream& os, const Dual& d);
Dual operator+(double a, const Dual& b);
Dual operator-(double a, const Dual& b);
Dual operator*(double a, const Dual& b);
Dual operator/(double a, const Dual& b);
Dual log(double n, const Dual& c);
}
#endif
