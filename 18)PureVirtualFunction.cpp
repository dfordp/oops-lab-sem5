#include <iostream>

using namespace std;

class Food {
    public:
        virtual string sayName() = 0;
};

class Samosa : public Food {
    public:
        string sayName() {
            return "Samosa";
        }
};

int main() {
    Samosa s;

    cout << s.sayName() << endl;

    return 0;
}