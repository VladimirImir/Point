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
	cout << "���������� �� ����� 'A' �� ����� 'B':  " << A.distance(B) << endl;
	cout << "���������� �� ����� 'B' �� ����� 'A':  " << B.distance(A) << endl;
	cout << "\n--------------------------------------------------\n";
	cout << "���������� ����� ������� 'A' � 'B':  " << distance(A, B) << endl;
	cout << "���������� ����� ������� 'B' � 'A':  " << distance(B, A) << endl;

}