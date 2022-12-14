/// @author Арсентьева Н. В.
/// Вычисление параметров тела
#include <cmath>

/// вычисление второго катета прямоугольного треугольника a - первый катет, с гипотенуза
float calc_katet(float a,float c){
    return sqrt(c*c-a*a);
}


/// вычисление вписанной окружности в прямоугольный треугольник, a - катет, b - катет, c - гипотенуза
float calc_r(float a, float b, float c) {
    return (a+b-c)/2;
}
