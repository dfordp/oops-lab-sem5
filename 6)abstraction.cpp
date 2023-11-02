#include <iostream>

using namespace std;

class Calculate{
	public:
	int sum(int a,int b){
	return a+b;
	}
	
	int subtract(int a,int b){
	return a-b;
	}
};

int main(){
	Calculate c;

	cout<<c.sum(1,2)<<endl;
	cout<<c.subtract(4,2)<<endl;

	return 0;

}