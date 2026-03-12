#include<iostream>
using namespace std;

int main () {
    double eingabe, summe = 0.0; // дробь + переменная, которую вводим 

    cout<<" geben sie 3 zahlen ein. " <<endl;
    cin>> eingabe; summe += eingabe;
    cin>> eingabe; summe+= eingabe;
    cin>> eingabe; summe+= eingabe; 

    cout<< " summe: " << summe << endl;
    return 0;
}