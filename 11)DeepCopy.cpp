#include <iostream>

using namespace std;

class Integer{
	int *num_ptr;

	public:
	Integer(int num){
	this->num_ptr= new int;
	*this->num_ptr = num;
	}

	Integer(Integer &i){
	this->num_ptr = new int;
	*this->num_ptr = *i.num_ptr;
	}
	
	int *getNumPtr(){
	return this->num_ptr;
	}
};

int main(){
	Integer i(10),j(1);

	cout<<i.getNumPtr()<<endl;
	cout<<j.getNumPtr()<<endl;

	return 0;
}