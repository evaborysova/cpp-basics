#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<" geben sie eine zahl ein ";
    cin >> n;

    switch(n){
        case 1:
        cout <<" montag";
        break;

        case 2:
        cout << " dienstag ";
        break;

        case 3:
        cout << "mittwoch ";

        default:
        cout <<" ungultige zahl ";
    }
    return 0;
}
