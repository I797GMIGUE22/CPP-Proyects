/*
    * = obtener un valor almacenado en una dirección de memoria
    & = obtener la dirección de memoria a partir de una cierta variable ej: &variable = 0x;
    (int*) = entero de puntero (necesario para poder mostrar la dirección de memoria);
    (tipo a pasar) = cast;
*/
#include <iostream>

using namespace std;

int main() {
    char letra = 'A'; // letra y su puntero tienen el mismo tipo de dato
    char *puntero = &letra; // como tal ahora la variable puntero tiene en su interior la dirección de memoria de letra

    cout << "letra: " << letra << endl;
    cout << "letra a partir de puntero: " << *puntero << endl;
    cout << "Direccion de memoria de letra: " << (int *)&letra << endl;
    cout << "Direccion de memoria de puntero: " << (int *)&puntero << endl;
    cout << "Direccion de memoria de letra a partir de puntero: " << (int *)puntero << endl;
}