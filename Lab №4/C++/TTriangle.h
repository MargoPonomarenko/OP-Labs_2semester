#pragma once
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

enum class TriangleType
{
	EQUILATERAL, 
	RIGHT,
	ISOSCELES,
	TTRIANGLE,
};

struct Coordinates {
	double x = 0;
	double y = 0;
	double distanceTo(Coordinates other) {   //����������� ������ �� �������
		return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
	}
	Coordinates(double x, double y) : x(x), y(y) {};
};

class TTriangle 
{
protected:
	vector<Coordinates> coordinates;   //vector ��� ��������� ��������� ������
	double side1;
	double side2;
	double side3;
	double angle;

public:
	TTriangle(Coordinates point1, Coordinates point2, int side1, int angle);

	virtual TriangleType getType() {
		return TriangleType::TTRIANGLE;
	}

	virtual double CalculateArea() = 0 ;   //����� ��������� �������, �� �� �� ���������� �� ����� �� ������������ ����� TTriangle
	virtual double CalculatePerimeter() = 0;
	vector<Coordinates> const& GetCoordinates() { return coordinates; }

	virtual string info() = 0;   //��������� �������, �� �������� ������ ���

	virtual ~TTriangle() {}
};

