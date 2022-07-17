// Pr4_Control2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool Input(int& a, int& b) {
   
    system("chcp 1251"); 
  
    std::cout << " Введите значение a";
    if (!(std::cin >> a >> b)) {
        return false;            
    }
    return true;
}
   
    


int main()
{
    system("chcp 1251");
 

    int a, b;

    if (Input(a, b) == false) // if(!Input(a,b))
    {
        std::cerr << "error";
        return 1;
    }
    int s = a + b;
    std::cout << "Результат: " << s;
    return 0;
}

