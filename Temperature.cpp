#include <iostream>
using namespace std;

const double min_temp = -273.15;

double Temperatura(double temp) {
    if (temp < min_temp) {
        cout << "Error: Temperatura por debajo del cero absoluto." << endl;
    } else {
        cout << "Temperatura válida: " << temp << " °C" << endl;
    }

    return temp;
}

int main() {
    double temp;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temp;

    Temperatura(temp);

    return 0;
}