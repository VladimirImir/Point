#include"Point.h"


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