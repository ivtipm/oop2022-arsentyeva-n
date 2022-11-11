// @author: Natalya Arsentyeva
#include "SquareFig.h"


int main(int argc, char const* argv[])
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));
	//protected code
	try {
		const string filename = "data";
		cout << "Создание одного объекта: " << endl;
		create_object();

		cout << "\nСоздание статического массива из объектов: " << endl;
		const unsigned n = 5;
		unsigned n2;
		SquareFig Squares[n]; // статически созданный массив из объектов
		objects_array(n,Squares);
		
		cout << "\nДобавление объекта в определенную ячейку массива " << endl;
		unsigned j = 2;
		input_object(n, Squares,j);

		cout << "\nВывод сторон массива объектов " << endl;
		input_lengts(n, Squares);

		cout << "\nСоздание динамического массива объектов: " << endl;
		vector<SquareFig*> v; // вектор
		vec_objects(n, v);
		input_result_objects(n, v);
		
		cout << "\nЗапись в файл " << endl;
		write_file(filename, v);
		delete_vec(v);

		vector<SquareFig*> v2; // вектор
		cout << "\nЗапись из файлa " << endl;
		n2 = file_lines_count(filename);
		read_file(filename,v2,n2);
		for (unsigned i = 0; i < v2.size(); i++) {
			cout << v2[i]->to_string_coord() << endl;
		}
		delete_vec(v2);
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