// @author: Natalya Arsentyeva
#include <iostream>
#include <Windows.h>
#include "triangle.h"
#include "circle.h"
#include "figures.h"
#include <vector>


using namespace std;		

			
int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));
	/// protected code
	try{       
		// Создание динамического объекта
		Triangle* triangle1 = new Triangle(); // triangle1 - указатель на объект
		// обращение к полям
		triangle1->set_ABC(2, 3, 4);
		cout << triangle1->to_string() << endl;
		delete triangle1;
		cout << endl;

		unsigned n = 5;
		vector<Figures*> fig(n); // Вектор из объектов Figures
		// Добавление объектов Triangle в вектор
		for (unsigned i = 0; i < n; i++) {
			float a, b, c;
			a = rand() % (10 - 5 + 1) + 5;
			b = rand() % (10 - 5 + 1) + 5;
			c = rand() % (10 - 5 + 1) + 5;
			Triangle* s = new Triangle(a,b,c);
			fig[i] = s;
		}
		// Добавление объектов Circle
		for (unsigned i = 0; i < n; i++) {
			fig.push_back(new Circle(rand() % 50 + 1));
		}
		// Вывод объектов
		for (unsigned i = 0; i < fig.size(); i++) {
			cout << fig[i]->to_string() << endl;
		}
	    // Сумма периметров
		float P = 0;
		// Какой из методов вызывать (для какого класса)
		// будет определено на этапе выполнения
		for (Figures* s : fig) {
			P += s->perimeter();
		}

		// Освобождение памяти, занимаемой объектами
		for (unsigned i = 0; i < fig.size(); i++) {
			delete fig[i];
		}		

		cout << "\nP = " << P;
	}
    catch (invalid_argument e){  						
       cout << e.what();
    }
}

