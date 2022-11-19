// @author: Natalya Arsentyeva
#include <iostream>
#include <Windows.h>
#include "triangle.h"
#include "circle.h"
#include "figures.h"


using namespace std;		

			
int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));
	// protected code
	try{       
		Triangle* triangle1 = new Triangle(); // triangle1 - указатель на объект

	// обращение к полям
		triangle1->set_ABC(2, 3, 4);
		cout << triangle1->to_string() << endl;
		delete triangle1;
	}
    catch (invalid_argument e){  						
       cout << e.what();
    }
}

