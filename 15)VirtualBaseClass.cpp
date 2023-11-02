#include <iostream>

using namespace std;

class A {
    int a = 12;

    public:
        int getA() {
            return a;
        }
};


class B : public virtual A {};
class C : public virtual A {};


class D : public B, C {
    int a = 14;

    public:
        int getA() {
            return this->a;
        }
};


int main() {
    A a;
    B b;
    D d;

    cout << a.getA() << endl;
    cout << b.getA() << endl;
    cout << d.getA() << endl;

    return 0;
}