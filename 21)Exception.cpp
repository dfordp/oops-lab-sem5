#include <iostream>

using namespace std;

class Integer {
    public:
        static void printNum(int num) {
            try {
                if(num < 10) {
                    throw(string("Less Num!!"));
                }
            } catch (string e) {
                cout << e << endl;
            }
        }
};

int main() {
    Integer i;

    i.printNum(8);

    return 0;
}