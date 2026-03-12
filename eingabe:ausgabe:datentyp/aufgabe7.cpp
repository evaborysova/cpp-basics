#include<iostream>
#include <cmath>     // для sin(), cos() и константы M_PI
using namespace std;

int main() {
    double grad, rad, sinWert, cosWert; // grad - угол в градусах, рад - переводит градусы в радианы

    cout << "Geben Sie den Winkel in Grad ein: ";
    cin >> grad;

    // перевод градусов в радианы, комп считывает тригонометрию только в радианах 
    //M_PI — это константа, то есть “зашитое в библиотеке число”, равное:
    //M_PI = 3.141592653589793 Это и есть число π (пи).
    rad = grad * M_PI / 180.0; // поделить на 180

    // вычисление синуса и косинуса в радианах 
    sinWert = sin(rad);
    cosWert = cos(rad);

    cout << "Sinus(" << grad << ") = " << sinWert << endl;
    cout << "Cosinus(" << grad << ") = " << cosWert << endl;

    return 0;
}