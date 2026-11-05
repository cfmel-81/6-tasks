#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

bool isTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    srand(time(0));

    int N;
    cout << "Введите количество экспериментов N: ";
    cin >> N;

    if (N <= 0) {
        cout << "N должно быть больше 0\n";
        return 1;
    }

    int success = 0;

    for (int i = 0; i < N; i++) {
        double a = rand() / (RAND_MAX + 1.0);
        double b = rand() / (RAND_MAX + 1.0);
        double c = rand() / (RAND_MAX + 1.0);

        if (isTriangle(a, b, c))
            success++;
    }

    cout << "Всего экспериментов:        " << N << "\n";
    cout << "Троек, образовавших треугольник: " << success << "\n";
    cout << "Отношение:                  " << success << " : " << N << "\n";
    cout << "Доля:                       " << (double)success / N << "\n";

    return 0;
}