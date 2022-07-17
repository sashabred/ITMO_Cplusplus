// Pr3_Control2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

double cube_root(double a) {
    return pow(a, 1.0 / 3);
}

double cube_root_iter(double a) {

    double y = a / 3.0;
    double x;

    do {
        x = y;
        y = (2.0 * x + a/ (x * x)) / 3.0;
    } while (abs(x - y) >= numeric_limits<double>::epsilon());
    return y;
}

int main()
{
    system("chcp 1251");

    double a;
    std::cout << "Введите число: ";
    std::cin >> a;


    std::cout << "Кубический корень = "<<cube_root(a) << std::endl; 
    std::cout << "Кубический корень (итерация) = " << cube_root_iter(a) << std::endl;
    

}

