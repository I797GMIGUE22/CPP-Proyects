//Varias cosas usen la misma dirección de memoria
//Intercambiar elementos entre clases

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    int age;
    string name;
    int *a;
public:
    static int amountPersons; //? Tiene que ser publico para poder ser accesible desde fuera
    void Saludar () {
        cout << "Hello I'm " << name << " | Age: " << age << endl;
    }

    Person(string name, int age) {
        this->name = name;
        this->age = age;
        amountPersons += 1;
        Saludar();
    }

    Person &UpdateName (string newName) {
        name = newName;
        return *this;
    }

    Person &UpdateAge(int newAge) {
        age = newAge;
        return *this;
    }

    ~Person() {
        cout << name << " ha sido destruido(a)";
    }
};

int Person::amountPersons = 0; //! Evitar multiples copias, hay solo una para todos

int main () {
    Person p1 = Person("Ximena", 34);
    Person p2 = Person("Pedro", 7);
    cout << "Amount persons: " << Person::amountPersons << endl;
    p1.UpdateAge(22).UpdateName("Pablo");
    cout << (int *) &p1.UpdateAge(22 + 4);
    cout << "| And |";
    cout << (int *) &p1.UpdateName("Francisco") << endl;
    p1.Saludar();
    return 0;
}