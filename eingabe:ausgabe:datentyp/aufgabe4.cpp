#include<iostream>
using namespace std;

int main () {
    int dividend, divisor, rest;

    cout<< "geben sie ein divident ein: ";
    cin>>dividend;

    cout<<"geben sie ein divisior ein: ";
    cin>> divisor;

    rest = dividend % divisor;

    cout << " der divisionrest von " << dividend <<  " / "  <<  divisor <<  " ist "  <<  rest  <<endl;
    return 0;
}