// Pr10_Control1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dot.h"
#include <string>

using namespace std;

//агрегация
/*
class Triangle {
public:
    double ab, bc, ac;
    

    Triangle(Dot* a, Dot* b, Dot* c) {

        ab = (*a).distanceTo(*b);
        bc = (*b).distanceTo(*c);
        ac = (*a).distanceTo(*c);
    }

    double getLength(Dot* x, Dot* y) {

        return  (*x).distanceTo(*y);
    }

    double getPerimeter() {
        return ab + bc + ac;
    }

    double getArea() {
        double p = getPerimeter() / 2;
        return sqrt(p * (p - ab) * (p - bc) * (p - ac));
    }

};
*/


//Композиция

class Triangle {
public:
    double ab, bc, ac;


    Triangle(Dot a, Dot b, Dot c) {

        ab = a.distanceTo(b);
        bc = b.distanceTo(c);
        ac = a.distanceTo(c);
    }

    double getLength(Dot x, Dot y) {

        return  x.distanceTo(y);
    }

    double getPerimeter() {
        return ab + bc + ac;
    }

    double getArea() {
        double p = getPerimeter() / 2;
        return sqrt(p * (p - ab) * (p - bc) * (p - ac));
    }

};



int main()
{
    system("chcp 1251");

    /*
    cout << "Введите через пробел координаты вершин треугольника\n";
    double ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy; 
    */

    Dot a(-1, 0);
    Dot b(5, -2);
    Dot c(2, 7);

   
    /*
    //агрегация
    Triangle triangle(&a, &b, &c);
    cout << "АВ = " << triangle.getLength(&a,&b) << " ВC = " << triangle.getLength(&b, &c) << " AC = " << triangle.getLength(&a, &c) << endl;
    cout << "Периметр треугольника " << triangle.getPerimeter() << endl;
    cout << "Площадь треугольника " << triangle.getArea() << endl;
    */

    Triangle triangle(a, b, c);
    cout << "АВ = " << triangle.getLength(a, b) << " ВC = " << triangle.getLength(b, c) << " AC = " << triangle.getLength(a, c) << endl;
    cout << "Периметр треугольника " << triangle.getPerimeter() << endl;
    cout << "Площадь треугольника " << triangle.getArea() << endl;
}
