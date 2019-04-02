#include "pch.h"
#include "triangles.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI1 = 3.14159265358979 / 180;
const double PI2 = 180 / 3.14159265358979;

triangles::triangles()
{
	a = 0; b = 0; c = 0;
}


triangles::~triangles()
{
}

int triangles::add_triangles_1()
{
	char st1, st2, ug1;
	cout << "¬ведите названи€ сторон и угла (например b c B): ";
	cin >> st1 >> st2 >> ug1;

	if (st1 == 'a' && st2 == 'b' && ug1 == 'A' || st1 == 'b' && st2 == 'a' && ug1 == 'A') {
		cout << "¬ведите сторону a: "; cin >> a;
		cout << "¬ведите сторону b: "; cin >> b;
		cout << "”гол A\n";
		A.add_angle();
		return 1;
	}
	else if (st1 == 'a' && st2 == 'b' && ug1 == 'B' || st1 == 'b' && st2 == 'a' && ug1 == 'B') {
		cout << "¬ведите сторону a: "; cin >> a;
		cout << "¬ведите сторону b: "; cin >> b;
		cout << "”гол B\n";
		B.add_angle();
		return 2;
	}
	else if (st1 == 'a' && st2 == 'c' && ug1 == 'A' || st1 == 'c' && st2 == 'a' && ug1 == 'A') {
		cout << "¬ведите сторону a: "; cin >> a;
		cout << "¬ведите сторону c: "; cin >> c;
		cout << "”гол A\n";
		A.add_angle();
		return 3;
	}
	else if (st1 == 'a' && st2 == 'c' && ug1 == 'C' || st1 == 'c' && st2 == 'a' && ug1 == 'C') {
		cout << "¬ведите сторону a: "; cin >> a;
		cout << "¬ведите сторону c: "; cin >> c;
		cout << "”гол C\n";
		C.add_angle();
		return 4;
	}
	else if (st1 == 'b' && st2 == 'c' && ug1 == 'C' || st1 == 'c' && st2 == 'b' && ug1 == 'C') {
		cout << "¬ведите сторону b: "; cin >> b;
		cout << "¬ведите сторону c: "; cin >> c;
		cout << "”гол C\n";
		C.add_angle();
		return 5;
	}
	else if (st1 == 'b' && st2 == 'c' && ug1 == 'B' || st1 == 'c' && st2 == 'b' && ug1 == 'B') {
		cout << "¬ведите сторону b: "; cin >> b;
		cout << "¬ведите сторону c: "; cin >> c;
		cout << "”гол B\n";
		B.add_angle();
		return 6;
	}
	else if (st1 == 'a' && st2 == 'b' && ug1 == 'C' || st1 == 'b' && st2 == 'a' && ug1 == 'C') {
		cout << "¬ведите сторону a: "; cin >> a;
		cout << "¬ведите сторону b: "; cin >> b;
		cout << "”гол C\n";
		C.add_angle();
		return 7;
	}
	else if (st1 == 'a' && st2 == 'c' && ug1 == 'B' || st1 == 'c' && st2 == 'a' && ug1 == 'B') {
		cout << "¬ведите сторону a: "; cin >> a;
		cout << "¬ведите сторону c: "; cin >> c;
		cout << "”гол B\n";
		B.add_angle();
		return 8;
	}
	else if (st1 == 'b' && st2 == 'c' && ug1 == 'A' || st1 == 'c' && st2 == 'b' && ug1 == 'A') {
		cout << "¬ведите сторону b: "; cin >> b;
		cout << "¬ведите сторону c: "; cin >> c;
		cout << "”гол A\n";
		A.add_angle();
		return 9;
	}
	else
		return -1;

}

int triangles::add_triangles_2()
{
	char st1, ug1, ug2;
	cout << "¬ведите названи€ стороны и углов (например a — A): ";
	cin >> st1 >> ug1 >> ug2;

	if (st1 == 'a' && ug1 == 'C' && ug2 == 'B' || st1 == 'a' && ug1 == 'B' && ug2 == 'C') {
		cout << "¬ведите сторону c: "; cin >> c;
		cout << "”гол B\n";
		B.add_angle();
		cout << "”гол C\n";
		C.add_angle();
		return 10;
	}
	else if (st1 == 'a' && ug1 == 'A' && ug2 == 'B' || st1 == 'a' && ug1 == 'B' && ug2 == 'A') {
		cout << "¬ведите сторону a: "; cin >> a;
		cout << "”гол A\n";
		A.add_angle();
		cout << "”гол B\n";
		B.add_angle();
		return 11;
	}
	else if (st1 == 'a' && ug1 == 'A' && ug2 == 'C' || st1 == 'a' && ug1 == 'C' && ug2 == 'A') {
		cout << "¬ведите сторону a: "; cin >> a;
		cout << "”гол A\n";
		A.add_angle();
		cout << "”гол C\n";
		C.add_angle();
		return 12;
	}
	else if (st1 == 'b' && ug1 == 'A' && ug2 == 'C' || st1 == 'b' && ug1 == 'C' && ug2 == 'A') {
		cout << "¬ведите сторону b: "; cin >> b;
		cout << "”гол A\n";
		A.add_angle();
		cout << "”гол C\n";
		C.add_angle();
		return 13;
	}
	else if (st1 == 'b' && ug1 == 'A' && ug2 == 'B' || st1 == 'b' && ug1 == 'B' && ug2 == 'A') {
		cout << "¬ведите сторону b: "; cin >> b;
		cout << "”гол A\n";
		A.add_angle();
		cout << "”гол B\n";
		B.add_angle();
		return 14;
	}
	else if (st1 == 'b' && ug1 == 'B' && ug2 == 'C' || st1 == 'b' && ug1 == 'C' && ug2 == 'B') {
		cout << "¬ведите сторону b: "; cin >> b;
		cout << "”гол B\n";
		B.add_angle();
		cout << "”гол C\n";
		C.add_angle();
		return 15;
	}
	else if (st1 == 'c' && ug1 == 'B' && ug2 == 'A' || st1 == 'c' && ug1 == 'A' && ug2 == 'B') {
		cout << "¬ведите сторону c: "; cin >> c;
		cout << "”гол A\n";
		A.add_angle();
		cout << "”гол B\n";
		B.add_angle();
		return 16;
	}
	else if (st1 == 'c' && ug1 == 'B' && ug2 == 'C' || st1 == 'c' && ug1 == 'C' && ug2 == 'B') {
		cout << "¬ведите сторону c: "; cin >> c;
		cout << "”гол B\n";
		B.add_angle();
		cout << "”гол C\n";
		C.add_angle();
		return 17;
	}
	else if (st1 == 'c' && ug1 == 'C' && ug2 == 'A' || st1 == 'c' && ug1 == 'A' && ug2 == 'C') {
		cout << "¬ведите сторону c: "; cin >> c;
		cout << "”гол A\n";
		A.add_angle();
		cout << "”гол C\n";
		C.add_angle();
		return 18;
	}
	else {
		cout << "ќшибка!\n";
		return -1;
	}
}

void triangles::add_triangles_3()
{
	cout << "¬ведите сторону a: "; cin >> a;
	cout << "¬ведите сторону b: "; cin >> b;
	cout << "¬ведите сторону c: "; cin >> c;
}

void triangles::finding_two_sides_and_angles(int n)
{
	switch (n)
	{
	case(1):
		//cout << n << endl;
		B = asin(sin(A * PI1) * b / a) * PI2;
		///c = sqrt(a * a - b * b + 2 * c * b * cos(A * PI1));
		///C = asin(sin(A * PI1) *c / a) * PI2;
		C = 180 - (A + B);
		c = a * sin(C * PI1) / sin(A * PI1);
		break;
	case(2):
		//cout << n << endl;
		A = asin(sin(B * PI1) * a / b) * PI2;
		C = 180 - (A + B);
		c = b * sin(C * PI1) / sin(B * PI1);
		break;
	case(3):
		//cout << n << endl;
		C = asin(sin(A * PI1) * c / a) * PI2;
		B = 180 - (A + C);
		b = a * sin(B * PI1) / sin(A * PI1);
		break;
	case(4):
		//cout << n << endl;
		A = asin(sin(C * PI1) * a / c)/PI2;
		B = 180 - (A + C);
		b = c * sin(B * PI1) / sin(C * PI1);
		break;
	case(5):
		//cout << n << endl;
		B = asin(sin(C * PI1) * b / c) * PI2;
		A = 180 - (B + C);
		a = c * sin(A * PI1) / sin(C * PI1);
		break;
	case(6):
		//cout << n << endl;
		C = asin(sin(B * PI1) * c / b) * PI2;
		A = 180 - (C + B);
		a = b * sin(A * PI1) / sin(B * PI1);
		break;
	case(7):
		//cout << n << endl;
		c = sqrt(a * a + b * b - 2 * a * b * cos(C * PI1));
		A = asin(sin(C * PI1) * a / c) * PI2;
		B = 180 - (A + C);
		break;
	case(8):
		//cout << n << endl;
		b = sqrt(a * a + c * c - 2 * a * c * cos(B * PI1));
		A = asin(sin(B * PI1) * a / b) * PI2;
		C = 180 - (A + B);
		break;
	case(9):
		//cout << n << endl;
		a = sqrt(b * b + c * c - 2 * b * c * cos(A * PI1));
		B = asin(sin(A * PI1) * b / a) * PI2;
		C = 180 - (A + B);
		break;
	case(-1):
		cout << n << endl;
		cout << "ќшибка!\n";
		break;
	}
}

void triangles::finding_two_angles_and_a_side(int n)
{
	switch (n)
	{
	case 10:
		A = 180 - (C + B);
		b = sin(B * PI1) * a / sin(A * PI1);
		c = sin(C * PI1) * a / sin(A * PI1);
		break;
	case 11:
		C = 180 - (A + B);
		b = sin(B * PI1) * a / sin(A * PI1);
		c = sin(C * PI1) * a / sin(A * PI1);
		break;
	case 12:
		B = 180 - (A + C);
		b = sin(B * PI1) * a / sin(A * PI1);
		c = sin(C * PI1) * a / sin(A * PI1);
		break;
	case 13:
		B = 180 - (A + C);
		a = sin(A * PI1) * b / sin(B * PI1);
		c = sin(C * PI1) * b / sin(B * PI1);
		break;
	case 14:
		C = 180 - (A + B);
		a = sin(A * PI1) * b / sin(B * PI1);
		c = sin(C * PI1) * b / sin(B * PI1);
		break;
	case 15:
		A = 180 - (B + C);
		a = sin(A * PI1) * b / sin(B * PI1);
		c = sin(C * PI1) * b / sin(B * PI1);
		break;
	case 16:
		C = 180 - (A + B);
		a = sin(A * PI1) * c / sin(C * PI1);
		b = sin(B * PI1) * c / sin(C * PI1);
		break;
	case 17:
		A = 180 - (C + B);
		a = sin(A * PI1) * c / sin(C * PI1);
		b = sin(B * PI1) * c / sin(C * PI1);
		break;
	case 18:
		B = 180 - (A + C);
		a = sin(A * PI1) * c / sin(C * PI1);
		b = sin(B * PI1) * c / sin(C * PI1);
		break;
	case -1:
		cout << n << endl;
		cout << "ќшибка!\n";
		break;
	}
}

void triangles::finding_three_angles()
{
	long double Cos_A, Cos_B, Cos_C;
	Cos_A = (b * b + c * c - a * a) / (2 * b * c);
	A = (acos(Cos_A) * 180 / 3.14159265358979);

	Cos_B = (a * a + c * c - b * b) / (2 * a * c);
	B = (acos(Cos_B) * 180 / 3.14159265358979);

	Cos_C = (a * a + b * b - c * c) / (2 * a * b);
	C = (acos(Cos_C) * 180 / 3.14159265358979);
}

void triangles::dispaly()
{
	cout << "a = " << a << "\tb = " << b << "\tc = " << setprecision(3) << c << endl;
	cout << "”гол A ~ ";
	A.show_angle();
	cout << "”гол B ~ ";
	B.show_angle();
	cout << "”гол C ~ ";
	C.show_angle();
}
