#include"complex.h"
#include<iostream>
using namespace std;

Complex::Complex(float a,float b){
	this->r=a;
	this->i=b;
}
void Complex::print(){
	cout<<r<<"+"<<"i"<<i;
}
Complex Complex::operator+(Complex c){//add(Complex c)
	Complex s;
	s.r=r+c.r;
	s.i=i+c.i;
	return s;
}
