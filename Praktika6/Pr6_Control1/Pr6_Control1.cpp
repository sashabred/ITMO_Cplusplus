// Pr6_Control1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    system("chcp 1251");

    const int max = 50;
    char str[max];
    int index = 0;

    cout << "Введите любое стихотворение" << std::endl;
    cin.get(str, max);
 
    ofstream outdata("outdata.txt");

    if (!outdata) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }

    outdata << str;
    outdata.close();

    std::cout << "Данные записаны в файл" << std::endl;

}
