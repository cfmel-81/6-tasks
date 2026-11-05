#include <iostream>
#include <cmath> 
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    cout << "Введите номер месяца n: ";
    cin >> n;

    if (n <= 0) {
        cout << "n должно быть больше 0\n";
        return 1;
    }

    const double S0   = 1000.0;  
    const double rate = 0.02; 

    double Sn   = S0 * pow(1 + rate, n);       
    double Sn_1 = S0 * pow(1 + rate, n - 1); 
    double increase = Sn - Sn_1;               

    cout << "Сумма вклада к концу " << n << "-го месяца: "
         << Sn << " руб.\n";
    cout << "Прирост за " << n << "-й месяц: "
         << increase << " руб.\n";

    return 0;
}