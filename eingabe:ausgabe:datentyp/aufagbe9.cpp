#include <iostream>
#include <cmath>     // для M_PI
using namespace std;

int main() {
    double r, h, volumen, oberflaeche;

    cout << "Das Programm berechnet Volumen und Oberflaecheninhalt eines geraden Kreiszylinders." << endl;

    cout << "Eingabe von Radius und Hoehe in cm:" << endl;
    cout << "Radius in cm: ";
    cin >> r;
    cout << "Hoehe in cm: ";
    cin >> h;

    volumen = M_PI * r * r * h;
    oberflaeche = 2 * M_PI * r * (r + h);

    cout << "Das Volumen betraegt: " << volumen << " cm^3." << endl;
    cout << "Der Oberflaecheninhalt betraegt: " << oberflaeche << " cm^2." << endl;

    return 0;
}