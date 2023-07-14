#include <iostream>
#include "Triangle.h"
using namespace std;

void Triangle::Setp1(Point a) {
	p1 = a;
}
void Triangle::Setp2(Point a) {
	p2 = a;
}
void Triangle::Setp3(Point a) {
	p3 = a;
}
Point Triangle::Getp1() {
	return p1;
}
Point Triangle::Getp2() {
	return p2;
}
Point Triangle::Getp3() {
	return p3;
}
Triangle::Triangle() {
	Point a; Point b; Point c;
	p1 = a; p2 = b; p3 = c;
}
Triangle::Triangle(Point a, Point b, Point c) {
	p1 = a; p2 = b; p3 = c;
}
Triangle::Triangle(Triangle& ref_Triangle) {
	p1 = ref_Triangle.p1;
	p2 = ref_Triangle.p2;
	p3 = ref_Triangle.p3;
}
double Triangle::GetSquare() {
	return 0.5 * (abs((p2.GetX() - p1.GetX()) * (p3.GetY() - p1.GetY()) - (p3.GetX() - p1.GetX()) * (p2.GetY() - p1.GetY())));
}
double Triangle::GetPerim() {
	return p1.DistanceInBetween(p2)+p2.DistanceInBetween(p3)+p3.DistanceInBetween(p1);
}
double Triangle::GetHeights(double* a, double* b) {
	*a= 2 * GetSquare() / p1.DistanceInBetween(p3);
	*b= 2 * GetSquare() / p2.DistanceInBetween(p1);
	return 2*GetSquare()/p2.DistanceInBetween(p3);
}
int Triangle::Type() {
	double s1 = pow(p2.DistanceInBetween(p3),2);
	double s2 = pow(p1.DistanceInBetween(p3),2);
	double s3 = pow(p2.DistanceInBetween(p1),2);
	if ((s1 > s2) && (s1 > s3)) {
		if (s1 = s2 + s3) { return 1; }
		if (s1 < s2 + s3) { return 2; }
		if (s1 > s2 + s3) { return 3; }
	}
	if ((s2 > s1) && (s2 > s3)) { 
		if (s2 = s1 + s3) { return 1; }
		if (s2 < s1 + s3) { return 2; }
		if (s2 > s1 + s3) { return 3; }
	}
	if ((s3 > s2) && (s3 > s1)) { 
		if (s3 = s2 + s1) { return 1; }
		if (s3 < s2 + s1) { return 2; }
		if (s3 > s2 + s1) { return 3; }
	}
}