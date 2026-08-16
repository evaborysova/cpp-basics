#include<iostream>
#include<iomanip> 
using namespace std;
int main (){

    int x;
    int y;

    cout << " Das Programm ermittelt Tripel (a,b,c) positiver ganzer Zahlen, " << endl;
    cout << " fuer die gilt a^2 + b^2 = c^2. " << endl;
    cout << " Legen Sie ein Intervall fuer die Zahlen fest: " << endl;
    cout << " untere Grenze: " << endl;
    cin >> x;
    cout << " obere Grenze: " << endl;
    cin >> y;

    for ( int a = x; a <= y; a++ ){
        for ( int b = a; b <= y; b++ ){
            for ( int c = b; c <= y; c++ ){
               if (  a*a + b*b == c*c ){
             
                cout << setw(8) << a << setw(8) << b << setw(8) << c << endl;
               }
            }
        }
    }
return 0;
}