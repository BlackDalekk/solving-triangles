#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include "degree_measure.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	degree_measure m1, m2, m3;
	m1.add_angle();
	m2.add_angle();
	m3 = m1 + m2;
	m3.show_angle();
	double d = static_cast<double>(m3);
	cout << "\n" << d;
	return 0;
}
