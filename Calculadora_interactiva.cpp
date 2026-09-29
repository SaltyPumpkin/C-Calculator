#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "=======================================" << endl;
    cout << "      CALCULADORA INTERACTIVA           " << endl;
    cout << "=======================================" << endl;
    cout << "Esta calculadora permite realizar operaciones aritméticas, comparaciones y operaciones lógicas." << endl << endl;

    bool exitProgram = false;
    int choice;

    while (!exitProgram) {
        cout << "\nSelecciones el tipo de operación" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. División" << endl;
        cout << "5. Raíz cuadrada" << endl;
        cout << "6. Potencia" << endl;
        cout << "7. Módulo" << endl;
        cout << "8. Valor absoluto" << endl;
        cout << "9. Salir" << endl;
        cout << "Ingrese su elección (1-9): ";
        cin >> choice;

    

    double num1, num2, result;

    if (choice == 1) { // Suma
        cout << "Ingrese el primer número: "; 
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;
        result = num1 + num2;
        cout << "El resultado de la suma " << num1 << " + " << num2 << " es: " << result << endl;
    }
    else if (choice == 2) {  // Resta
        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;
        result = num1 - num2;
        cout << "El resultado de la resta " << num1 << " - " << num2 << " es: " << result << endl;
    }
    else if (choice == 3) { // Multiplicación
        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;
        result = num1 * num2;
        cout << "El resultado de la multiplicación " << num1 << " * " << num2 << " es: " << result << endl;
    }
    else if (choice == 4) { // División
        cout << "Ingrese el numerador: ";
        cin >> num1;
        cout << "Ingrese el denominador: ";
        cin >> num2;
        if (num2 == 0) {  // Evaluar si el denominador es cero
            cout << "Error: División por cero no está permitida." << endl;
        } else {
            result = num1 / num2;
            cout << "El resultado de la división " << num1 << " / " << num2 << " es: " << result << endl;
        }
    }
    else if (choice == 5) { // Raíz cuadrada
        cout << "Inrese un número: ";
        cin >> num1;
        if (num1 < 0) {
            cout << "Error: No se puede calcular la raíz cuadrada de un número negativo." << endl;
        } else {
            result = sqrt(num1);
            cout << "El resultado de la raíz cuadrada de " << num1 << " es: " << result << endl;
        }  
        }
    else if (choice == 6) { // Potencia
        cout << "Ingrese la base: ";
        cin >> num1;
        cout << "Ingrese el exponente: ";
        cin >> num2;
        result = pow(num1, num2);
        cout << "El resultado de " << num1 << " elevado a la potencia de "<< num2 << " es: " << result << endl;
    }
    else if (choice == 7) { // Módulo
        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;
        if (num2 == 0) {
            cout << "Error: División por cero no está permitida." << endl;
        } else {
            result = fmod(num1, num2);
            cout << "El resultado del módulo " << num1 << " % " << num2 << " es: " << result << endl;
        }
    }
    else if (choice == 8) { // Valor absoluto
        cout << "Ingrese un número: ";
        cin >> num1;
        result = fabs(num1);
        cout << "El valor absoluto de " << num1 << " es: " << result << endl;
    }
    else if(choice == 9) {  // Salir
        exitProgram = true;
        cout << "Saliendo del programa. ¡Hasta luego!" << endl;
    }
    else{
        cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
    }
    return 0;

}
}