#include <iostream>
using namespace std;

class Point
{
public:
	double* x;
	double* y;
	/*
	* @brief ������ Y
	* @param a �������� Y
	*/
	void SetY(double a);
	/*
	* @brief ������ X
	* @param a �������� X
	*/
	void SetX(double a);
	/*
	* @brief ������ Y
	* @return �������� Y
	*/
	double GetY();
	/*
	* @brief ������ X
	* @return �������� X
	*/
	double GetX();
	/*
    * @brief ����������� ��  ���������
    */
	Point();
	/*
    * @brief ����������� �� ����������
    * @param a �������� X
	* * @param b �������� Y
    */
	Point(double a, double b);
	/*
	* @brief ����������� �����������
	* @param ref_Point ���������� �-�
	*/
	Point(Point& ref_Point);
	/*
	* @brief ����������
	*/
	~Point();
	/*
    * @brief ����������� ����� �� X
    * @param a ��������� �����������
    */
	void MovePointX(double a);
	/*
	* @brief ����������� ����� �� Y
	* @param a ��������� �����������
	*/
	void MovePointY(double a);
	/*
	* @brief ����������� ��������� �� ����
	* @return ���������� �� (0,0)
	*/
	double DistanceToZero();
	/*
	* @brief ����������� ��������� �� �����
	* @param A �����, ���������� �� ������ ���������� ���������
	* @return ���������� �� �����
	*/
	double DistanceInBetween(Point A);
	/*
	* @brief �������������� � �������� ����������
	* @param angle ����������, ���� ��������� ����
	* @return ������
	*/
	double Polar(double* angle);
	/*
	* @brief ����������� �����
	* @param A ������������ �����
	* @return true, ���� ����� ���������, ���� ��� - false
	*/
	bool IsEqual(Point A);
	/*
	* @brief ������������
	* @param other �����. �-�
	* @return ������� �����
	*/
	Point& operator=(const Point& other);

};