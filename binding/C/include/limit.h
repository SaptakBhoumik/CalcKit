#ifndef __CALCKIT__C_BIND__LIMIT__HPP__
#define __CALCKIT__C_BIND__LIMIT__HPP__
long double LeftLimit(long double (*func)(long double),
                      long double x,long double step
                      );//Calculate the left limit of a function at x
long double RightLimit(long double (*func)(long double),
                       long double x,long double step
                       );//Calculate the right limit of a function at x
long double Limit(long double (*func)(long double),
                    long double x,long double eps
                    );//Calculate the limit of a function at x
#endif