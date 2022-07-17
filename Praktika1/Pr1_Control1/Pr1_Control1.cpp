#include <iostream>
#include<cmath>
#include <algorithm>

using namespace std;

int main()
{
	double result;
	system("chcp 1251");
	double p, summ1 = 0, summ2 = 0;
	cout << "Введите высоту пятиугольника";
	double coord[10];

	std::for_each(std::begin(coord), std::end(coord), [](auto& elem) { cin >> elem; });



	summ1 = ((coord[0] * coord[3]) + (coord[2] * coord[5]) + (coord[4] * coord[7]) + (coord[6] * coord[9]));
	summ2 = ((coord[1] * coord[2]) + (coord[3] * coord[4]) + (coord[5] * coord[6]) + (coord[7] * coord[8]));
	result = fabs((summ1 - summ2) / 2);
	cout << "Площадь пятиугольника = " << result << endl;
	return 0; // конец программы
}