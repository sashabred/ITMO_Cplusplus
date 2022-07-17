// Pr7_Control1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Time {
    int hh;
    int mm;
    int ss;

    void getHour() {
        cout << "Введите часы:" << endl;
        cin >> hh;
        while (hh > 23 || hh < 0)
        {
            cout << "Неправильное время введите снова:";
            cin >> hh;
            continue;
        }
    }

    void getMinutes() {
        cout << "Введите минуты:" << endl;
        cin >> mm;
        while (mm > 60|| mm < 0)
        {
            cout << "Неправильное время введите снова:";
            cin >> mm;
            continue;
        }
    }

    void getSeconds() {
        cout << "Введите секунды:" << endl;
        cin >> ss;
        while (ss > 100 || ss < 0)
        {
            cout << "Неправильное время введите снова:";
            cin >> ss;
            continue;
        }
    }

    void getTime() {
        getHour();
        getMinutes();
        getSeconds();
    }

    void whatTime() {
        std::cout << "Часы: " << hh << " Минуты: " << mm << " Секунды: " << ss << std::endl;
    }

    int timeToSeconds() {
        return hh * 3600 + mm * 60 + ss;
    }

    void plusInterval(Time Interval) {
        int toSeconds = timeToSeconds() + Interval.timeToSeconds();
        hh = toSeconds / 3600;
        mm = (toSeconds % 3600) / 60;
        ss = toSeconds % 60;
    }

    void minusInterval(Time Interval) {
        int toSeconds = timeToSeconds() - Interval.timeToSeconds();
        hh = toSeconds / 3600;
        mm = (toSeconds % 3600) / 60;
        ss = toSeconds % 60;
    }
};
    

int main()
{
    system("chcp 1251");
    struct Time t1, t2;
    t1 = { 1, 30, 5 };
    t2.getTime();
    t1.whatTime();
    t2.whatTime();
    t1.minusInterval(t2);
    t1.whatTime();
}
