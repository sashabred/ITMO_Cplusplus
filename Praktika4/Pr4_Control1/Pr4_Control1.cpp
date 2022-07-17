#include <iostream>

using namespace std;


int Myroot(double a, double b, double c, double& x1, double& x2) {

	double d = b * b - 4 * a * c;


    if(d < 0) {
        
        return -1;
    }
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        return 1;
    }
    if (d == 0) {
        x1 = (-b) / (2 * a);
        x2 = x1;
        return 0;
    }
    
}

int main()
{
    system("chcp 1251");
    double a, b, c, d1, d2;
    cout << "Введите коэффициент a при: a*x^2 + b*x + c:" << endl;
    cin >> a;
    cout << "Введите коэффициент b " << endl;
    cin >> b;
    cout << "Введите коэффициент c" << endl;
    cin >> c;

    
    int result = Myroot(a, b, c, d1, d2);
    if (result == -1)
    {
        cout << "Корней не существует" << endl;
    }
    else if (result == 1)
    {
        cout << "корни найдены и они равны: " << d1 << " " << d2 << endl;
    }
    else  {
        cout << "Оба корня совпадают: " << d1 << " " << d2 << endl;
    }
 
    return 0;

}
