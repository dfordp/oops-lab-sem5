#include <iostream>

using namespace std;

class Integer{
	int num;
	int *num_ptr;

	public:
	Integer(int num){
	this->num=num;
	this->num_ptr=&this->num;
	}
	
	Integer(Integer &i){
	this->num = i.num;
	this->num_ptr = i.num_ptr;
	}
	
	int *getNumPtr(){
	return num_ptr;
	}
};

int main(){
	Integer i(10);
	Integer j(i);
	
	cout<<i.getNumPtr()<<endl;
	cout<<j.getNumPtr()<<endl;
	
	return 0;
}