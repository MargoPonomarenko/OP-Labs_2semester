#pragma once
#include <math.h>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point() { //����������� �� �������������
        x = 0;
        y = 0;
    }

    Point(int xCoordinate, int yCoordinate) {  //����������� � �����������
        x = xCoordinate;
        y = yCoordinate;
    }

    int GetXPoint() { return x; }
    int GetYPoint() { return y; }

    int FindQuadrant() { //����� ��� ���������� ��������� �����
        if (x >= 0 && y >= 0) {
            return 1;
        }
        if (x < 0 && y >= 0) {
            return 2;
        }
        if (x < 0 && y < 0) {
            return 3;
        }
        if (x >= 0 && y < 0) {
            return 4;
        }
    }

    Point& operator++() { //�������������� ����������� "++" ��� ��������� �-���������� ����� �� 1
        ++x;
        return *this; //���������� ������������� ���������
    }

    Point& operator++(int coordinate) { //�������������� ������������ "++" ��� ��������� �-���������� ����� �� 1
        ++y;
        return *this;
    }

    double operator-(const Point& other) { //�������������� ��������� "-" ��� ���������� ������ �� ����� �������
        double distance = sqrt(pow((other.x - this->x), 2) + pow((other.y - this->y), 2));
        return distance;
    }
};
