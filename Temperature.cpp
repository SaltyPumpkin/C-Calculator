#include <iostream> 
using namespace std; // Declaración de la constante para la temperatura mínima (cero absoluto)

const double min_temp = -273.15; // Función para validar la temperatura ingresada

double Temperatura(double temp) {  // Verifica si la temperatura ingresada es menor que el cero absoluto
    if (temp < min_temp) {  // Verifica si la temperatura es menor que el cero absoluto
        cout << "Error: Temperatura por debajo del cero absoluto." << endl;  // Muestra un mensaje de error si la temperatura es inválida
    } else {
        cout << "Temperatura válida: " << temp << " °C" << endl; // Muestra la temperatura válida ingresada
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