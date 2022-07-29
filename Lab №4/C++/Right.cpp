#include <sstream>
#include "Right.h"

Right::Right(Coordinates point1, Coordinates point2, int side1):
	TTriangle(point1, point2, side1, 90)
{
	this->side1 = side1;
	angle = 90;
	side2 = round(point1.distanceTo(point2) * 100) / 100;   //���������� ������� ������

	angle1 = side1 / side2;
	angle1 = round(atan(angle1) * 180 / 3.14 * 100) / 100;    //���������� ���� �� ���������� � ������� � �����
	
}

double Right::CalculateArea() {
	return round((side1 * side2 / 2) * 100) / 100;
}

double Right::CalculatePerimeter()
{
	return 0.0;
}

string Right::info()   //��������� ������ ��� ���������
{
	stringstream output;
	output << endl << "���i ��� ����������� ���������:" << endl;
	int i = 1;
	for (auto point : coordinates)
	{
		output << "x" << i << " = " << point.x << "; y" << i << " = " << point.y << endl;
		i++;
	}
	output << "side1 = " << side1 << "; side2 = " << side2 << endl;
	output << "angle = " << angle << "; angle1 = " << angle1 << endl << "����� ���������� = " << CalculateArea() << endl;
	return output.str();
}
