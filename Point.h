#include <iostream>
using namespace std;

class Point
{
public:
	double* x;
	double* y;
	/*
	* @brief сеттер Y
	* @param a «начение Y
	*/
	void SetY(double a);
	/*
	* @brief сеттер X
	* @param a «начение X
	*/
	void SetX(double a);
	/*
	* @brief геттер Y
	* @return «начение Y
	*/
	double GetY();
	/*
	* @brief геттер X
	* @return «начение X
	*/
	double GetX();
	/*
    * @brief конструктор по  умолчанию
    */
	Point();
	/*
    * @brief конструктор со значени€ми
    * @param a «начение X
	* * @param b «начение Y
    */
	Point(double a, double b);
	/*
	* @brief конструктор копировани€
	* @param ref_Point копируемый э-т
	*/
	Point(Point& ref_Point);
	/*
	* @brief деструктор
	*/
	~Point();
	/*
    * @brief переместить точку по X
    * @param a дальность перемещени€
    */
	void MovePointX(double a);
	/*
	* @brief переместить точку по Y
	* @param a дальность перемещени€
	*/
	void MovePointY(double a);
	/*
	* @brief возвращение дистанции до нул€
	* @return –ассто€ние до (0,0)
	*/
	double DistanceToZero();
	/*
	* @brief возвращение дистанции до точки
	* @param A точка, рассто€ние до кторой необходимо посчитать
	* @return –ассто€ние до точки
	*/
	double DistanceInBetween(Point A);
	/*
	* @brief преобразование в пол€рные координаты
	* @param angle переменна€, куда запишетс€ угол
	* @return –адиус
	*/
	double Polar(double* angle);
	/*
	* @brief сравнивание точек
	* @param A сравниваема€ точка
	* @return true, если точки совпадают, если нет - false
	*/
	bool IsEqual(Point A);
	/*
	* @brief присваивание
	* @param other присв. э-т
	* @return готова€ точка
	*/
	Point& operator=(const Point& other);

};