#ifndef INCLUDE_DateHeader_H_
#define INCLUDE_DateHeader_H_
#endif
#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Date {
private:
	int y = 0, m = 0, d = 0;

public:
	Date();
	Date(int _d, int _m, int _y);
	Date(const char str[]);
	friend ostream& operator<<(ostream& stream, const Date& c); //перегрузка вывода
	friend istream& operator>>(istream& stream, Date& c); //перегрузка ввода
	Date operator+(int d);
	Date operator-(int d);
	bool operator==(const Date& c);

	friend bool operator==(const Date& left, const Date& right) {
		if (left.d == right.d && left.m == right.m && left.y == right.y) {
			return 1; 
		}
		else
			return 0;
	}

	Date& operator=(const Date& c);
	bool operator>(const Date& c);
	bool operator<(const Date& c);
	string stringdatemethod(const Date& c);
	int getDay();
	int getMonth();
	int getYear();
	~Date();
};
