#include <iostream>

using namespace std;

class Base {
    public:
        virtual string print() {
            return "Base Class";
        }
};


class Derived : public Base {
    public:
        string print() {
            return "Derived Class";
        }
};


int main() {
    Base *b = new Derived();
    Base *c = new Base();

    cout << b->print() << endl;
    cout << c->print() << endl;

    delete b;
    delete c;

    return 0;
}