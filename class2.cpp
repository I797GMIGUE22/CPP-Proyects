// Se elimina automáticamente cuando acaba la función main (menos los que se guardaron en la memoria dinámica)
// Se elimina de forma manual con delete (cuando se reserva un espacio en memoria por medio de punteros)

#include <iostream>
#include <string>

using namespace std;

class Persona {
public:
    string nombre;
    void saludar () {
        cout << "Hello, I'm " << nombre << endl;
    }
    Persona(string n) { // Constructor
        nombre = n;
    }
    ~Persona() { // Destructor <- limpiar un proceso en memoria <- cuando se use la memoria dinámica en atributos de la clase (punteros)
        cout << "Destruido " << nombre << endl;
    }
};

int main () {
    cout << "hello world" << endl;
    Persona p = Persona("Pedro");
    Persona p2 = Persona("Ximena");
    Persona *p3 = new Persona("Marcelo");

    p.saludar();
    p2.saludar();
    p3->saludar();
}