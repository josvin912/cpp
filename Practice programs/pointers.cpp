#include<iostream>
using namespace std;

int main(){
	int a=5,*p;
	double b=5.3,*q;
	//int **q;
	p=&a;
	q=&b;
	/**cout<<&a<<" "<<p<<endl;
	cout<<*p<<" "<<*&a<<endl;
	cout<<&p<<" "<<q<<endl;
	cout<<a<<" "<<**q<<endl;**/
	cout<<p<<" "<<p+1<<endl;
	cout<<q<<" "<<q+1<<endl;
	return 0;
}
