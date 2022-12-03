/// @author Арсентьева Н. В.
/// Вычисление параметров тела
#include <cmath>

/// вычисление второго катета прямоугольного треугольника
float calc_katet(float a,float c){
    return sqrt(c*c-a*a);
}


/// вычисление вписанной окружности в прямоугольный треугольник
float calc_r(float a, float b, float c) {
    return (a+b-c)/2;
}
