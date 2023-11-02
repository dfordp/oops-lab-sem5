#include <iostream>

using namespace std;


class SuperInteger{
	protected:
	int n;
};


class ChildInteger: public SuperInteger{
	private:
	int sum(int x){
	return this->n+x;
	}
	
	public:
	ChildInteger(int n){
	this->n=n;
	}

	int getSum(int x){
	return this->sum(x);
	}
};

int main(){
	ChildInteger c(10);
	
	cout << c.getSum(11)<<endl;
	
	return 0;
}