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

int main(){
	Student st("Dilpreet");

	cout<<st.getName()<<endl;

	return 0;
}