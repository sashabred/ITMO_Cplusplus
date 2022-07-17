#include <iostream>
#include <string>
#include <map>
#include <windows.h>

using namespace std;


struct StudentRate {
     public:
         string Name;
         int Rate;
  };



int main()
{
    system("chcp 1251");


    string name;
    map<string, int> studentRateMap;

    StudentRate student1{ "Саша", 5 };
    StudentRate student2{ "Маша", 2 };
    StudentRate student3{ "Наташа", 5 };

    
    studentRateMap.insert(pair<string, int>(student1.Name, student1.Rate));
    studentRateMap.insert(pair<string, int>(student2.Name, student2.Rate));
    studentRateMap.insert(pair<string, int>(student3.Name, student3.Rate));

 
    for (auto& st : studentRateMap)
    {
        cout << st.first << " : " << st.second << endl; 
    }

     cout << "\nВведите имя: " << endl;
     cin >> name;
     int rate;
     char check = 'y';
    
     auto student = studentRateMap.find(name); 
     if (student != studentRateMap.end())
        cout <<"Студент: " << student->first << ", оценка = " << student->second << std::endl;
     else
        cout << "Введите отметку студента: " << endl;
        cin >> rate;
        StudentRate newStudent{ name, rate };
        studentRateMap.insert(pair<string, int>(newStudent.Name, newStudent.Rate));
        cout << "Студент: " << newStudent.Name << ", оценка: " << newStudent.Rate << endl;

     return 0;
}

   
    
