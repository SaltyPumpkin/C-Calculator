#include <iostream>
#include <string>
#include <sstream>

using namespace std;


// Devuelve el valor de cada símbolo romano
int valorRomano(char letra) {

    if (letra == 'I') 
        return 1;
    if (letra == 'V') 
        return 5;
    if (letra == 'X') 
        return 10;
    if (letra == 'L') 
        return 50;
    if (letra == 'C') 
        return 100;
    if (letra == 'D') 
        return 500;
    if (letra == 'M') 
        return 1000;

    return 0;
}


// Comprueba si toda la palabra contiene
// solamente símbolos romanos
bool esRomano(string palabra) {

    for (char letra : palabra) {

        if (valorRomano(letra) == 0) {
            return false;
        }
    }

    return true;
}


// Convierte el número romano a arábigo
int convertirRomano(string romano) {

    int suma = 0;

    for (int i = 0; i < romano.length(); i++) {

        int actual = valorRomano(romano[i]);

        // Comprobamos si existe un número a la derecha
        if (i + 1 < romano.length()) {

            int siguiente = valorRomano(romano[i + 1]);

            // Si el actual es menor, se resta
            if (actual < siguiente) {
                suma = suma - actual;
            }
            else {
                suma = suma + actual;
            }

        }
        else {
            // Último número
            suma = suma + actual;
        }
    }

    return suma;
}


int main() {

    string texto;

    cout << "Ingrese un texto en minuscula con numeros romanos en mayusculas: ";
    getline(cin, texto);


    // Agregamos espacios alrededor de , y .
    // para poder tratarlos como elementos separados
    string textoSeparado = "";

    for (char caracter : texto) {

        if (caracter == ',' || caracter == '.') {
            textoSeparado += " ";
            textoSeparado += caracter;
            textoSeparado += " ";
        }
        else {
            textoSeparado += caracter;
        }
    }


    stringstream ss(textoSeparado);

    string palabra;
    string resultado = "";


    while (ss >> palabra) {

        // Si es un número romano
        if (esRomano(palabra)) {

            resultado += " ";
            resultado += to_string(convertirRomano(palabra));

        }

        // Si es coma o punto
        else if (palabra == "," || palabra == ".") {

            resultado += palabra;

        }

        // Texto normal
        else {

            resultado += " ";
            resultado += palabra;

        }
    }


    cout << resultado << endl;

    return 0;
}