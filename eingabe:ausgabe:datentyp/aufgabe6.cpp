#include<iostream> 
#include <cmath>     // библиотека для log()
using namespace std;

int main() {
    double a, x, ergebnis;

    cout << "Das Programm berechnet den Logarithmus zur Basis a von x." << endl;

    cout << "Geben Sie a ein: ";
    cin >> a;

    cout << "Geben Sie x ein: ";
    cin >> x;

    ergebnis = log(x) / log(a); // это натуральный логорифм, дает лог числа х по основанию а

    cout << "Ergebnis: " << ergebnis << endl;

    return 0;
}