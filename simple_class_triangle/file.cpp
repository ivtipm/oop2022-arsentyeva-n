// @author: Natalya Arsentyeva
#include "file.h"


/// заполнение файла данными,  filename - имя файла
void write_file(const string& filename, SquareFig& t) {
    ofstream f(filename);
    f << t.to_string_coord();
    f << endl; 											// записать символ перехода на новую строку
    f.close();
}


/// Подсчёт строк файла
int file_lines_count(const string& filename) {
	ifstream f_read(filename);
    if (!f_read) throw invalid_argument("file don't exists"); // Проверка на существование файла
	string buf;
	int n = 0;
	while (getline(f_read, buf)) {
		n++;
	}
	f_read.close();
	return n;
}


/// заполнение массива числами из файла
void read_file(const string& filename, unsigned &n2, SquareFig &t) {
	ifstream f_read(filename);
    if (!f_read) throw invalid_argument("file don't exists"); // Проверка на существование файла
	string buf;
	float ax, ay, bx, by, cx, cy, dx, dy;
	// добавление объектов в динамический массив
	for (unsigned i = 0; i < n2; i++) {
		getline(f_read, buf);
		//Разделение строки на числа
		istringstream ss(buf);
        float mas[100];
		unsigned n = 0;
		while (ss >> mas[n++]);
		n--;
		//Запись чисел в объекты
		ax = mas[0];
		ay = mas[1];
		bx = mas[2];
		by = mas[3];
		cx = mas[4];
		cy = mas[5];
		dx = mas[6];
		dy = mas[7];
        t.set_coordinates(ax, ay, bx, by, cx, cy, dx, dy);
	}
	f_read.close();
}
