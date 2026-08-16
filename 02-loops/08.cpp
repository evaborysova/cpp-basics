#include<iostream>
#include<string>
using namespace std;
int main (){

    int rest = 0;
    int quotient = 0;
    int zahl;
     int basis;
    cout << " Bitte eine positive ganze Zahl eingeben: " << endl;
    cin >> zahl;

    do {
      
         cout << " Bitte ein Basis eingeben: " << endl;
         cin >> basis;
        } while ( basis < 2 || basis > 16 ); 

        string ergebnis = "";

     do {

        quotient = zahl / basis;
        rest = zahl % basis; // rest = zahl - (quotient * basis );
        zahl = quotient;
        
        char zeichen; 

        if ( rest < 10 ){ 
     zeichen = '0' + rest; } 
     else { zeichen = 'A' + (rest - 10);
     } 
     ergebnis = zeichen + ergebnis; } while (zahl > 0); 

     cout << "Ergebnis: " << ergebnis << endl; 

     return 0;

}