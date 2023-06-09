#ifndef __CALCKIT__C_BIND__struct Dual__HPP__
#define __CALCKIT__C_BIND__struct Dual__HPP__
struct Dual{
    double re=0;
    double eps=0;
};
struct Dual add(struct Dual a,struct Dual b);//a+b
struct Dual sub(struct Dual a,struct Dual b);//a-b
struct Dual mul(struct Dual a,struct Dual b);//a*b
struct Dual div(struct Dual a,struct Dual b);//a/b
struct Dual neg(struct Dual a);//-a
bool eq(struct Dual a,struct Dual b);//a==b
bool neq(struct Dual other);//a!=b
struct Dual conjugate(struct Dual a);
struct Dual reciprocal(struct Dual a);//1/a
struct Dual abs(struct Dual a);
struct Dual ln(struct Dual a);
struct Dual logDouble(struct Dual a,double base);//Log with double base
struct Dual logDual(struct Dual a,struct Dual c);//Log with duel base
struct Dual exp(struct Dual a);
struct Dual sqrt(struct Dual a);
struct Dual powDouble(struct Dual a,double exponent);//pow with double exponent
struct Dual powDuel(struct Dual a,struct Dual exponent);//pow with duel exponent
struct Dual sin(struct Dual a);
struct Dual cos(struct Dual a);
struct Dual tan(struct Dual a);
struct Dual cosec(struct Dual a);
struct Dual sec(struct Dual a);
struct Dual cot(struct Dual a);
struct Dual asin(struct Dual a);
struct Dual acos(struct Dual a);
struct Dual atan(struct Dual a);
struct Dual acosec(struct Dual a);
struct Dual asec(struct Dual a);
struct Dual acot(struct Dual a);
struct Dual sinh(struct Dual a);
struct Dual cosh(struct Dual a);
struct Dual tanh(struct Dual a);
struct Dual cosech(struct Dual a);
struct Dual sech(struct Dual a);
struct Dual coth(struct Dual a);
struct Dual asinh(struct Dual a);
struct Dual acosh(struct Dual a);
struct Dual atanh(struct Dual a);
struct Dual acosech(struct Dual a);
struct Dual asech(struct Dual a);
struct Dual acoth(struct Dual a);
void print(struct Dual d);
#endif
