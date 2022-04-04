#include <iostream>
using namespace std;
int main (){

    int millas;
    const int millaMarina = 1852;
    const int kilometros = 1000;
    int total;

    int totalKilometros;
    int totalMetros;

    cout << "Ingresa una distancia en millas: ";
    cin >> millas;

    total = millas * millaMarina;

    cout << "La distancia es de: " << millas << " millas" << endl; 
    cout << "la distancia en metros es de: " << total << endl;


    totalKilometros = total / kilometros;
    totalMetros = total % kilometros;

    cout << "La distancia en kilometros es de: " << totalKilometros << " kilometros y " << totalMetros << " metros.";

    return 0;
}   