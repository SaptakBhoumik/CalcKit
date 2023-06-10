# Installation

## Requirements 
- Ninja
- Meson
- C++ compiler

## Building it
Run the following command.This command must be executed first and are compulsory
```bash
git clone https://github.com/SaptakBhoumik/CalcKit.git
cd CalcKit
meson buildir
cd buildir
```
## Installation
Run the following command
```bash
ninja
ninja install
```
## Devoloping the lib
Modify the dev.cpp file with the contant u want to run and run the following command to build and test it
```bash
ninja 
./dev.elf
```

 <a href="./constant.MD">Click here for the documentation of <CalcKit/constant.hpp></a>

 <a href="./derivative.MD">Click here for the documentation of <CalcKit/derivative.hpp></a>

 <a href="./integral.MD">Click here for the documentation of <CalcKit/integral.hpp></a>

 <a href="./dual.MD">Click here for the documentation of <CalcKit/dual.hpp></a>
 
 <a href="./limit.MD">Click here for the documentation of <CalcKit/limit.hpp></a>