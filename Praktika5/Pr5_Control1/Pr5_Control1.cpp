// Задание 1. Передача массива в функцию


#include <iostream>
#include <fstream>

using namespace std;


void arraySort(int mas[], int n) {

    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями
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
    }
}



int arraySum(int* mas, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    return s;
}

int arrayPosSum(int* mas, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0) {
            s += mas[i];
        }
    }
    return s;
}

int arrayNegSum(int* mas, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0) {
            s += mas[i];
        }
    }
    return s;
}

//сумма четных индексов
int arrayEvenSum(int* mas, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (i%2 ==0) {
            s += mas[i];
        }
    }
    return s;
}

//Нечет
int arrayOddSum(int* mas, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0) {
            s += mas[i];
        }
    }
    return s;
}

int main() {
    system("chcp 1251");

    const int n = 10;
    int mas[n] = { 1, 0, -5, 2, 10, -2, 6, 0, 4, 1 };

    arraySort(mas, n);

    for (int i : mas)
        cout << i << '\t';


    std::cout << '\n'<< "Сумма всех элементов массива = " << arraySum(mas, n) << endl;
    
    std::cout << '\n' << "Среднее значение элементов массива = " << (double)arraySum(mas, n) / n << endl;

    std::cout << '\n' << "Сумма всех положительных элементов массива = " << arrayPosSum(mas, n) << endl;

    std::cout << '\n' << "Сумма всех отрицательных элементов массива = " << arrayNegSum(mas, n) << endl;
     
    std::cout << '\n' << "Сумма всех элементов с нечетными индексами массива = " << arrayEvenSum(mas, n) << endl;

    std::cout << '\n' << "Сумма всех элементов с четными индексами массива = " << arrayOddSum(mas, n) << endl;
    return 0;

}

