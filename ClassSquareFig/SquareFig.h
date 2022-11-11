// @author: Natalya Arsentyeva
#pragma once
#include <string>
#include <stdexcept>
#include <vector>
#include <ctime>
#include <Windows.h>
#include <iostream>
#include "math.h"
#include <fstream>
#include <sstream>
#define _USE_MATH_DEFINES // ���. ���. ���������

using namespace std;


/// ������ �������
class SquareFig
{
private:
	// ���������� ����� A(ax,ay), ���������� B, C, D
	float ax, ay, bx, by, cx, cy, dx, dy;

public:
	// ����������� (�������������� ����)
	SquareFig();
	SquareFig(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	///������� ����������
	void get_coordinates() const;
	std::string to_string_coord() const;

	/// ������ ����������
	void set_coordinates(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	/// ���������� ����� �������
	float side_lengths() const;

	/// ���������� ���������
	float perimeter() const;

	/// ���������� �������
	float area() const;

	/// ������� �������� � ������
	std::string to_string() const;
};


/// ������������ �������� �������
void create_object();

/// ����� �� ����������� ��������
void objects_array(const unsigned n, SquareFig* Squares);

/// ������ ���������� ������� � �������� ������ �� ������� � ��������� ���������� � ����� �������
void input_object(const unsigned n, SquareFig* Squares, unsigned j);

/// ����� ������ ��������
void input_lengts(const unsigned n, SquareFig* Squares);

/// ������������ ������ �� ���������� �� Class
void vec_objects(const unsigned n, vector<SquareFig*>& v);

/// ����� ������ ��������
void input_result_objects(const unsigned n, vector<SquareFig*>& v);


/// ������������ ������, ���������� ���������
void delete_vec(vector<SquareFig*>& v);

/// �������� �� ������������� �����
void check_file(const string filename);

/// ���������� ����� �������,  filename - ��� �����
void write_file(const string& filename, vector<SquareFig*>& v);

/// ������� ����� �����
int file_lines_count(const string& filename);

/// ���������� ������� ������� �� �����
void read_file(const string& filename, vector<SquareFig*>& v, unsigned n2);