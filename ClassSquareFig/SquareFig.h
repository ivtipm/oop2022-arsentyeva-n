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
#define _USE_MATH_DEFINES // Вкл. мат. константы

using namespace std;


/// Фигура квадрат
class SquareFig
{
private:
	// Координаты точки A(ax,ay), аналогично B, C, D
	float ax, ay, bx, by, cx, cy, dx, dy;

public:
	// Конструктор (инициализирует поля)
	SquareFig();
	SquareFig(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	///Вывести координаты
	void get_coordinates() const;
	std::string to_string_coord() const;

	/// Задать координаты
	void set_coordinates(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

	/// Нахождение длины стороны
	float side_lengths() const;

	/// Нахождение периметра
	float perimeter() const;

	/// Нахождение площади
	float area() const;

	/// Перевод значений в строку
	std::string to_string() const;
};


/// Динамическое создание объекта
void create_object();

/// Набор из статических объектов
void objects_array(const unsigned n, SquareFig* Squares);

/// Запись отдельного объекта в заданную ячейку из массива в отдельную переменную и вывод площади
void input_object(const unsigned n, SquareFig* Squares, unsigned j);

/// Вывод сторон объектов
void input_lengts(const unsigned n, SquareFig* Squares);

/// Динамический массив из указателей на Class
void vec_objects(const unsigned n, vector<SquareFig*>& v);

/// Вывод сторон объектов
void input_result_objects(const unsigned n, vector<SquareFig*>& v);


/// Освобождение памяти, занимаемой объектами
void delete_vec(vector<SquareFig*>& v);

/// Проверка на существование файла
void check_file(const string filename);

/// заполнение файла данными,  filename - имя файла
void write_file(const string& filename, vector<SquareFig*>& v);

/// Подсчёт строк файла
int file_lines_count(const string& filename);

/// заполнение массива числами из файла
void read_file(const string& filename, vector<SquareFig*>& v, unsigned n2);