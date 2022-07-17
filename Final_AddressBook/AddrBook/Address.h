#pragma once
#include<iostream>
#include<string>
#include<list>
#include<windows.h>
#include"House.h"

using namespace std;

class Address :public House
{    protected:
        int apartNum;

    public:
        Address(string city, string street, int housenum, int num) : House(city, street, housenum) {
            apartNum = num;
        };

        Address(string city, string street, int housenum) : House(city, street, housenum) {
            apartNum = 0;
        };

        string getAddress() {
            return  "�." + City + ", ��. " + Street + ", �. " + to_string(HouseNum) + ", ��." + to_string(apartNum);
        };

};

