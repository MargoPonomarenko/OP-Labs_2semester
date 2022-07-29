#pragma once
#include "TTriangle.h"
class Right :   //����-������� "��������� ����������"
    public TTriangle
{
private:
	double angle1;

public:
	Right(Coordinates point1, Coordinates point2, int side1);

	TriangleType getType() override {
		return TriangleType::RIGHT;
	}

	double CalculateArea() override;   //����� ��� ���������� �����
	double CalculatePerimeter() override;
	string info() override;
};

