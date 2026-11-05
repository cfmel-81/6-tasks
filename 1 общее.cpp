#include <iostream>
#include <Windows.h>
int main() {
    
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int n;
    std::cout << "Введите число грибов: ";
    std::cin >> n;

    if (n == 0) {
        std::cout << "мы не собрали грибов в лесу" << std::endl;
    } else {
        std::cout << "мы собрали " << n << " гриб";

       
        int last = n % 10;
        int lastTwo = n % 100;


        if (lastTwo >= 11 && lastTwo <= 14) {
            std::cout << "ов";
        } else if (last == 1) {
            std::cout << "";
        } else if (last >= 2 && last <= 4) {
            std::cout << "";
        } else {
            std::cout << "ов";
        }

        std::cout << " в лесу" << std::endl;
    }

    return 0;
}