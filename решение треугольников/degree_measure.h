#pragma once
class degree_measure
{
	int degrees;
	int minutes;
	double seconds;
public:
	degree_measure();
	void add_angle();
	void show_angle();
	degree_measure operator + (degree_measure angle2);
	degree_measure operator - (degree_measure angle2);
	degree_measure operator / (degree_measure angle2);
	degree_measure operator * (degree_measure angle2);
	degree_measure& operator = (double angle2);
	operator double();
};

