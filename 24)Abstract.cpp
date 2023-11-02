#include <iostream>

using namespace std;

class Chips {
    public:
        virtual string getName() = 0;
};

class Lays : public Chips {
    public:
        string getName() {
            return  "Lemon Chips";
        }
};

class ChipsFactory {
    public:
        virtual Chips *createChips() = 0;
};


class LaysFactory : public ChipsFactory {
    public:
        Chips *createChips() {
            return new Lays();
        }
};


int main() {
    LaysFactory *laysFactory = new LaysFactory();
    Chips *lays = laysFactory->createChips();

    cout << lays->getName() << endl;

    delete laysFactory;
    delete lays;

    return 0;
}