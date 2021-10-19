#include<iostream>
using namespace std;

class Count{
	int x;
public:
	
	Count():x(5){
	}
	
	void operator ++(){
		x++;
	}
	
	void operator --(int){
		x--;
	}
	
	friend ostream &operator <<(ostream &os,Count x){
		os<<x<<endl;
	}
};
int main(){
	Count c;
	++c;
	cout<<c;
	c--;
	cout<<c;
	return 0;
	}
