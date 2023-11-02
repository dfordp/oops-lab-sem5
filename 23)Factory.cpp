#include <iostream>

using namespace std;


class Animal {
    public:
        virtual string speak() = 0;
};


class Cat : public Animal {
    public:
        string speak() { 
            return "meow"; 
        }
};

class Dog : public Animal {
    public:
        string speak() { 
            return "woof"; 
        }
};


class AnimalFactory {
    public:
        static Animal *createAnimal(string name) {
            if(name == "dog") {
                Animal *dog = new Dog();
                return dog;
            } else {
                Animal *cat = new Cat();
                return cat;
            }
        }
};


int main() {
    Animal* d = AnimalFactory::createAnimal("dog");
    cout << d->speak() << endl;

    return 0;
}