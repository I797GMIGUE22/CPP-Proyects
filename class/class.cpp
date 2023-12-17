// Class Objects -> default -> private attributes

// Las classes en c++ y c# tienen dos espacios public y private
    // En public: Los valores se pueden leer desde fuera de los objetos
    // En private: No se pueden leer desde fuera

#include <iostream>
#include <string>

using namespace std;

class Persona {
public: // poder leer desde fuera de los objetos
    string nombre = "Diana"; // Propiedad declarada en clase = campo de clase <- field
    int edad = 26;
    void saludar () {
        cout << "Hello, I'm " << nombre << endl;
    }
};

int main () {
    Persona p = Persona();
    Persona *p2 = new Persona(); // (uso de memoria dinámica)

    p2->nombre = "Ximena";

    p.saludar();

    p2->saludar();

    delete p2;
}