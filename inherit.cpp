#include <iostream>

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() const {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

// Derived class: Dog
class Dog : public Animal {
public:
    // Overriding virtual function
    void makeSound() const override {
        std::cout << "Woof!" << std::endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    // Overriding virtual function
    void makeSound() const override {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal* animalPtr;

    Dog dog;
    Cat cat;

    Animal ani;
    ani.makeSound();

    // Pointing to Dog object
    animalPtr = &dog;
    animalPtr->makeSound(); // Output: Woof!

    // Pointing to Cat object
    animalPtr = &cat;
    animalPtr->makeSound(); // Output: Meow!

    return 0;
}
