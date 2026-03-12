#include <iostream>
#include <iomanip>  // input output manioulators; управ-е тем как числа выводятся на экран

int main (){
    using namespace std;
     cout << "Das Ergebnis lautet " << setprecision(2) << 2.345649 << endl; // shows how many numbers are gonna be in the answer
    cout << "Das Ergebnis lautet " << setprecision(3) << 2.345649 << endl;
    cout << "Das Ergebnis lautet " << setprecision(9) << 2.345649 << endl;

    return 0;
}