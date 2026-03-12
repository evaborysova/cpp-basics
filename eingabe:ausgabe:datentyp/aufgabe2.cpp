#include <iostream>
using namespace std;

int main () {
    int temp, x, y;
    cout <<"x = "; // 5
    cin >> x;
    cout <<"y= "; // 3
    cin >>y;
     
     temp = x; // 5
     x=y; //3
     y = temp; //5

     cout <<"Die Zahlen werden jetzt vertauscht." << endl;
     cout <<"x= " <<x<< endl;
     cout <<"y= " <<y<< endl;
    
return 0;
}