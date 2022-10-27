#include <iostream>
#include "SquareFig.h"

using namespace std;

int main(int argc, char const* argv[])
{
	SquareFig l1,l2,l3;
	//protected code
	try {
		l1.set_coordinates(2, 2, 2, 6, -2, 6, -2, 2);
		l2.set_coordinates(0, 3, 3, 0, 0, -3, -3, 0);  // P = 16.97, S = 18, len = 4.24
		l3.set_coordinates(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5); // P = 10, S = 6.25, len = 2.5
		cout << l1.to_string() << endl;
		cout << l2.to_string() << endl;
		cout << l3.to_string() << endl;
	}
	// Вывод ошибки для пользователя
	catch (invalid_argument e) {  						
		cout << e.what();
	}

	return 0;
}
