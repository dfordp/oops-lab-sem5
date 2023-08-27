#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int ft = 0, int inch = 0) {
        feet = ft;
        inches = inch;
    }

    // Destructor
    ~Distance() {
        // Nothing to clean up
    }

    // Copy constructor for deep copy
    Distance(const Distance& other) {
        feet = other.feet;
        inches = other.inches;
    }

    void setData(int ft, int inch) {
        feet = ft;
        inches = inch;
    }

    Distance add(Distance d) {
        Distance ans;
        ans.feet = feet + d.feet;
        ans.inches = inches + d.inches;
        if (ans.inches >= 12) {
            ans.feet += ans.inches / 12;
            ans.inches = ans.inches % 12;
        }
        return ans;
    }

    void showData() {
        cout << feet << "'" << " " << inches << "''" << endl;
    }
};

class DerivedDistance : public Distance {
public:
    // Additional functions or members specific to the derived class
};

int main() {
    Distance d1;
    d1.setData(4, 10);
    d1.showData();

    Distance d2;
    d2.setData(2, 8);
    d2.showData();

    Distance d3 = d1.add(d2);
    d3.showData();

    DerivedDistance dd1;
    dd1.setData(3, 6);
    dd1.showData();

    return 0;
}
