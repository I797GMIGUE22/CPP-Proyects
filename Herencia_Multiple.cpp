// La herencia multiple es la capacidad de heredar características de mas de una clase base
// protected es como un private pero permite el uso de sus variables en otra clase

#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    static int amountAnimals;
    string food = "something";

public:
    Animal()
    {
        cout << "creating a new animal . . ." << endl;
        amountAnimals += 1;
    };
    ~Animal()
    {
        cout << "animal eliminated" << endl;
        amountAnimals -= 1;
    };
    static int getAmountAnimals()
    {
        return amountAnimals;
    };
    string getFood()
    {
        return food;
    }
    void eat()
    {
        cout << "this animal is eating " << food << " . . . nom nom" << endl;
    }
};

class Herviboro : public Animal
{
public:
    Herviboro() : Animal()
    {
        this->food = "grass";
    }
};

class Carnivoro : public Animal
{
public:
    Carnivoro () : Animal ()
    {
        this->food = "met";
    }
    void search()
    {
        cout << "The animal is searching . . ." << endl;
    }
};

int Animal::amountAnimals = 0;

int main()
{
    Animal *a = new Animal();
    Animal *b = new Animal();
    Herviboro *duck = new Herviboro();
    duck->eat();
    cout << "amount animals: " << Animal::getAmountAnimals() << endl;
    a->eat();
    delete a;
    delete b;
    delete duck;
    cout << "amount animals: " << Animal::getAmountAnimals() << endl;
    return 0;
}