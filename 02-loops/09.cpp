#include<iostream>
using namespace std;
int main (){
    int zahl;
    int result = 1;
    cout << " Bitte eine natuerliche Zahl eingeben: " << endl;
    cin >> zahl;

    for (int x = 1; x <= zahl; x++ ){

result = x*result; 
cout << result;

    }
    return 0;
}