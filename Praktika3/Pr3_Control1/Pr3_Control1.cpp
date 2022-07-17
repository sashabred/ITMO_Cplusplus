// Pr3_Control1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include<cmath>


using namespace std;

double findLineLength(double x, double y, double x1, double y1) {

	double line = sqrt(pow((x - x1), 2) + pow((y - y1), 2));
	return line;
}

double findTriangle(double ab, double bc, double cd)
{
	double p = (ab + bc + cd) / 2;
	double area = sqrt(p * (p - ab) * (p - bc) * (p - cd));
	return area;
}


int main()
{

	
    system("chcp 1251");

	cout << "Введите координаты точек A, B, C, D, E пятиугольника:";

	double coord[10];

	std::for_each(std::begin(coord), std::end(coord), [](auto& elem) { cin >> elem; });

	double AB = findLineLength(coord[0], coord[1], coord[2], coord[3]);
	double AC = findLineLength(coord[0], coord[1], coord[4], coord[5]);
	double AD = findLineLength(coord[0], coord[1], coord[6], coord[7]);
	double AE = findLineLength(coord[0], coord[1], coord[8], coord[9]);
	double BC = findLineLength(coord[2], coord[3], coord[4], coord[5]);
	double CD = findLineLength(coord[4], coord[5], coord[6], coord[7]);
	double DE = findLineLength(coord[6], coord[7], coord[8], coord[9]);

	double ABC = findTriangle(AB, BC, AC);
	double ACD = findTriangle(AC, CD, AD);
	double ADE = findTriangle(AD, DE, AE);
	double area = ABC + ACD + ADE;

	cout << "Площадь выпуклого пятиугольника =" << area;
	return 0;

}
	

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
