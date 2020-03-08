#include "DateHeader.h"
using namespace std;



//реализация перегрузки присваивания
Date& Date::operator=(const Date& c) {
	(*this).d = c.d;
	m = c.m;
	y = c.y;
	return *this;
}
Date Date::operator+(int k) {
	Date res;
	res.d = this->d;
	res.m = this->m;
	res.y = this->y;
	res.d = res.d + k;
	while (res.d > 30) {
		if (res.d > 30) {
			res.d = res.d - 30;
			res.m++;
			if (res.m > 12) {
				res.m = res.m - 12;
				res.y++;
			}

		}
	}
	return res;
}

Date Date::operator-(int k) {
	Date res;
	res.d = this->d;
	res.m = this->m;
	res.y = this->y;
	res.d = res.d - k;
	while (res.d <= 0) {
		if (res.d <= 0) {
			res.d = 30 + res.d;
			res.m--;
			if (res.m <= 0) {
				res.m = 12 - res.m;
				res.y--;
			}
		}
	}
	return res;
}

Date::Date(const char str[]) {
	char c = '1';
	char strT[5];
	int j = 0;
	int i = 0;
	for (; c != '\0';) {
		int p = 0;
		while (str[i] != '.' && str[i] != ':' && c != '\0') {
			c = str[i];
			strT[p] = c;
			p++;
			i++;
		}
		i++;
		if (j == 0) {
			char strD[2];
			strD[0] = strT[0];
			strD[1] = strT[1];
			d = atoi(strD);
		}

		if (j == 1) {
			char strM[2];
			strM[0] = strT[0];
			strM[1] = strT[1];
			m = atoi(strM);
		}

		if (j == 2) {
			char strY[4];
			strY[0] = strT[0];
			strY[1] = strT[1];
			strY[2] = strT[2];
			strY[3] = strT[3];
			y = atoi(strY);
		}
		j++;

	}
};
string Date::stringdatemethod(const Date& c) {
	string str;
	str = to_string(c.d) + "." + to_string(c.m) + ':' + to_string(c.y);
	return str;
}

// перегрузка оператора вывода
ostream& operator<<(ostream& stream, const Date& c) {
	stream << c.d << "." << c.m << ":" << c.y << endl;
	return stream;
}
// перегрузка оператора ввода
istream& operator>>(istream& stream, Date& c) {
	stream >> c.d >> c.m >> c.y;
	return stream;
}
bool Date::operator>(const Date& c) {
	bool res = 0;
	if ((y > c.y) || ((y = c.y) || (m > c.m)) || ((y = c.y) || (m = c.m) || (d > c.d))) {
		res = 1;
	}
	return res;
}
bool Date::operator<(const Date& c) {
	bool res = 0;
	if ((y < c.y) || ((y = c.y) || (m < c.m)) || ((y = c.y) || (m = c.m) || (d < c.d))) {
		res = 1;
	}
	return res;
}
Date::Date(int _d, int _m, int _y) : d(_d), m(_m), y(_y) { }

Date::Date() {
	this->d = 0;
	this->m = 0;
	this->y = 0;
}
Date::~Date() {
	d = 0;
	m = 0;
	y = 0;
}
bool Date::operator==(const Date& c) {
	bool res = 0;
	if ((y == c.y) && (m == c.m) && (d == c.d)) {
		res = 1;
	}
	return res;
}
int Date::getDay() {
	Date res;
	res.d = this->d;
	return res.d;
}
int Date::getMonth() {
	Date res;
	res.m = this->m;
	return res.m;

}
int Date::getYear() {
	Date res;
	res.y = this->y;
	return res.y;
}