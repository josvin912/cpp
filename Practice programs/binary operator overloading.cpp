#include<iostream>
using namespace std;

class Complex{
	int real;
	int img;
public:
	void setValue(int ireal,int iimg){
	real=ireal;
	img=iimg;
}
	/*friend Complex operator +(Complex c1,Complex c2){
		Complex c3;
		c3.real=c1.real+c2.real;
		c3.img=c1.img+c2.img;
		return c3;
	}*/
	Complex operator +(Complex iB){
	Complex temp;//creating a instataneous obj
	temp.real=real+iB.real;
	temp.img=img+iB.img;
	return temp;
}
	void display(){
		cout<<real<<" + "<<img<<" i ";
	}

};
int main(){
	Complex A , B , C;
	A.setValue(5,6);
	A.display();
	B.setValue(4,8);
	B.display();
	
	C = A + B; // C = A.operator+(B)
	
	cout<<"=========";
	C.display();
}
