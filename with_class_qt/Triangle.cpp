/// @author Арсентьева Н. В.
#include <cmath>
#include "Triangle.h"


/// катет
float Triangle::getA() const{
    return a;
}

void Triangle::setA(float newA){
    if (newA <= 0)
        throw std::invalid_argument("");
    a = newA;
}

/// Гипотенуза
float Triangle::getC() const{
    return c;
}


void Triangle::setC(float newC){
    if (newC <= 0 || newC <= a)
        throw std::invalid_argument("");
    c = newC;
}

/// вычисление второго катета прямоугольного треугольника a - первый катет, с гипотенуза
float Triangle::calc_b(){
    b = sqrt(c*c-a*a);
    return b;
}

/// вычисление вписанной окружности в прямоугольный треугольник, a - катет, b - вычисляемый катет, c - гипотенуза
float Triangle::calc_r() {
    return (a+b-c)/2;
}

Triangle::Triangle()
{
    a = 0;
    b = 0;
    c = 0;
}

Triangle::Triangle(float a1, float c1)
{
    setC(a1);
    setC(c1);
}
