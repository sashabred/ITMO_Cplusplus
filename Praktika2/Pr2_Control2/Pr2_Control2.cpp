#include <iostream>
#include<cmath>
#include <algorithm>

using namespace std;

int main()
{
	system("chcp 1251");
	int a,b,c;
	cout << "Введите 3 числа";
	cin >> a >> b >> c;

	if (a >=b && b >= c)
		cout << a;

	else if (b >= a && a >= c)
		cout << b;


	else 
		cout << c;

	return 0; // конец программы
}