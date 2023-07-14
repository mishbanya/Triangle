#include <iostream>
#include "Point.h"
using namespace std;

class Triangle
{
public:
	Point p1;
	Point p2;
	Point p3;
	/*
	* @brief ������ p1
	* @param a �������� p1
	*/
	void Setp1(Point a);
	/*
	* @brief ������ p2
	* @param a �������� p2
	*/
	void Setp2(Point a);
	/*
	* @brief ������ p3
	* @param a �������� p3
	*/
	void Setp3(Point a);
	/*
	* @brief ������ p1
	* @return �������� p1
	*/
	Point Getp1();
	/*
	* @brief ������ p2
	* @return �������� p2
	*/
	Point Getp2();
	/*
	* @brief ������ p3
	* @return �������� p3
	*/
	Point Getp3();
	/*
	* @brief ����������� ��  ���������
	*/
	Triangle();
	/*
	* @brief ����������� �� ����������
	* @param a 1 �����
	* @param b 2 �����
	* @param � 3 �����
	*/
	Triangle(Point a, Point b, Point c);
	/*
	* @brief ����������� �����������
	* @param ref_Point ���������� �-�
	*/
	Triangle(Triangle& ref_Triangle);
	/*
	* @brief ��������� �������
	* @return �������
	*/
	double GetSquare();
	/*
	* @brief ��������� ���������
	* @return ��������
	*/
	double GetPerim();
	/*
	* @brief ��������� �����
	* @param a �������� ������ �� ����� 2
	* @param a �������� ������ �� ����� 3
	* @return �������� ������ �� ����� 1
	*/
	double GetHeights(double* a, double* b);
	/*
	* @brief ��� ������������
	* @return 1 ��� �������������; 2 ��� �������������; 3 ��� ������������
	*/
	int Type();
};
