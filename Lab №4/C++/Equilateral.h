#pragma once
#include "TTriangle.h"
class Equilateral :   //����-������� "г���������� ����������"
    public TTriangle
{

public:
    Equilateral(Coordinates point1, Coordinates point2);

    TriangleType getType() override {
        return TriangleType::EQUILATERAL;
    }

    double CalculateArea() override;   //����� ��� ���������� �����
    double CalculatePerimeter() override;
    string info() override;
};

