#include "pch.h"
#include "degree_measure.h"
#include "foo.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

degree_measure::degree_measure()
{
	degrees = 0;
	minutes = 0;
	seconds = 0;
}

void degree_measure::add_angle()
{
	string str;
	while (true) {
		cout << "Введите градусы: ";
		cin.unsetf(ios::skipws);
		cin >> str;
		if (is_angle(str)) {
			cin.ignore(10, '\n');
			degrees = atoi(str.c_str());
			break;
		}
		cin.ignore(10, '\n');
		cout << "Ошибка ввода!\n";
	}
	cin.clear();
	while (true) {
		cout << "Введите секунды: ";
		cin.unsetf(ios::skipws);
		cin >> str;
		if (is_angle(str)) {
			cin.ignore(10, '\n');
			minutes = atoi(str.c_str());
			break;
		}
		cin.ignore(10, '\n');
		cout << "Ошибка ввода!\n";
	}
	cin.clear();
	while (true) {
		cout << "Введите минуты: ";
		cin.unsetf(ios::skipws);
		cin >> str;
		if (is_angle(str)) {
			cin.ignore(10, '\n');
			seconds = atoi(str.c_str());
			break;
		}
		cin.ignore(10, '\n');
		cout << "Ошибка ввода!\n";
	}
}

void degree_measure::show_angle()
{
	char ch = 176, ch2 = 177;
	cout << degrees << ch << " " << minutes << "' " << setprecision(3) << seconds << "\" " << "+- 1'";
}

degree_measure degree_measure::operator+(degree_measure angle2)
{
	degree_measure angle;
	double sec1, sec2;
	sec1 = degrees * 60 * 60 + minutes * 60 + seconds;
	sec2 = angle2.degrees * 60 * 60 + angle2.minutes * 60 + angle2.seconds;
	angle.seconds = sec1 + sec2;
	while (angle.seconds >= 60) {
		angle.minutes++;
		angle.seconds -= 60;
	}
	while (angle.minutes >= 60) {
		angle.degrees++;
		angle.minutes -= 60;
	}
	return angle;
}

degree_measure degree_measure::operator-(degree_measure angle2)
{
	degree_measure angle;
	double sec1, sec2;
	sec1 = degrees * 60 * 60 + minutes * 60 + seconds;
	sec2 = angle2.degrees * 60 * 60 + angle2.minutes * 60 + angle2.seconds;
	angle.seconds = sec1 - sec2;
	while (angle.seconds >= 60) {
		angle.minutes++;
		angle.seconds -= 60;
	}
	while (angle.minutes >= 60) {
		angle.degrees++;
		angle.minutes -= 60;
	}
	return angle;
}

degree_measure& degree_measure::operator=(double angle2)
{
	degree_measure angle;
	long double cel = 0, drob = 0;
	drob = modf(angle2, &cel);
	degrees = cel;
	seconds = drob * 60 * 60;
	while (seconds >= 60) {
		minutes++;
		seconds -= 60;
	}
	while (minutes >= 60) {
		degrees++;
		minutes -= 60;
	}
	return *this;
}

degree_measure::operator double()
{
	long double angle_ = 0;
	angle_ = degrees;
	angle_ += (minutes * 60 + seconds) / (60*60);
	return angle_;
}

