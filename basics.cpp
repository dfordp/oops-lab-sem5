#include <iostream>
#include <string>

using namespace std;


class employee {

private:
    
    int id;
    string name;
    int age;
    int salary;
    string address;

public:

    void createEmployee(int i, string n , int a , int sal , string add) {
        id = i;
        name = n;
        age = a;
        salary = sal;
        address = add;
     }

    void show() {
        cout << "Employee ID " << id << endl;
        cout << "Name of Employee " << name << endl;
        cout << "Age of Employee " << age << endl;
        cout << "Salary of Employee " << salary << endl;
        cout << "Address of Employee " << address << endl;
    }
};

int main()
{
    employee emp;
    emp.createEmployee(69, "aman", 19, 12000000, "YMCA faridabad");
    emp.show();
    return 0;
}
