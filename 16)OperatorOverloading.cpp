#include <iostream>

using namespace std;


class Integer {
    int num;

    public:
        Integer(int num) {
            this->num = num;
        }

        // Unary Operator
        void operator ++() {
            this->num = this->num + 1;
        }

        // Binary Operator
        Integer operator +(Integer i) {
            int addNum = this->num + i.getNum();

            return Integer(addNum);
        }

        int getNum() {
            return this->num;
        }
};


int main() {
    Integer a(10), b(20);

    a.operator++();
    cout << a.getNum() << endl;
    
    Integer c = a + b;
    cout << c.getNum() << endl;

    return 0;
}