#include<iostream>
using namespace std;
/*int add(int a,int b){
	return a+b;
}
float add(float x,float y){
	return x+y;
}
double add(double a,double b){
	return a+b;
}*///instead of writing these 3 we use templates
class Complex{
	int real;
	int img;
	
public:
	Complex(int ireal,int iimg){
		real=ireal;
		img=iimg;
	}
	Complex (){
		real=0;
		img=0;
	}
	friend Complex operator +(Complex c1,Complex c2){
		Complex c3;
		c3.real=c1.real+c2.real;
		c3.img=c1.img+c2.img;
		return c3;
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
template <class t>
t add(t a,t b){
	return a+b;
}
int main(){
	Complex c1(4,7),c2(5,7);
	cout<<add<Complex>(c1,c2)<<endl;
	cout<<add<int>(5,6)<<endl;
	cout<<add<float>(4.6,8.6)<<endl;
	cout<<add<double>(2.32,6.45)<<endl;
	return 0;
}
