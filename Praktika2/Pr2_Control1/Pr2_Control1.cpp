#include <iostream>
#include<cmath>
#include <algorithm>

using namespace std;

int main()
{
	system("chcp 1251");
	int year;
	cout << "Введите год";
	cin >> year;
	 
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0; // конец программы
}