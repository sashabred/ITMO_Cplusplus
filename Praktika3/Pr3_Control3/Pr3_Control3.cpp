// Pr3_Control2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

double triangleS(double x) {
    return  sqrt(3.0)/4.0 * pow(x, 2);
}

double triangleS(double x, double y, double z) {
    double p = (x + y + z) / 2;
    return sqrt(p * (p - x) * (p - y) * (p - z));
}


int main()
{
    system("chcp 1251");

    char a;
    double x, y, z, result;
    std::cout << "Введите тип треугольника 'e' - равносторонний, 'd' - разносторонний: ";
    std::cin >> a;
    if (a == 'e') {
        std::cout << "Введите длину равностороннего треугольника: ";
        std::cin >> x;
        result =triangleS(x);
    }
    else if (a == 'd') {
        std::cout << "Введите три стороны разностороннего треугольника: ";
        std::cin >> x >> y >> z;
        result = triangleS(x, y, z);
    }
    
    std::cout << "Площадь треугольника = " << result << std::endl;

}

