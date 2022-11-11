// @author: Natalya Arsentyeva
#include <iostream>
#include "SquareFig.h"
#include <vector>
#include <ctime>
#include <Windows.h>


/// Динамическое создание объекта
void create_object() {
	SquareFig* Square1 = new SquareFig(); // Square1 - указатель на объект

	// обращение к полям
	Square1->set_coordinates(2, 2, 2, 6, -2, 6, -2, 2);
	float S = Square1->area();
	cout << Square1->to_string() << endl;

	// после динамического создания объектов нужно
	// освободить занимаемую ими память
	delete Square1;
}


/// Набор из статических объектов
void objects_array(const unsigned n, SquareFig *Squares) {
	for (unsigned i = 0; i < n; i++) {
		float ax, ay, bx, by, cx, cy, dx, dy;
		//x = (float)rand() / (float)RAND_MAX * nmax;
		ax = rand() % (30 - 5 + 1) + 5;
		ay = rand() % (30 - 5 + 1) + 5;
		bx = ax;
		by = rand() % (30 - 5 + 1) + 5;
		cx = ax + sqrt(pow((bx - ax), 2) + pow((by - ay), 2));
		cy = by;
		dx = cx;
		dy = ay;
		Squares[i].set_coordinates(ax, ay, bx, by, cx, cy, dx, dy); // Создание объекта
		Squares[i].get_coordinates(); //Вывод
		cout << endl;
	}
}
 

/// Запись отдельного объекта в заданную ячейку из массива в отдельную переменную и вывод площади
void input_object(const unsigned n, SquareFig* Squares, unsigned j) {
	SquareFig mc = Squares[j];
	mc.set_coordinates(0, 3, 3, 0, 0, -3, -3, 0);
	cout << mc.to_string() << endl;  //Вывод
	//????
}


/// Вывод сторон объектов
void input_lengts(const unsigned n, SquareFig* Squares) {
	for (unsigned i = 0; i < n; i++) {
		cout << Squares[i].side_lengths() << endl;
	}
}


/// Динамический массив из указателей на Class
void vec_objects(const unsigned n, vector<SquareFig*>& v) {
	// добавление объектов в динамический массив
	for (unsigned i = 0; i < n; i++) {
		SquareFig* mc = new SquareFig();
		float ax, ay, bx, by, cx, cy, dx, dy;
		//x = (float)rand() / (float)RAND_MAX * nmax;
		ax = rand() % (30 - 5 + 1) + 5;
		ay = rand() % (30 - 5 + 1) + 5;
		bx = ax;
		by = rand() % (30 - 5 + 1) + 5;
		cx = ax + sqrt(pow((bx - ax), 2) + pow((by - ay), 2));
		cy = by;
		dx = cx;
		dy = ay;
		mc->set_coordinates(ax, ay, bx, by, cx, cy, dx, dy);
		//Squares[i].get_coordinates(); //Вывод
		v.push_back(mc);
	}
}


/// Вывод сторон объектов
void input_result_objects(const unsigned n, vector<SquareFig*>& v) {
	for (unsigned i = 0; i < v.size(); i++) {
		cout << v[i]->to_string() << endl;
	}
}


/// Освобождение памяти, занимаемой объектами
void delete_vec(const unsigned n, vector<SquareFig*>& v) {
	for (unsigned i = 0; i < v.size(); i++) {
		delete v[i];
	}
}


int main(int argc, char const* argv[])
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));
	//protected code
	try {
		cout << "Создание одного объекта: " << endl;
		create_object();

		cout << "\nСоздание статического массива из объектов: " << endl;
		const unsigned n = 5;
		SquareFig Squares[n]; // статически созданный массив из объектов
		objects_array(n,Squares);
		
		cout << "\nДобавление объекта в определенную ячейку массива " << endl;
		unsigned j = 2;
		input_object(n, Squares,j);
		input_lengts(n, Squares);

		cout << "\nСоздание динамического массива объектов: " << endl;
		vector<SquareFig*> v; // вектор
		vec_objects(n, v);
		input_result_objects(n, v);
		delete_vec(n,v);
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