#pragma once

#include<iostream>
#include<string>
#include<list>
#include<windows.h>
#include"Address.h"
#include <sstream>
#include <fstream>
#include <set>

using namespace std;

class IGetContacts {
public:
    virtual ~IGetContacts() {}
    virtual string getContacts() = 0;
};

class Person:IGetContacts {
public:
    Person(string name, string surname)  {
        Name = name;
        Surname = surname;
;    }


    string getFIO() const {
        return Name + " " + Surname;
    }

    void setHomeAdress(Address* addr) {
        residentialAddress = addr;
    }

    string getHomeAddress() const
    {
        return residentialAddress->getAddress();
    }

    void setTelephone(__int64 num) {
        Telephone = to_string(num);
    }

    string getTelephone() const{
        return Telephone;
    }

    virtual string getInfo() const
    {
        return "ФИО: " + getFIO() + "\nНомер телефона:" + getTelephone()+"\nАдрес проживания: " + getHomeAddress();
    }


     virtual void save() const
    {
        ofstream fout("pInfo"+Name+".txt", ios::app);
        fout << getInfo() << endl;
        fout << endl;
        fout.close();
    }

     virtual string getContacts() {
         return  Telephone;
     }

protected:
    string Name;
    string Surname;
    string Telephone;
    Address* residentialAddress;
    
};