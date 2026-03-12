#include <iostream>
#include <cmath>   // для функции pow()
using namespace std;

int main() {
    double a, x, ergebnis;

    cout << "Das Programm berechnet a hoch x." << endl;

    cout << "Geben Sie a ein: ";
    cin >> a;

    cout << "Geben Sie x ein: ";
    cin >> x;

    ergebnis = pow(a, x); // a hoch x

    cout << a << " hoch " << x << " = " << ergebnis << endl;

    return 0;
}