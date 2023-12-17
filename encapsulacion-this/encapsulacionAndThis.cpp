// Protected = privado pero podemos acceder a ellos a traves de la herencia
// Persona(string n, int e) : nombre(n), edad(e)  {} //! Asignación inline

#include <iostream>
#include <string>

using namespace std;

class Persona {
private: // * Better in Private. Acceder a los atributos en private mediante métodos
    string nombre;
    int edad;
public:
    void saludar () {
        cout << "Hello, I'm " << nombre << " | edad: " << edad << endl;
    }
    Persona(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
        saludar();
    }
    void actualizarDatos (string nuevoNombre, int nuevaEdad) {
        this->nombre = nuevoNombre;
        this->edad = nuevaEdad;
    }

    Persona &actualizarNombre (string nuevoNombre) { //! Obtener el objeto y poder concatenar varios métodos con &
        this->nombre = nuevoNombre;
        return *this;
    }

    Persona &actualizarEdad (int nuevaEdad) {
        this->edad = nuevaEdad;
        return *this;
    }

    ~Persona() {
        cout << nombre << " destruido" << endl;
    }
};

int main() {
    cout << "Hello world" << endl;
    Persona p1 = Persona("Norman", 34);
    cout << (int*) &p1.actualizarNombre("Pedro").actualizarEdad(43) << " And " << (int*) &p1 << endl;

    p1.saludar();
}