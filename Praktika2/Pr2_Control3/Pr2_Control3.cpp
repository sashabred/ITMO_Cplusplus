#include <iostream>

int main() {

    system("chcp 1251");
    int coins[] = { 10, 5, 2, 1 };

    int money;
    std::cout << "Введите количество денег для размена: ";
    std::cin >> money;
    int i = 0, amount;

    while (money > 0) {
        if (money >= coins[i]) {
            amount = money / coins[i];

            std::cout << "К выдаче " << amount << " монет номиналом " << coins[i] << " рублей." << std::endl;
           
            money = money - amount * coins[i];
            i++;
        }
        else {
            i++;
        }
    }
}