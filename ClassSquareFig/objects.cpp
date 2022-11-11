// @author: Natalya Arsentyeva
#include "SquareFig.h"


/// ������������ �������� �������
void create_object() {
	SquareFig* Square1 = new SquareFig(); // Square1 - ��������� �� ������

	// ��������� � �����
	Square1->set_coordinates(2, 2, 2, 6, -2, 6, -2, 2);
	float S = Square1->area();
	cout << Square1->to_string() << endl;

	// ����� ������������� �������� �������� �����
	// ���������� ���������� ��� ������
	delete Square1;
}


/// ����� �� ����������� ��������
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
		Squares[i].set_coordinates(ax, ay, bx, by, cx, cy, dx, dy); // �������� �������
		cout << Squares[i].to_string_coord() << endl; //�����
	}
}


/// ������ ���������� ������� � �������� ������ �� ������� � ��������� ���������� � ����� �������
void input_object(const unsigned n, SquareFig* Squares, unsigned j) {
	SquareFig mc = Squares[j];
	mc.set_coordinates(0, 3, 3, 0, 0, -3, -3, 0);
	cout << mc.to_string() << endl;  //�����
	//????
}


/// ����� ������ ��������
void input_lengts(const unsigned n, SquareFig* Squares) {
	for (unsigned i = 0; i < n; i++) {
		cout << Squares[i].side_lengths() << endl;
	}
}


/// ������������ ������ �� ���������� �� Class
void vec_objects(const unsigned n, vector<SquareFig*>& v) {
	// ���������� �������� � ������������ ������
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
		//Squares[i].get_coordinates(); //�����
		v.push_back(mc);
	}
}


/// ����� ������ ��������
void input_result_objects(const unsigned n, vector<SquareFig*>& v) {
	for (unsigned i = 0; i < v.size(); i++) {
		cout << v[i]->to_string() << endl;
	}
}


/// ������������ ������, ���������� ���������
void delete_vec(vector<SquareFig*>& v) {
	for (unsigned i = 0; i < v.size(); i++) {
		delete v[i];
	}
}

