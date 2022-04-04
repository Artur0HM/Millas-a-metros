#include <iostream>
using namespace std;
int main (){

    int millas;
    const int millaMarina = 1852;
    int total;

    cout << "Ingresa una distancia en millas: ";
    cin >> millas;

    total = millas * millaMarina;

    cout << "La distancia en millas es de: " << millas << " la distancia en metros es de: " << total    ;


    return 0;
}