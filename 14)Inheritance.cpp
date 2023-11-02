#include <iostream>

using namespace std;

class Vehicle {
    int wheels;

    public:
        void setWheels(int n) {
            this->wheels = n;
        }

        int getWheels() {
            return this->wheels;
        }
};

class Cycle {
    string brand;

    public:
        void setBrand(string brand) {
            this->brand = brand;
        }

        string getBrand() {
            return this->brand;
        }
};


class ElectricVehicle {
    int voltage;

    public:
        ElectricVehicle(){}

        ElectricVehicle(int voltage){
            this->voltage = voltage;
        }

        void setVoltage(int voltage){
            this->voltage = voltage;
        }

        int getVoltage() {
            return this->voltage;
        }
};


// single level inheritance
class Car : public Vehicle {
    string name;

    public:
        Car(){}

        Car(string name) {
            this->setWheels(4);
            this->name = name;
        }

        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return this->name;
        }
};


// multiple inheritance
class MotorCycle: public Cycle, Vehicle {
    public:
        MotorCycle() {
            this->setWheels(2);
            this->setBrand("Hercules");
        }
};


// multi level inheritance
class Maruti : public Car {
    string companyName;

    public:
        Maruti(string carName) {
            this->companyName = "Maruti";
            this->setName(carName);
            this->setWheels(4);
        }
};

// Hybrid Inheritance
class ElectricCar : public Car, ElectricVehicle {
    public:
        ElectricCar(string name, int voltage) {
            this->setWheels(4);
            this->setVoltage(voltage);
            this->setName(name);
        }
};


// Hierarchial Inheritance
class Honda : public Car {
    string companyName;

    public:
        Honda(string carName) {
            this->companyName = "Honda";
            this->setName(carName);
            this->setWheels(4);
        }
};

int main() {
    Car local("Ola");
    Maruti breeza("Breeza");
    Honda city("city");
    ElectricCar nexon("Nexon", 200);
    MotorCycle rapido;

    cout << local.getName() << endl;
    cout << breeza.getName() << endl;
    cout << city.getWheels() << endl;
    cout << nexon.getWheels() << endl;
    cout << rapido.getBrand() << endl;

    return 0;
}