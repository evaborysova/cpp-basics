#include<iostream>
using namespace std;

#define ENGLISH

#ifdef ENGLISH

#define ONE "one"
#define TWO "two"
#define THREE "three"
#define FOUR "four"

#else

#define ONE "eins"
#define TWO "zwei"
#define THREE "drei"
#define FOUR "vier"

#endif

int main (){

    int x;

    do {
  
    cout << "Please press a number between 1 and 4, for leaving the program press 0:" << endl;
    cin >> x;

    switch (x) {
    case 1:
        cout << ONE << endl;
        break;

    case 2:
        cout << TWO << endl;
        break;

    case 3:
        cout << THREE << endl;
        break;

    case 4:
        cout << FOUR << endl;
        break; }
    }
    while ( x != 0 );

return 0;
}