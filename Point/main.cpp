#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	//			Constructors:

	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
		//cout << "Constructor:\t" << this << endl;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		//cout << "CopyConstructor:" << this << endl;
	}
	void operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		//cout << "CopyAssignment:\t" << this << endl;
	}
	~Point()
	{
		//cout << "Destructor:\t" << this << endl;
	}

	//			Methods:
	double distance(const Point& other)
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		return distance;
	}
	void print()const
	{
		cout << "X = " << x << ", Y = " << y << endl;
	}
};

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


void main()
{
	setlocale(LC_ALL, "");

	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;
	cout << "\n--------------------------------------------------\n";
	Point B;
	B.set_x(4);
	B.set_y(5);
	cout << B.get_x() << "\t" << B.get_y() << endl;
	cout << "\n--------------------------------------------------\n";
	cout << "Расстояние от точки 'A' до точки 'B':  " << A.distance(B) << endl;
	cout << "Расстояние от точки 'B' до точки 'A':  " << B.distance(A) << endl;
	cout << "\n--------------------------------------------------\n";
	cout << "Расстояние между точками 'A' и 'B':  " << distance(A, B) << endl;
	cout << "Расстояние между точками 'B' и 'A':  " << distance(B, A) << endl;

}