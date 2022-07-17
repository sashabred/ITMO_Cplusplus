// Pr6_Control2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void saveArray(int* mas, int n, int x) {
    string arrName = "sortArray" + to_string(x) + ".txt";

    ofstream outArray(arrName);//Запись в файл исходного массива
    if (!outArray) {
        std::cout << "Файл открыть невозможно\n";
        return;
    }
    
    for (int i = 0; i < n; i++) {
        outArray << mas[i] << " ";
    }
    outArray.close();
}

void arraySort(int mas[], int n) {

    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями
    saveArray(mas, n, 1);

    for (int i = 0; i < n; i++)
    {
        min = i; // номер текущей ячейки, как ячейки с минимальным значением
        // в цикле найдем реальный номер ячейки с минимальным значением
        for (int j = i + 1; j < n; j++)
            min = (mas[j] < mas[min]) ? j : min;
        // перестановка этого элемента, поменяв его местами с текущим
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }

        saveArray(mas, n, 2);
    }
}



int main()
{
    system("chcp 1251");
    

    const int n = 10;
    int mas[n] = { 1, 0, -5, 2, 10, -2, 6, 0, 4, 1 };

    cout << "Сортировка массива по возрастанию." << std::endl;
    arraySort(mas, n);

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
