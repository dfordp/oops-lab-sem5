#include <iostream>

using namespace std;


class Integer{
	int num;
	int *num_ptr;
	
	public:
	Integer(int n){
	this->num = n;
	this->num_ptr = new int;
	*this->num_ptr = this->num;
	}
	
	int *getPtr(){
	return num_ptr;
	}
	

	~Integer(){
	cout<<"Destroyed!!"<<endl;
	delete num_ptr;
	}
};

int main(){
	Integer n(10);

	cout<<n.getPtr()<<endl;

	return 0;
}