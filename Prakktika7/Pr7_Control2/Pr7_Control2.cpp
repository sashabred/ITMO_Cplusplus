

#include <iostream>

using namespace std;

struct SquareRoot {
	double x1 = 0;
	double x2 = 0;
};

SquareRoot findRoots(double a, double b, double c) {
    SquareRoot eqRoots;

    double d = b * b - 4 * a * c;


   
    if (d > 0) {
        eqRoots.x1 = (-b + sqrt(d)) / (2 * a);
        eqRoots.x2 = (-b - sqrt(d)) / (2 * a);
        return eqRoots;
    }
    if (d == 0) {
        eqRoots.x1 = (-b) / (2 * a);
        eqRoots.x2 = eqRoots.x1;
        return eqRoots;
    }

}

int main()
{
    system("chcp 1251");
    SquareRoot root1 = findRoots(-2, 3, 5);
    SquareRoot root2 = findRoots(2, 8, 6);

    cout << "x1 = " << root1.x1 << " x2 = " << root1.x2 << endl;
    cout << "x1 = " << root2.x1 << " x2 = " << root2.x2 << endl;
}