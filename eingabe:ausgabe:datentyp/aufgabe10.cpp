#include <iostream>
#include <cmath>      // для sqrt()
using namespace std;

int main() {
    double a, h, volumen, oberflaeche, grundflaeche;

    cout << "Das Programm berechnet Volumen und Oberflaecheninhalt eines regelmaessigen dreiseitigen Prismas." << endl;

    cout << "Eingabe von Seitenlaenge und Hoehe in cm:" << endl;
    cout << "Seitenlaenge in cm: ";
    cin >> a;
    cout << "Hoehe in cm: ";
    cin >> h;

    // площадь основания, корень-функция-square root из 3 делить на 4
    grundflaeche = (sqrt(3) / 4) * a * a; 
    volumen = grundflaeche * h; // объем призмы 
    oberflaeche = 2 * grundflaeche + 3 * a * h; // площадь всей поверхности 

    cout << "Das Volumen betraegt: " << volumen << " cm^3." << endl;
    cout << "Der Oberflaecheninhalt betraegt: " << oberflaeche << " cm^2." << endl;

    return 0;
}