// Pr8_Control1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <windows.h>
#include <string>


using namespace std;

class Time
{
    int hour;
    int minutes;
    int seconds;

public:
    Time() {
        setTime(0, 0, 0);
    }

    Time(int hours, int minutes, int seconds) {
        setTime(hours, minutes, seconds);
    }

    void setTime(int hour, int minutes, int seconds) {
        int timeInSec = hour * 3600 + minutes * 60 + seconds;

        if (timeInSec / 3600 > 24 || hour < 0 || minutes < 0 || seconds < 0) {
            throw invalid_argument("received negative value");
        }

        this->hour = timeInSec / 3600;;
        this->minutes = (timeInSec % 3600) / 60;
        this->seconds = timeInSec % 60;

    }

    void whatTime() const {
        std::cout << "Время: " << hour << ":" << minutes << ":" << seconds << std::endl;
    }

    int timeToSec() const {
        return hour * 3600 + minutes * 60 + seconds;
    }

    Time operator+(const Time& time) const {
        Time newTime;
        int newTimeInSec = timeToSec() + time.timeToSec();

        newTime.hour = newTimeInSec / 3600;;
        newTime.minutes = (newTimeInSec % 3600) / 60;
        newTime.seconds = newTimeInSec % 60;
        return newTime;
    }

    Time operator+(const double& value) const {
        Time newTime;
        int newTimeInSec = timeToSec() + value;

        newTime.hour = newTimeInSec / 3600;;
        newTime.minutes = (newTimeInSec % 3600) / 60;
        newTime.seconds = newTimeInSec % 60;
        return newTime;
    }

    Time operator-(const Time& time) const {
        Time newTime;
        int newTimeInSec = timeToSec() - time.timeToSec();

        newTime.hour = newTimeInSec / 3600;;
        newTime.minutes = (newTimeInSec % 3600) / 60;
        newTime.seconds = newTimeInSec % 60;
        return newTime;
    }

    Time operator-(const double& value) const {
        Time newTime;
        int newTimeInSec = timeToSec() - value;

        newTime.hour = newTimeInSec / 3600;;
        newTime.minutes = (newTimeInSec % 3600) / 60;
        newTime.seconds = newTimeInSec % 60;
        return newTime;

    }

    bool operator<(const Time& time) const {
        int time1 = timeToSec();
        int time2 = time.timeToSec();
        if (time1 < time2) return true;
        return false;
    }
    bool operator>(const Time& time) const {
        int time1 = timeToSec();
        int time2 = time.timeToSec();
        if (time1 > time2) return true;
        return false;
    }
};


    int main()
    {
        system("chcp 1251");

        try {
            Time timeInit1(1, 70, 12);
            Time timeInit2(3, 10, 12);
            Time timeInit3;
            cout << "Время 1: " << endl;
            timeInit1.whatTime();
            cout << "Время 2: " << endl;
            timeInit2.whatTime();
            cout << "Время 3: " << endl;
            timeInit3.whatTime();

            timeInit3 = timeInit1 + timeInit2;
            cout << "Время 1 + Время 2: " << endl;
            timeInit3.whatTime();

            timeInit3 = timeInit3 - 100;
            cout << "Время 2 - 100: " << endl;
            timeInit3.whatTime();
        }
        catch (const invalid_argument& e) {
            cout << "exception: " << e.what() << std::endl;
        }

    }