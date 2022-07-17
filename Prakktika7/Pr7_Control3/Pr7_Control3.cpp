
#include <iostream>
#include <tuple>

using namespace std;

struct SquareRoot {
    double x1 = 0;
    double x2 = 0;
};

tuple <double, double, int> findRoots(double a, double b, double c) {
    SquareRoot eqRoots;

    double d = b * b - 4 * a * c;
    int flag = -1;


    if (d > 0) {
        eqRoots.x1 = (-b + sqrt(d)) / (2 * a);
        eqRoots.x2 = (-b - sqrt(d)) / (2 * a);
        flag = 1;
    }

    if (d == 0) {
        eqRoots.x1 = (-b) / (2 * a);
        eqRoots.x2 = eqRoots.x1;
        flag = 0;
    }

    return make_tuple(eqRoots.x1, eqRoots.x2, flag);

}

void getResult(tuple <double, double, int>  root) {

    if (get<2>(root) == -1)
    {
        cout << "Корней не существует" << endl;
    }
    else if (get<2>(root) == 1)
    {
        cout << "корни найдены и они равны: x= " << get<0>(root) << " y = " << get<1>(root) << endl;
    }
    else {
        cout << "Оба корня совпадают: " << get<0>(root) << " " << get<1>(root) << endl;
    }
}

int main()
{
    system("chcp 1251");
    tuple <double, double, int>  root1 = findRoots(-2, 3, 5);
    tuple <double, double, int>  root2 = findRoots(2, 8, 6);

    getResult(root1);
    getResult(root2);
      
    return 0;
    
  
}