#include <iostream>

using namespace std;

class Base {
    public:
        virtual ~Base() {
            cout << "Base Destroyed!!" << endl;
        }
};

class Derived : public Base {
    public:
        ~Derived() {
            cout << "Derived Destroyed!!" << endl;
        }
};

int main() {
    Base *b = new Derived();
    Base *c = new Base();

    delete b;
    delete c;

    return 0;
}