#pragma once
#include<iostream>
#include<string>
#include<list>
#include<windows.h>

using namespace std;

class House
{
protected:
    string City;
    string Street;
    int HouseNum;

public:

    House(string city, string street, int housenum) {
        City = city;
        Street = street;
        HouseNum = housenum;
    }

    ~House() {};

    virtual string getAddress() {
        return  "г." + City + ", ул. " + Street + ", д. " + to_string(HouseNum);
    };
};