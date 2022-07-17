#include <iostream>
#include <math.h>

int sumFunc(int x) {
	if (x <= 0) {
		return 0;
	}
	else {
		return 5 + sumFunc(x - 1);
	}
}


int main()
{
	system("chcp 1251");
	int z;
	std::cout << "Введите число: "<< std::endl;
	std::cin >> z;
	std::cout << sumFunc(z) << " "<<std::endl;

}

