#include <iostream>
#include <math.h>
#include <string>
#include <windows.h>

using namespace std;

class Triangle {
public:
    Triangle(double a1, double b1, double c1) : a{ a1 }, b{ b1 }, c{ c1 }
    {
        if (a >=  b + c or b>= a + c or c >= a + b)
            throw ExceptionTriangle();
    }

    double TriangleArea() {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    class ExceptionTriangle {
        public:
            ExceptionTriangle():message("Стороны недопустимой длины") { }
            void printMessage() const { cout << message << endl; }
        private:
            string message;
    };


private:
    double a;
    double b;
    double c;
};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Введите стороны треугольника\n";
    double a, b, c;
    cin >> a >> b >> c;
    try {
        Triangle trian(a, b, c);
        cout << "Площадь треугольника " << trian.TriangleArea() << endl;
    }
    catch (const Triangle::ExceptionTriangle& ex)
    {
        cout << "\n Ошибка:" << endl;
        ex.printMessage();
    }
}