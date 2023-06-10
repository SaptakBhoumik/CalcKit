# Documentation for ``<CalcKit/limit.hpp>``

- ```cpp
  namespace CalcKit
  ```
  -   ```cpp
      template<typename T>
      std::function<long double(long double)> toRealfun(T func)
      ```
      Converts any function ``func`` of type   ``std::function<T1(T2)>``
      to a function of type ``std::function<long double(long double)>``. where T1 and T2 are any type that can be converted to long double
  
  - ```cpp
    long double LeftLimit(std::function<long double(long double)> func,               long double x,long double step=1e-6);
    ```
      Returns the left hand limit of the function ``func`` at ``x``. The value ``step`` is the amount of step it should take in the left hand side of the number line. In short it returns the value of ``func(x-step)``
  
  - ```cpp
    long double RightLimit(std::function<long double(long double)> func,               long double x,long double step=1e-6);
    ```
    Returns the right hand limit of the function ``func`` at ``x``. The value ``step`` is the amount of step it should take in the right hand side of the number line. In short it returns the value of ``func(x+step)``
  
  - ```cpp
    long double Limit(std::function<long double(long double)> func,long double x,long double eps=1e-6);
    ```
    Returns the limit of the function ``func`` at ``x``. The value ``eps`` maximum diffrence in Left hand limit and Right hand limit allowed(This is necessary because a computer cant do floating point operation without errors). If the diffrence is greater than ``eps`` then it throws an exception of type ``std::runtime_error``
  
  >Note: It is recomended to not modify the default value for any of the function