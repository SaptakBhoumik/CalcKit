#include "dual.hpp"
#include "constant.hpp"
#include <cmath>
namespace CalcKit{
Dual::Dual(double re, double eps){
    this->re = re;
    this->eps = eps;
}
Dual::Dual(const Dual& other){
    this->re = other.re;
    this->eps = other.eps;
}
Dual::Dual(Dual&& other){
    this->re = other.re;
    this->eps = other.eps;
}
Dual& Dual::operator=(const Dual& other){
    this->re = other.re;
    this->eps = other.eps;
    return *this;
}
Dual Dual::operator+(const Dual& other) const{
    return Dual(this->re + other.re, this->eps + other.eps);
}
Dual Dual::operator-(const Dual& other) const{
    return Dual(this->re - other.re, this->eps - other.eps);
}
Dual Dual::operator*(const Dual& other) const{
    return Dual(this->re * other.re, this->re * other.eps + this->eps * other.re);
}
Dual Dual::operator/(const Dual& other) const{
    if(re==0&&other.re==0){
        if(eps==0){
            return Dual(0,1/other.eps);
        }
        return Dual(eps/other.eps,0);
    }
    return Dual(this->re / other.re, 
                (this->eps * other.re - this->re * other.eps) / (other.re * other.re));
}
Dual Dual::operator+(double other) const{
    return Dual(this->re + other, this->eps);
}
Dual Dual::operator-(double other) const{
    return Dual(this->re - other, this->eps);
}
Dual Dual::operator*(double other) const{
    return Dual(this->re * other, this->eps * other);
}
Dual Dual::operator/(double other) const{
    return Dual(this->re / other, this->eps / other);
}
Dual Dual::operator-() const{
    return Dual(-this->re, -this->eps);
}
Dual& Dual::operator+=(const Dual& other){
    *this = *this + other;
    return *this;
}
Dual& Dual::operator-=(const Dual& other){
    *this = *this - other;
    return *this;
}
Dual& Dual::operator*=(const Dual& other){
    *this = *this * other;
    return *this;
}
Dual& Dual::operator/=(const Dual& other){
    *this = *this / other;
    return *this;
}
Dual& Dual::operator+=(double other){
    *this = *this + other;
    return *this;
}
Dual& Dual::operator-=(double other){
    *this = *this - other;
    return *this;
}
Dual& Dual::operator*=(double other){
    *this = *this * other;
    return *this;
}
Dual& Dual::operator/=(double other){
    *this = *this / other;
    return *this;
}
bool Dual::operator==(const Dual& other) const{
    return this->re == other.re && this->eps == other.eps;
}
bool Dual::operator!=(const Dual& other) const{
    return !(*this == other);
}
Dual Dual::conjugate() const{
    return Dual(this->re, -this->eps);
}
Dual Dual::reciprocal() const{
    return Dual(1 / this->re, -this->eps / (this->re * this->re));
}
//f(a+bε)=f(a)+f'(a)bε
Dual abs(Dual a){
    if(a.re>0){
        return Dual(a.re,a.eps);
    }
    else if(a.re==0){
        return Dual(0,0);
    }
    return Dual(-a.re,-a.eps);
}
Dual ln(Dual a){
    return Dual(std::log(a.re), a.eps / a.re);
}
Dual log(Dual a,double base){
    return ln(a) / std::log(base);
}
Dual log(Dual a,Dual c){
    return ln(a) / ln(c);
}
Dual exp(Dual a){
    double x=std::exp(a.re);
    return Dual(x, a.eps * x);
}
Dual sqrt(Dual a){
    double x=std::sqrt(a.re);
    return Dual(x, a.eps / (2 * x));
}
Dual pow(Dual a,double exponent){
    double x=std::pow(a.re, exponent);
    return Dual(x, exponent * a.eps * x / a.re);
}
Dual pow(Dual a,const Dual& exponent){
    auto x=ln(a) * exponent;
    return exp(x);
}
Dual sin(Dual a){
    return Dual(std::sin(a.re), a.eps * std::cos(a.re));
}
Dual cos(Dual a){
    return Dual(std::cos(a.re), -a.eps * std::sin(a.re));
}
Dual tan(Dual a){
    auto sec=1 / std::cos(a.re);
    return Dual(std::tan(a.re), a.eps * sec * sec);
}
Dual cosec(Dual a){
    return sin(a).reciprocal();
}
Dual sec(Dual a){
    return cos(a).reciprocal();
}
Dual cot(Dual a){
    return tan(a).reciprocal();
}
Dual asin(Dual a){
    return Dual(std::asin(a.re), a.eps / std::sqrt(1 - a.re * a.re));
}
Dual acos(Dual a){
    return Dual(std::acos(a.re), -a.eps / std::sqrt(1 - a.re * a.re));
}
Dual atan(Dual a){
    return Dual(std::atan(a.re), a.eps / (1 + a.re * a.re));
}
Dual acosec(Dual a){
    return asin(a.reciprocal());
}
Dual asec(Dual a){
    return acos(a.reciprocal());
}
Dual acot(Dual a){
    return atan(a.reciprocal());
}
Dual sinh(Dual a){
    auto e_x=exp(a);
    return (e_x - e_x.reciprocal()) / 2;
}
Dual cosh(Dual a){
    auto e_x=exp(a);
    return (e_x + e_x.reciprocal()) / 2;
}
Dual tanh(Dual a){
    auto e_x=exp(a);
    auto e_x_1=e_x.reciprocal();
    return (e_x - e_x_1) / (e_x + e_x_1);
}
Dual cosech(Dual a){
    return sinh(a.reciprocal());
}
Dual sech(Dual a){
    return cosh(a.reciprocal());
}
Dual coth(Dual a){
    return tanh(a.reciprocal());
}
Dual asinh(Dual a){
    return Dual(std::asinh(a.re), a.eps / std::sqrt(a.re * a.re +1));
}
Dual acosh(Dual a){
    return Dual(std::acosh(a.re), a.eps / std::sqrt(a.re * a.re - 1));
}
Dual atanh(Dual a){
    return Dual(std::atanh(a.re), a.eps / (1 - a.re * a.re));
}
Dual acosech(Dual a){
    return asinh(a.reciprocal());
}
Dual asech(Dual a){
    return acosh(a.reciprocal());
}
Dual acoth(Dual a){
    return atanh(a.reciprocal());
}
Dual operator+(double a, const Dual& b){
    return b + a;
}
Dual operator-(double a, const Dual& b){
    return -b + a;
}
Dual operator*(double a, const Dual& b){
    return b * a;
}
Dual operator/(double a, const Dual& b){
    if(b.re==0){
        if(a==0){
            return Dual(0,1/b.eps);
        }
        return Dual(C_INF, C_INF);
    }
    return Dual(a / b.re, -a*b.eps / (b.re * b.re));
}
Dual log(double n, const Dual& c){
    return std::log(n) / ln(c);
}
std::ostream& operator<<(std::ostream& os, const Dual& d){
    os << d.re;
    if(d.eps>=0){
        os<<"+";
    }
    os<<d.eps;
    os<<"ε";
    return os;
}
}