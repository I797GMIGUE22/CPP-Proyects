// CREAR OBJETOS PÚBLICOS WITH STRUCT
// Struct = crear objetos públicos
// Persona() o new Persona()

// Variables momentáneas usan memoria dinámica
// Variables normales usan memoria estática;

#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombre;
    int edad;
};


int main() {
    Persona *pedro = new Persona(); // variable momentánea con *, se compila durante la ejecución (uso de memoria dinamica)
    pedro->nombre = "Pedro";
    pedro->edad = 26; // con * se utiliza ->
    cout << pedro->nombre << endl;
    cout << pedro->edad << endl;
    delete pedro; // con * se puede eliminar la variable momentánea
}