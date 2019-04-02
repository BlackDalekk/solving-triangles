#include "pch.h"
#include <iostream>
#include "triangles.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	short ch;
	triangles tr1;
	int n = 0;
	std::cout << "Начальные данные\nДве стороны и угол (1)\nДва угла и сторона (2)\nТри стороны(3): ";
	std::cin >> ch;

	switch (ch)
	{
	case 1:
		n = tr1.add_triangles_1();
		tr1.finding_two_sides_and_angles(n);
		break;
	case 2:
		n = tr1.add_triangles_2();
		tr1.finding_two_angles_and_a_side(n);
		break;
	case 3:
		tr1.add_triangles_3();
		tr1.finding_three_angles();
	}
	tr1.dispaly();
	system("pause");
	return 0;
}
