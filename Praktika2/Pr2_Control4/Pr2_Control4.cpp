// Pr2_Control4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    system("chcp 1251");
    int points = 0;
    int shoot = 0, shotsNum = 0;
    int a, b, r = 0;

    a = rand() % 10 +1; //случайные координаты центра круга
    b = rand() % 10 +1; //случайные координаты центра круга

    r = 10;
  

    while (points < 50)
    {
        int x,y;
        std::cout << "Введите координаты x и y: " << std::endl;
        std::cin >> x >> y;

        shotsNum += 1;

        if (pow((x - a), 2) + pow((y - b), 2) <= pow(r, 2)/2) {
            points += 10;
            std::cout << "Попадание +10 очков, итого: " << points << " очков." << std::endl;
        }
        else if (pow((x - a), 2) + pow((y - b), 2) <= pow(r, 2)) {
            points += 5;
            std::cout << "Попадание +5 очков, итого: " << points << " очков." << std::endl;
        }
        else {
            std::cout << "Мимо, итого: " << points << " очков."<< std::endl;
        }
            
    }

    if (shoot <= 10) {
        std::cout << "Поздравляю, вы професссионал! Кол-во очков: " << points << " за " << shotsNum << " выстрелов." <<  std::endl;
    }
    else if (shoot <= 30) {
        std::cout << "Неплохо, вы мастер! Кол-во очков: " << points << " за " << shotsNum << " выстрелов." << std::endl;
    }
    else {
        std::cout << "Молодец! Кол-во очков: " << points << " за " << shotsNum << " выстрелов." << std::endl;
    }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
