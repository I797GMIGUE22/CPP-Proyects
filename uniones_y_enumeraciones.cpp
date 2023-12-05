// union -> guardar diversos datos de diferentes tipos en un mismo espacio de memoria
// union y enum -> funcion -> guardar datos que no se usaran al mismo tiempo y ahorrar espacio
// union -> tambien permite interpretar un valor que le demos como distintos tipos de datos
#include <iostream>

using namespace std;

int main() {
    union numeroLetra {
        int numero;
        char letra;
    };

    numeroLetra x = {'A'}; // 'A' como valor inicial <- con este basta

    x.numero = 97; // 97 como valor personalizado <- opcional

    cout << "Union:" << endl;
    cout << "\tx como numero: " << x.numero << endl;
    cout << "\tx como letra: " << x.letra << endl;

    enum dias_semana {lunes = 'l', martes = 'm', miercoles = 'x'}; // default return int data

    enum indexes {a, b, c}; // sin valor inicial default return 0, 1, 2... int data
                            // if (a == 9) b=10 and c=11;
    indexes indexA = a;
    indexes indexC = c;

    dias_semana dia = martes;
    dias_semana *unitMemory = &dia; // puntero de dia

    cout << "\nENUM:" << endl;

    cout << "\nTest without initialization:" << endl;
    cout << "\ta index: " << indexA << endl;
    cout << "\tc index: " << indexC << endl;

    cout << "Test with initialization:" << endl;
    cout << "\tValor de dia normal: " << dia << endl;
    cout << "\tValor de dia (char): " << (char) dia << endl;

    // Punteros
    cout << "Punteros:" << endl;
    cout << "\t" << (int *)&dia << endl;
    cout << "\t" << (int *)unitMemory;
}