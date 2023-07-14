#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

void Point::SetY(double a) {
	*y = a;
}
void Point::SetX(double a) {
	*x = a;
}
double Point::GetY() {
	return *y;
}
double Point::GetX() {
	return *x;
}
Point::Point(){ x = new double(0); y = new double(0); }
Point::Point(double a, double b) { x = new double(a); y = new double(b); }
Point::Point(Point& ref_Point)
{
	x = new double(*ref_Point.x);
	y = new double(*ref_Point.y);
}
Point::~Point() { delete x; delete y; }
void Point:: MovePointX(double a) {
	*x = (*x) + a;
}
void Point::MovePointY(double a) {
	*y = (*y) + a;
}
double Point::DistanceToZero() {
	return sqrt((*x) * (*x) + (*y) * (*y));
}
double Point::DistanceInBetween(Point A) {
	double dx = (*x) - ( * (A.x));
	double dy = (*y) - (*(A.y));
	return sqrt(dx*dx+dy*dy);
}
double Point::Polar(double* angle) {
	*angle = atan((*y) / (*x));
	double rad = DistanceToZero();
	return rad;
}
bool Point::IsEqual(Point A) {
	if (((*y) == (*A.y)) && ((*x) == (*A.x))) { return true; }
	return false;
}
Point& Point::operator=(const Point& other) {
	*x = *(other.x);
	*y = *(other.y);
	return *this;
}