# Documentation for ``<CalcKit/dual.hpp>``
- ```cpp
  namespace CalcKit
  ```
    - ```cpp
      class Duel
      ```
      The Duel number class.Public variable and methods that you can use are as follows:- 

      - ```cpp
        double re;
        double eps;
        ```
        Public variables of the class that can be accessed and modified. ``re`` is the real part and ``eps`` is the dual part

      - ```cpp
        Dual()=default;
        Dual(double re, double eps=0);
        Dual(const Dual& other);
        Dual(Dual&& other);
        ```
        Innitializers for the class.
    
       - ```cpp
         Dual& operator=(const Dual& other);
         ```
         Assignment operators for the class

       - ```cpp

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
         ```
         Various operators for the class and they have the usual meaning

       - ```cpp
         bool operator==(const Dual& other) const;
         bool operator!=(const Dual& other) const;
         ```
         Comparison operators for the class
    
      - ```cpp
        Dual conjugate() const;
        ```
        If the current dual number is a+bε, then returns a-bε i.e the conjugate of the dual number

      - ```cpp
        Dual reciprocal() const;
        ```
        If the current dual number is a+bε, then returns 1/(a+bε)

    - ```cpp 
      Dual abs(Dual a);
      ```
      Returns the absolute value of the dual number ``a``
    - ```cpp 
      Dual ln(Dual a);
      ```
      Returns the natural logarithm of the dual number ``a``
    - ```cpp 
      Dual log(Dual a,double base=10);
      ```
      Returns the logarithm of the dual number ``a`` with base ``base``
    - ```cpp 
      Dual log(Dual a,Dual c);
      ```
      Returns the logarithm of the dual number ``a`` with base ``c``
    - ```cpp
      Dual log(double n, const Dual& c);
      ```
        Returns the logarithm of the number ``n`` with base ``c``
    - ```cpp 
      Dual exp(Dual a);
      ```
      Returns the exponential of the dual number ``a``
    - ```cpp 
      Dual sqrt(Dual a);
      ```
      Returns the square root of the dual number ``a``
    - ```cpp 
      Dual pow(Dual a,double exponent);
      ```
      Returns the dual number ``a`` raised to the power ``exponent``
    - ```cpp 
      Dual pow(Dual a,const Dual& exponent);
      ```
      Returns the dual number ``a`` raised to the power ``exponent``
    - ```cpp 
      Dual sin(Dual a);
      ```
      Returns the sine of the dual number ``a``
    - ```cpp 
      Dual cos(Dual a);
      ```
        Returns the cosine of the dual number ``a``
    - ```cpp 
      Dual tan(Dual a);
      ```
        Returns the tangent of the dual number ``a``
    - ```cpp 
      Dual cosec(Dual a);
      ```
        Returns the cosecant of the dual number ``a``
    - ```cpp 
      Dual sec(Dual a);
      ```
        Returns the secant of the dual number ``a``
    - ```cpp 
      Dual cot(Dual a);
      ```
        Returns the cotangent of the dual number ``a``
    - ```cpp 
      Dual asin(Dual a);
      ```
      Returns the sin inverse of the dual number ``a``
    - ```cpp 
      Dual acos(Dual a);
      ```
        Returns the cos inverse of the dual number ``a``
    - ```cpp 
      Dual atan(Dual a);
      ```
        Returns the tan inverse of the dual number ``a``
    - ```cpp 
      Dual acosec(Dual a);
      ```
        Returns the cosec inverse of the dual number ``a``
    - ```cpp 
      Dual asec(Dual a);
      ```
        Returns the sec inverse of the dual number ``a``
    - ```cpp 
      Dual acot(Dual a);
      ```
        Returns the cot inverse of the dual number ``a``
    - ```cpp 
      Dual sinh(Dual a);
      ```
      Returns the hyperbolic sine of the dual number ``a``
    - ```cpp 
      Dual cosh(Dual a);
      ```
        Returns the hyperbolic cosine of the dual number ``a``
    - ```cpp 
      Dual tanh(Dual a);
      ```
        Returns the hyperbolic tangent of the dual number ``a``
    - ```cpp 
      Dual cosech(Dual a);
      ```
        Returns the hyperbolic cosecant of the dual number ``a``
    - ```cpp 
      Dual sech(Dual a);
      ```
        Returns the hyperbolic secant of the dual number ``a``
    - ```cpp 
      Dual coth(Dual a);
      ```
        Returns the hyperbolic cotangent of the dual number ``a``
    - ```cpp 
      Dual asinh(Dual a);
      ```
        Returns the hyperbolic sin inverse of the dual number ``a``
    - ```cpp 
      Dual acosh(Dual a);
      ```
        Returns the hyperbolic cos inverse of the dual number ``a``
    - ```cpp 
      Dual atanh(Dual a);
      ```
        Returns the hyperbolic tan inverse of the dual number ``a``
    - ```cpp 
      Dual acosech(Dual a);
      ```
        Returns the hyperbolic cosec inverse of the dual number ``a``
    - ```cpp 
      Dual asech(Dual a);
      ```
        Returns the hyperbolic sec inverse of the dual number ``a``
    - ```cpp 
      Dual acoth(Dual a);
      ```
        Returns the hyperbolic cot inverse of the dual number ``a``  
    - ```cpp
      std::ostream& operator<<(std::ostream& os, const Dual& d);
      ```
        Outputs the dual number ``d`` to the output stream ``os`` i.e prints it
    - ```cpp
      Dual operator+(double a, const Dual& b);
      Dual operator-(double a, const Dual& b);
      Dual operator*(double a, const Dual& b);
      Dual operator/(double a, const Dual& b);
      ```
      Various operators for ``Dual`` and they have the usual meaning
