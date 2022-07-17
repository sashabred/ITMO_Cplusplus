
#include<iostream>
#include<string>
#include<list>
#include<windows.h>
#include"Address.h"
#include"Person.h"
#include"Doctor.h"
#include"Student.h"
#include <map>
#include <vector>

using namespace std;




int main()
{

    system("chcp 1251");

    Address doctorHome{ "Tomsk", "Lenina",45,3 };
    Address doctorWork {"Moscow", "Yaroslavskaya",45};
    Doctor doctor{ "Vlad", "Les" };
    doctor.setHomeAdress(&doctorHome);
    doctor.setWorkAddress(&doctorWork);
    doctor.setTelephone(8983332456);
    doctor.setWorkTelephone(89833304525);

    doctor.save();


    Address studentHome{ "Vladivostok", "Babushkina",44,37 };
    Student student{ "Yana", "Vol" };
    student.setHomeAdress(&studentHome);
    student.setUniversityAddress(&doctorWork);
    student.setTelephone(83245645321);
    student.setUniversityTelephones(8123154654);

    student.save();

    map<string, string> contacts;

    contacts.insert(pair<string, string>(doctor.getFIO(), doctor.getContacts()));
    contacts.insert(pair<string, string>(student.getFIO(), student.getContacts()));

    for (auto& c : contacts)
    {
        cout << c.first << " : " << c.second << endl;
    }

    string name, surname;


    cout << "\nВведите имя: " << endl;
    cin >> name;

    cout << "\nВведите фамилию: " << endl;
    cin >> surname;

    char check = 'y';

    auto person = contacts.find(name+" "+surname);
    if (person != contacts.end()) {
        cout << "\nФИО: " << person->first << ", контакты: " << person->second << std::endl;
    }
    else {
        cout << "\nКонтакт не найден" << endl;
    }
        
    
    return 0;
}