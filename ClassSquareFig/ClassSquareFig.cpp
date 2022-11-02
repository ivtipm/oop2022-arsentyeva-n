// @author: Natalya Arsentyeva
#include <iostream>
#include "SquareFig.h"
#include <vector>


int main(int argc, char const* argv[])
{
	//protected code
	try {
		// Динамическое создание объекта
		SquareFig* Square1 = new SquareFig(); // Square1 - указатель на объект

		// обращение к полям
		Square1->set_coordinates(2, 2, 2, 6, -2, 6, -2, 2);
		float S = Square1->area();
		cout << Square1->to_string() << endl;

		// после динамического создания объектов нужно
		// освободить занимаемую ими память
		delete Square1;


		// Набор из динамических объектов
		const unsigned n = 5;
		SquareFig Squares[n]; // статически созданный массив из объектов
		for (unsigned i = 0; i < n; i++) {
			Squares[i].ax = rand() % 10;
			Squares[i].ay = rand() % 10;
			Squares[i].bx = rand() % 10;
			Squares[i].by = rand() % 10;
			cout << Squares[i].ax << " ";
			cout << Squares[i].ay << " ";
			cout << Squares[i].bx << " ";
			cout << Squares[i].by << " ";
			cout << endl;
		}
		// Запись отдельного объекта из массива в отдельную переменную
		SquareFig mc = Squares[2];
		cout << mc.area() << endl;

		for (unsigned i = 0; i < n; i++) {
			cout <<  Squares[i].area() << endl;
		}

		//// динамический массив из объектов c заранее заданным количеством n
		//vector<SquareFig> v(n);
		//for (unsigned i = 0; i < v.size(); i++) {
		//	v[i].ax = rand();
		//}
	}
	// Вывод ошибки для пользователя
	catch (invalid_argument e) {
		cout << e.what();
	}

	return 0;
}

//SquareFig l1, l2;
//SquareFig l3(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5); // P = 10, S = 6.25, len = 2.5
//l1.set_coordinates(2, 2, 2, 6, -2, 6, -2, 2); // lengths side = 4.000000 cm; P = 16.000000 cm; S = 16.000000 cm2
//l2.set_coordinates(0, 3, 3, 0, 0, -3, -3, 0);  // P = 16.97, S = 18, len = 4.24
//cout << l1.to_string() << endl;
//cout << l2.to_string() << endl;
//cout << l3.to_string() << endl;