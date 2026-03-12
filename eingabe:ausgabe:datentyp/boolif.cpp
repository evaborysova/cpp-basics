#include <iostream>
int main() {
    using namespace std;
    int n,i;
    bool prim = true; // тип переменной как int
    cout <<" n = "; cin>>n;

    if (n==1) prim = false;
    else {
        i = 2;
        while (i<n-1){
            if (n%i==0) prim = false; // % знак остаток делителя 0 значит нашли еще один делитель и это не простое число
             i = 1 + i; }
    }
    cout<<" ist n eine primazahl?"<<prim;
    return 0;
}