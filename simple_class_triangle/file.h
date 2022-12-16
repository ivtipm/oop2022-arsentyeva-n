/// @author: Natalya Arsentyeva
#pragma once
#include "SquareFig.h"
//#include <QString>

/// заполнение файла данными,  filename - имя файла
void write_file(const  string& filename, SquareFig &t);

/// Подсчёт строк файла
int file_lines_count(const string& filename);

/// заполнение массива числами из файла
SquareFig read_file(const  string& filename, unsigned n2, SquareFig& t);
