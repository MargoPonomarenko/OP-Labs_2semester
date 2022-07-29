#include <sstream>
#include "Isosceles.h"

Isosceles::Isosceles(Coordinates point1, Coordinates point2, int angle):
	TTriangle(point1, point2, point1.distanceTo(point2), angle)
{
	this->angle = angle;
	angle1 = 180 - (2 * angle);   //���������� ���� ��� ������ ����������
	side2 = round(point1.distanceTo(point2) * 100) / 100;   //���������� ���� �������
	side3 = side2;
	side1 = side2 * sqrt(2 * (1 - cos((angle1 * 3.14) / 180)));   //���������� ������� ������
	side1 = round(side1 * 100) / 100;
}

double Isosceles::CalculateArea()
{
	return 0.0;
}

double Isosceles::CalculatePerimeter() {
	return 2 * side2 + side1;
}

string Isosceles::info()   //��������� ������ ��� ���������
{
	stringstream output;
	output << endl << "���i ��� �i������������ ���������:" << endl;
	int i = 1;
	for (auto point : coordinates)
	{
		output << "x" << i << " = " << point.x << "; y" << i << " = " << point.y << endl;
		i++;
	}
	output << "side1 = " << side1 << "; side2 = side3 = " << side2 << endl;
	output << "angle = " << angle << "; angle1 = " << angle1 << endl << "�������� ���������� = " << CalculatePerimeter() << endl;
	return output.str();
}
