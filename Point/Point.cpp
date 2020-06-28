#include"Point.h"

double Point::get_x()const
{
	return x;
}
double Point::get_y()const
{
	return y;
}
void Point::set_x(double x)
{
	this->x = x;
}
void Point::set_y(double y)
{
	this->y = y;
}

//			Constructors:

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
	//cout << "Constructor:\t" << this << endl;
}
Point::Point(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
	//cout << "CopyConstructor:" << this << endl;
}
void Point::operator=(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
	//cout << "CopyAssignment:\t" << this << endl;
}
Point::~Point()
{
	//cout << "Destructor:\t" << this << endl;
}

//			Methods:
double Point::distance(const Point& other)
{
	double x_distance = this->x - other.x;
	double y_distance = this->y - other.y;
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}
void Point::print()const
{
	cout << "X = " << x << ", Y = " << y << endl;
}

double distance(const Point& A, const Point& B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}

class Point3D :public Point
{
	double z;
public:
	double get_z() const
	{
		return z;
	}
	void set_z(double z)
	{
		this->z = z;
	}
};