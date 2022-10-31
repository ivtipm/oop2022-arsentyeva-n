// @author: Natalya Arsentyeva
#include <iostream>
#include "SquareFig.h"


int main(int argc, char const* argv[])
{
	//protected code
	try {
		SquareFig l1, l2;
		SquareFig l3(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5); // P = 10, S = 6.25, len = 2.5
		l1.set_coordinates(2, 2, 2, 6, -2, 6, -2, 2);
		l2.set_coordinates(0, 3, 3, 0, 0, -3, -3, 0);  // P = 16.97, S = 18, len = 4.24

		cout << l1.to_string() << endl;
		cout << l2.to_string() << endl;
		cout << l3.to_string() << endl;
	}
	// Вывод ошибки для пользователя
	catch (invalid_argument e) {  						
		cout << e.what();
	}


	// todo
	return 0;
}
