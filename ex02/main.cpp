#include "Array.hpp"  // Incluye la definición de la clase

int main() {
    std::cout << "Test: Crear array de enteros de tamaño 5\n";
    Array<int> arr(5);  // Crea un array de 5 enteros

    std::cout << "Tamaño del array: " << arr.size() << "\n";

    // Asignamos valores al array
    for (size_t i = 0; i < arr.size(); i++) {
        arr[i] = i * 10;
    }

    std::cout << "Contenido del array:\n";
    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";  // Imprime los valores
    }
    std::cout << "\n";

    // Prueba de copia
    std::cout << "Test: Copia de array\n";
    Array<int> copy = arr;
    copy[0] = 999;  // Modificamos la copia
    std::cout << "arr[0]: " << arr[0] << " (debe seguir siendo 0)\n";
    std::cout << "copy[0]: " << copy[0] << " (debe ser 999)\n";

    // Prueba de excepción
    try {
        std::cout << "Intentando acceder a un índice fuera de rango...\n";
        std::cout << arr[10] << "\n";  // Esto debe lanzar una excepción
    } catch (std::exception& e) {
        std::cerr << "Excepción atrapada: " << e.what() << "\n";
    }

    return 0;
}

