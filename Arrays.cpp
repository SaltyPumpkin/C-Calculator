#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

array<int, 5> arr = {1, 2, 3, 4, 5}; // Matriz de enteros de tamaño 5

int main() {
    for (int i = 0; i < arr.size(); ++i) { // Iterar a través de la matriz y mostrar los elementos
        cout << arr[i] << " "; // Mostrar el elemento en la posición i
    }

    sort(arr.begin(), arr.end(), [](int a, int b) { return a > b; }); // Ordenar la matriz en orden descendente usando una función lambda
    for (int i = 0; i < arr.size(); ++i) { // Iterar a través de la matriz ordenada y mostrar los elementos
        cout << arr[i] << " "; 
    }
    return 0;
}