// @author: Natalya Arsentyeva
#include "SquareFig.h"

/// �������� �� ������������� �����
void check_file(const string filename) {
	ifstream f(filename);
	if (!f) throw invalid_argument("file don't exists");
}

/// ���������� ����� �������,  filename - ��� �����
void write_file(const string& filename, vector<SquareFig*>& v) {
	ofstream f(filename);
	SquareFig x;
	for (int i = 0; i < v.size(); i++) {
		f << v[i]->to_string_coord();
		f << endl; 											// �������� ������ �������� �� ����� ������
	}
	f.close();
}


/// ������� ����� �����
int file_lines_count(const string& filename) {
	check_file(filename);
	ifstream f_read(filename);
	string buf;
	int n = 0;
	while (getline(f_read, buf)) {
		n++;
	}
	f_read.close();
	return n;
}


/// ���������� ������� ������� �� �����
void read_file(const string& filename, vector<SquareFig*>& v,unsigned n2) {
	check_file(filename);
	ifstream f_read(filename);
	string buf;
	float ax, ay, bx, by, cx, cy, dx, dy;
	// ���������� �������� � ������������ ������
	for (unsigned i = 0; i < n2; i++) {
		SquareFig* mc = new SquareFig();
		getline(f_read, buf);
		istringstream ss(buf);
		float mas[100];
		unsigned n = 0;
		while (ss >> mas[n++])
			;
		n--;
		//ax = stoi(buf); // ������ -> �����
		ax = mas[0];
		ay = mas[1];
		bx = mas[2];
		by = mas[3];
		cx = mas[4];
		cy = mas[5];
		dx = mas[6];
		dy = mas[7];
		mc->set_coordinates(ax, ay, bx, by, cx, cy, dx, dy);
		v.push_back(mc);
	}
	f_read.close();
}