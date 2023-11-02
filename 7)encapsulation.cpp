#include <iostream>

using namespace std;

class BioData{
	string name;
	int age;

	public:
	BioData(string name,int age){
	this->name=name;
	this->age=age;
	}

	string getBioData(){
	return "My Name is," + this->name + ". My age is " + to_string(this->age) + " years.";
	}
};

int main(){
	BioData b("Dilpreet" , 21);

	cout<<b.getBioData()<<endl;

	return 0;
}