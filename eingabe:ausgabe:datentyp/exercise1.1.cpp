#include <iostream>
using namespace std;

int main (){

     double zahl, summe = 0;
     cout << " geben sie drei zahlen ein: ";

    cin>> zahl;
    summe+= zahl;

    cin>> zahl;
    summe += zahl;

    cin>> zahl;
    summe += zahl; 

    cout<< " die summe ist: " << summe << endl;

    return 0;
}
