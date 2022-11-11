// @author: Natalya Arsentyeva
#include "SquareFig.h"


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
void objects_array(const unsigned n, SquareFig* Squares) {
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
		cout << Squares[i].to_string_coord() << endl; //Вывод
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
void delete_vec(vector<SquareFig*>& v) {
	for (unsigned i = 0; i < v.size(); i++) {
		delete v[i];
	}
}

