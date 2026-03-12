#include <iostream>
using namespace std; 
int main (){
    double zahl1 = 3.24; // исп дял десятичных дробей 8 байтов, 15-16 знаокв 
    double zahl2 = -0.5;
    double summe = 0;

    summe = zahl1;
    summe += zahl2;
    summe += 7.44;

    cout <<"Summe:" <<summe<< endl;
    return 0;
}