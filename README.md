# CalcKit - Easy-to-Use C++ Library for Calculus

CalcKit is a lightweight and user-friendly C++ library designed to simplify calculus calculations. Whether you're a student learning calculus or a seasoned mathematician, CalcKit provides a comprehensive set of tools and functions to make your calculus operations easier and more efficient.

## Features

- **Differentiation**: Calculate derivatives of any kind of differentiatable function

- **Dual Numbers**: Perform automatic differentiation using dual numbers 

- **Integration**: Perform definite integrals of various functions using adaptive Simpson's rule

- **Limits**: Compute the limit of a function as it approaches a specific value or infinity.

Documentation can be found [here](https://saptakbhoumik.github.io/CalcKit/docs)

## Example Code

```cpp
#include <CalcKit/integral.hpp>
#include <CalcKit/limit.hpp>
#include <CalcKit/derivative.hpp>
#include <CalcKit/constant.hpp>
#include <iostream>
using namespace CalcKit;
long double f(long double x) {
    return x-std::sin(x);
}

long double g(long double x){
    return std::sin(5*x)/x;
}

long double h(long double x){
    return std::pow(x,x);
}

int main(){
    std::cout<<"f(x)=x-Sin(x)"<<std::endl;
    std::cout<<"Integration of f(x) from 0 to 10: "<<Integrate(f,0,10)<<std::endl;
    std::cout<<"g(x)=Sin(5x)/x"<<std::endl;
    std::cout<<"Limit of g(x) at 0: "<<Limit(g,0)<<std::endl;
    std::cout<<"h(x)=x^x"<<std::endl;
    std::cout<<"Derivative of h(x) at 2: "<<Derivative(h,2)<<std::endl;
}
```
More examples can be found [here](https://saptakbhoumik.github.io/CalcKit/example)

## Contributing
Contributions to CalcKit are welcome! If you encounter any bugs, have feature requests, or want to contribute improvements, please submit an issue or a pull request to the CalcKit GitHub repository.

## License
This project is licensed under the MIT License. Feel free to use, modify, and distribute CalcKit according to the terms of this license.Just give credit to the original author in your project.


If you have any questions or need further assistance, please don't hesitate to contact me at saptakbhoumik@gmail.com.