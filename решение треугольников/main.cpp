#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include "degree_measure.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	long double a, b, c;
	long double A, B, C, A_, B_, C_;
	long double Cos_A, Cos_B, Cos_C;
	degree_measure A1, B1, C1;
	cout << "¬ведите сторону a: "; cin >> a;
	cout << "¬ведите сторону b: "; cin >> b;
	cout << "¬ведите сторону с: "; cin >> c;

	Cos_A = (b * b + c * c - a * a) / (2 * b * c);
	A1 = (acos(Cos_A) * 180 / 3.1415);

	Cos_B = (a * a + c * c - b * b) / (2 * a * c);
	B1 = (acos(Cos_B) * 180 / 3.1415);

	Cos_C = (a * a + b * b - c * c) / (2 * a * b);
	C1 = (acos(Cos_C) * 180 / 3.1415);



	cout << setprecision(4) << "”гол A ~ "; A1.show_angle(); cout << endl;
	cout << setprecision(4) << "”гол B ~ "; B1.show_angle(); cout << endl;
	cout << setprecision(4) << "”гол C ~ "; C1.show_angle(); cout << endl;
	system("pause");
	return 0;
}
