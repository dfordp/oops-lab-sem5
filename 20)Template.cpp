#include <iostream>

using namespace std;


// class
template <typename T> class Name {
    T something;

    public:
        Name(T something){
            this->something = something;
        }

        T getSomething() {
            return this->something;
        }
};


// function
template <typename T> T returnSomething(T some) {
    return some;
}


int main() {
    Name<int> a(100);

    cout << a.getSomething() << endl;
    cout << returnSomething<int>(11) << endl;

    return 0;
}