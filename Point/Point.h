#pragma once
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Point;
//double Point::distance(const Point& other);
double distance(const Point& A, const Point& B);

class Point
{
	double x;
	double y;
public:
	double get_x()const;
	double get_y()const;
	void set_x(double x);
	void set_y(double y);

	//			Constructors:

	Point(double x = 0, double y = 0);
	Point(const Point& other);
	void operator=(const Point& other);
	~Point();

	//			Methods:

	double distance(const Point& other);
	void print()const;
};