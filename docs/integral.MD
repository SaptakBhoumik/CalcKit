# Documentation for ``<CalcKit/integral.hpp>``
- ```cpp
  namespace CalcKit
  ```
  - ```cpp
     long double Integrate(std::function<long double(long double)> func,long double a,long double b,long double eps=1e-6);
     ```
      Returns the value of the definite integral of the function ``func`` from ``a`` to ``b``. The value ``eps`` is the maximum error allowed in the result.This function uses adaptive simson 1/3 rule

  - ```cpp
    long double* Integrate(long double* y,long double* x,size_t n);
    ```
      Returns the value of the definite integral of the function represented by the points ``x`` and ``y``. The value ``n`` is the number of points in the array ``x`` and ``y``. The function uses the trapezoidal rule to calculate the integral.Returns array of size ``n``