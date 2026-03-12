#include <iostream>
using namespace std;

int main(){
    double x, y, c; // временная переменная 
    cout << "x = "; // 5
    cin >> x;
    cout << "y = "; // 9
    cin >> y;

    c = y; // 9
    y = x; // 5
    x = c; // 9

    cout << "Die Zahlen werden jetzt vertauscht." << endl
         << "x = " << x << endl
         << "y = " << y << endl;

    return 0;
}