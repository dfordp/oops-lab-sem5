#include <iostream>

using namespace std;

class Singleton {
    private:
        static Singleton *s;

        Singleton(){}

    public:
        static Singleton &getInstance() {
            if(s == nullptr) {
                s = new Singleton();
            }
            return *s;
        }
};

Singleton* Singleton::s = nullptr;

int main() {
    Singleton& s = Singleton::getInstance();
    Singleton& r = Singleton::getInstance();

    cout << &s << endl;
    cout << &r << endl;

    return 0;
}