#include <iostream>

using namespace std;

class Student{
	string name;

	public:
	Student(string name){
		this->name=name;
	}


	string getName(){
		return this->name;
	}
};

Student getInstance(string name){
	return Student(name);
}

int main(){
	Student st = getInstance("Dilpreet");

	cout << st.getName()<<endl;

	return 0;
}