#include<iostream>
#include<iomanip>
using namespace std;

int main (){

    int x, y;
    cout << " give in the length : " << endl;
    cin >> x;
    cout << " give in the width : " << endl;
    cin >> y;

    for ( int c = 1; c <= x; c ++ ){
        for ( int b = 1; b <= y; b ++){
          cout << setw (10) << "+";
        }
        cout << endl;
    }
    return 0;
}