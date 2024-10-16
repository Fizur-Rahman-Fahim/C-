#include <iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* myAnimal = new Dog();
    myAnimal->makeSound(); // Calls the Dog's makeSound() method at runtime
    delete myAnimal; // Clean up
    return 0;
}
