#include <iostream>

using namespace std;

int main () {
    char a[] = {'h', 'o', 'l', 'a'};

    for (int i = 0; i < 4; i++) {
        cout << (int *) &a[0] << endl;
    }

    cout << "\nHasta aquí" << endl;

    char *b = (char * ) "hola";

    for (int i = 0; i < 4; i++) {
        cout << (int *)&b[0] << endl;
    }
}