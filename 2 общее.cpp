#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a, b, c;
    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Треугольник существует";

        int maxSide = a;
        if (b > maxSide) maxSide = b;
        if (c > maxSide) maxSide = c;

        int sumSquaresOthers = 0;
        if (maxSide == a)      sumSquaresOthers = b * b + c * c;
        else if (maxSide == b) sumSquaresOthers = a * a + c * c;
        else                   sumSquaresOthers = a * a + b * b;

        if (maxSide * maxSide < sumSquaresOthers) {
            cout << " и он остроугольный" << endl;
        } else if (maxSide * maxSide == sumSquaresOthers) {
            cout << " и он прямоугольный" << endl;
        } else {
            cout << " и он тупоугольный" << endl;
        }

    } else {
        cout << "Треугольника не существует" << endl;
    }

    return 0;
}