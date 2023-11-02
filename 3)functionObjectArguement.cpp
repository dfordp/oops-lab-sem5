#include <iostream>

using namespace std;

class Integer{
	int num;

	public:
	Integer(int num){
		this->num=num;
	}
	
	int getNum(){
		return this->num;
	}
};

int sum(Integer a,Integer b){
	return a.getNum()+b.getNum();
}

int main(){
	Integer a(2),b(4);
	
	cout << sum(a,b) << endl;

	return 0;
}