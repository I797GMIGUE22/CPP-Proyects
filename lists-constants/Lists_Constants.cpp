// endl = endLine cambio de linea <-- es como un salto de linea
// ? auto = declarar una variable que cuenta con un valor de tipo complejo
#include <iostream>
#include <list> // declarate lists the other way, a partir de classes
#include <string>

using namespace std;

int main() {
    const char letra = 'a';
    int listaEdades[] = {18, 24, 16}; // Tradicional
    listaEdades[1] = 22;
    cout << letra << endl;
    cout << listaEdades[1] << endl;

    list<char> letters{'c', '+'}; // with library, now letters is an object from the class letters

    letters.push_back('+');

    for(auto letter : letters) cout << letter;

}