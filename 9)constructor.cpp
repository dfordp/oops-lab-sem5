#include <iostream>

using namespace std;

class Integer{
	int num;

	public:
	//default constructor
	Integer(){
	this->num = 0;
	}

	//parameterized constructor
	Integer(int num){
	this->num = num;
	}

	//copy constructor
	Integer(Integer &i){
	this->num = i.getNum();
	}

	int getNum(){
	return this->num;
	}
};

int main(){
	Integer i ,j(12);
	Integer k(j);

	cout<< i.getNum() << endl;
	cout<< j.getNum() << endl;
	cout<< k.getNum() << endl;

	return 0;
}