#include <iostream>
#include <numeric>
#include <Windows.h>
using namespace std;


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a, b;
    cout << "Введите 2 числа ";
    cin >> a >> b;

    if (gcd_manual(a, b) == 1)
        cout << "Взаимно простые";
    else
        cout << "Не взаимно простые";

    return 0;
}