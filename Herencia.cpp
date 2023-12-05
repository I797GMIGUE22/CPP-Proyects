// La herencia es la capacidad de heredar características de una o mas clases base
// protected es como un private pero permite el uso de sus variables en otra clase

#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    static int amountAnimals;
    string food = "something";
public:
    Animal() {
        cout << "creating a new animal . . ." << endl;
        amountAnimals += 1;
    };
    ~Animal() {
        cout << "animal eliminated" << endl;
        amountAnimals -= 1;
    };
    static int getAmountAnimals() {
        return amountAnimals;
    };
    string getFood() {
        return food;
    }
    void eat() {
        cout << "this animal is eating " << food << " . . . nom nom" << endl;
    }
};

class Herviboro : public Animal {
public:
    Herviboro() {
        this->food = "grass";
    }
};

int Animal::amountAnimals = 0;

int main () {
    Animal *a = new Animal();
    Animal *b = new Animal();
    Herviboro *palo = new Herviboro();
    palo->eat();
    cout << "amount animals: " << Animal::getAmountAnimals() << endl;
    a->eat();
    delete a;
    delete b;
    delete palo;
    cout << "amount animals: " << Animal::getAmountAnimals() << endl;
    return 0;
}