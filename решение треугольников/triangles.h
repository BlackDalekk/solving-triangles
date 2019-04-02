#pragma once

#include "pch.h"
#include "degree_measure.h"
class triangles
{
	double a, b, c;
	degree_measure A, B, C;
public:
	triangles();
	~triangles();
	int add_triangles_1(); //две стороны и угол м/у ними
	int add_triangles_2(); //два угла и стороны м/у ними
	void add_triangles_3(); //три стороны
	void finding_two_sides_and_angles(int);
	void finding_two_angles_and_a_side(int);
	void finding_three_angles();
	void dispaly();
};

