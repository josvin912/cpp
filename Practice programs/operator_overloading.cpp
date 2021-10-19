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
	 void operator -(){//Declaring operator overloading function
	 	real=-real;
	 	img=-img;
	 }
	 friend void operator --(Complex &c,int s=0){
	 	c.img=-c.img;
	 	
	 }
	 void display(){
	 	cout<<real<<" + "<<img<<"i"<<endl;
	 }
	 friend std::ostream& operator<<(std::ostream& out,Complex c){
	 	out<<c.real<<" + "<<c.img<<"i"<<endl;
	 	return out;
	 }
};

int main ()
{
	Complex A;
		A.setValue(5,6);
		A.display();
		//OR
		cout<<A;
	    -A;//calling the operator-() method
		A.display();
		A--;
		cout<<A;
		return 0;
}
