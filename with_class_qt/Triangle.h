/// @author Арсентьева Н. В.
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <stdexcept>


/// Прямоугольный треугольник
class Triangle{
    float a;        /// Катет
    float c;        /// Гипотенуза

public:

    Triangle();
    Triangle(float a1, float c1);

    float getA() const;
    void setA(float newA);
    float getC() const;
    void setC(float newC);

    float calc_b(); /// Катет
    float calc_r(); /// Радиус вписанной окружности
};


#endif // TRIANGLE_H
