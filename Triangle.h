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
	* @brief сеттер p1
	* @param a Значение p1
	*/
	void Setp1(Point a);
	/*
	* @brief сеттер p2
	* @param a Значение p2
	*/
	void Setp2(Point a);
	/*
	* @brief сеттер p3
	* @param a Значение p3
	*/
	void Setp3(Point a);
	/*
	* @brief геттер p1
	* @return Значение p1
	*/
	Point Getp1();
	/*
	* @brief геттер p2
	* @return Значение p2
	*/
	Point Getp2();
	/*
	* @brief геттер p3
	* @return Значение p3
	*/
	Point Getp3();
	/*
	* @brief конструктор по  умолчанию
	*/
	Triangle();
	/*
	* @brief конструктор со значениями
	* @param a 1 точка
	* @param b 2 точка
	* @param с 3 точка
	*/
	Triangle(Point a, Point b, Point c);
	/*
	* @brief конструктор копирования
	* @param ref_Point копируемый э-т
	*/
	Triangle(Triangle& ref_Triangle);
	/*
	* @brief получение площади
	* @return площадь
	*/
	double GetSquare();
	/*
	* @brief получение периметра
	* @return периметр
	*/
	double GetPerim();
	/*
	* @brief получение высот
	* @param a значение высоты из точки 2
	* @param a значение высоты из точки 3
	* @return значение высоты из точки 1
	*/
	double GetHeights(double* a, double* b);
	/*
	* @brief вид треугольника
	* @return 1 при прямоугольном; 2 при остроугольном; 3 при тупоугольном
	*/
	int Type();
};
