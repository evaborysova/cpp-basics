#include<iostream>
using namespace std;

#define EINS "eins"
#define ZWEI "zwei"
#define DREI "drei"
#define VIER "vier"

int main (){

    int x;
    cout << " geben sie eine zahl ein : " << endl;
    cin >> x;

    switch (x) {
    case 1:
        cout << EINS;
        break;

    case 2:
        cout << ZWEI;
        break;

    case 3:
        cout << DREI;
        break;

    case 4:
        cout << VIER;
        break;
}
return 0;
}