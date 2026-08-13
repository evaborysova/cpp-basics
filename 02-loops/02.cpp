#include<iostream>
using namespace std;

int main (){
    double x;
    do {
    cout << " Bitte eine Zahl eingeben, die groesser oder gleich 12 " << endl;
    cout << " und kleiner oder gleich 17 ist: " << endl;
    cin >> x;

    } while ( x < 12 || x > 17 );
    cout << " Die eingegebene Zahl lautet : " << x << endl;
    return 0;
}