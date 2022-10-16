#include <iostream>
#include "SquareFig.h"

using namespace std;

int main(int argc, char const* argv[])
{
	SquareFig l1;
	//protected code
	try {
		//l1.set_coordinates(2,2,2,6,-2,6,-2,2);
		l1.set_coordinates(0, 3, 3, 0, 0, -3, -3, 0);
		l1.side_lengths();
		l1.perimeter();
		l1.area();
		cout << l1.to_string();
	}
	// Вывод ошибки для пользователя
	catch (invalid_argument e) {  						
		cout << e.what();
	}

	return 0;
}
