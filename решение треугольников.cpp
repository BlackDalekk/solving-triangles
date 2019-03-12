#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	double A, B, C, A_, B_, C_;
	double Cos_A, Cos_B, Cos_C;
	cout << "Введите сторону a: "; cin >> a;
	cout << "Введите сторону b: "; cin >> b;
	cout << "Введите сторону с: "; cin >> c;

	Cos_A = (b * b + c * c - a * a) / (2 * b * c);
	A_ = modf((acos(Cos_A) * 180 / 3.1415), &A);
	A_ = A_ * 60 / 100;
	A += A_;
	
	Cos_B = (a * a + c * c - b * b) / (2 * a * c);
	B_ = modf((acos(Cos_B) * 180 / 3.1415), &B);
	B_ = B_ * 60 / 100;
	B += B_;
	
	Cos_C = (a * a + b * b - c * c) / (2 * a * b);
	C_ = modf((acos(Cos_C) * 180 / 3.1415), &C);
	C_ = C_ * 60 / 100;
	C += C_;

	cout << setprecision(4) << "Угол A ~ " << A << endl;
	cout << setprecision(4) << "Угол B ~ " << B << endl;
	cout << setprecision(4) << "Угол C ~ " << C << endl;
	system("pause");
	return 0;
}
