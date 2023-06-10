# Documentation for ``<CalcKit/derivative.hpp>``

- ```cpp
  namespace CalcKit
  ```
  - ```cpp
    long double Derivative(std::function<long double(long double)> func,long double x,long double eps=1e-6);
    ```
    Calculates 1st order derivative of the function ``func`` at ``x``. The value ``eps`` is the maximum diffrence allowed between left hand derivative and right hand derivative.If diffrence is more than eps then throw an exception of type ``std::runtime_error``. This function uses the central difference method to calculate the derivative.

  - ```cpp
    long double* Derivative(long double* y,long double* x,size_t n);
    ```
    Calculates 1st order derivative of the function represented by the points ``x`` and ``y``. The value ``n`` is the number of points in the array ``x`` and ``y``. Returns an array or size ``n-1``

  - ```cpp
    long double* Diff(long double* x,size_t n);
    ```
    Returns an array of size ``n-1`` containing the diffrence between consecutive elements of the array ``x``

  - ```cpp
    double Derivative(std::function<Dual(Dual)> func,double x);
    ```
    Calculates 1st order derivative of the function ``func`` at ``x`` using Duel number.