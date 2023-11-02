#include <iostream>

using namespace std;

class Student{
	string name;

	public:
	Student(string name){
	this->name=name;
	}

	friend string getName(Student s);
};

string getName(Student s){
	return s.name;
}

int main(){
	Student s("Dilpreet");

	cout<<getName(s)<<endl;
	return 0;
}