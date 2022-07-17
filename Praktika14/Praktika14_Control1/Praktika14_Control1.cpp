#include <iostream>

using namespace std;


template<class T> double averageValue(T arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return (double)sum / n;
}



int main()
{
    system("chcp 1251");

    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Размер массива: " << averageValue(arr, arrSize) << endl;

    long arrLong[] = { 100,1000,1000000, 1500 };
    int arrLongSize = sizeof(arrLong) / sizeof(arrLong[0]);
    std::cout << "Размер массива: " << averageValue(arrLong, arrLongSize) << endl;

    double arrDouble[] = { 2.0, 3.7, 9.8, 1.6, 1.4, 2.3, 3.2 };
    int arrDoubleSize = sizeof(arrDouble) / sizeof(arrDouble[0]);
    std::cout << "Размер массива: " << averageValue(arrDouble, arrDoubleSize) << endl;

    char arrChar[] = "What`s going on?";
    int arrCharSize = sizeof(arrChar) / sizeof(arrChar[0]);
    std::cout << "Размер массива: " << averageValue(arrChar, arrCharSize) << endl;

}