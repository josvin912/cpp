#include<iostream>
using namespace std;
class sample{
	int real,img;
	public:
	sample(){
		real=0;
		img=0;
	}
	sample(int ireal,int iimg){
		real=ireal;
		img=iimg;
	}
	sample operator +(sample B){
		sample temp;
		temp.real=real+B.real;
		temp.img=img+B.img;
		return temp;
	}
	
	
	void display(){
		cout<<real<<"+"<<"i"<<img<<endl;
	}
};
int main(){
	sample A(5,6),B(4,8),C;
	C=A+B;//C=A.operator+(B)
	A.display();
	B.display();
	C.display();
}
