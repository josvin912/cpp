#include<iostream>
using namespace std;
class Fraction{
	
	int num,den;
	public:
		
	Fraction(){
		num=1;
		den=1;
	}
	Fraction(int x,int y){
		num=x;
		den=y;
	}	
	
	friend ostream &operator <<(ostream &os,Fraction f){
	
		  os<<f.num<<"/"<<f.den<<endl;
	}
	
	Fraction operator +(Fraction f2){
		Fraction f3;
		f3.num=(num*f2.den)+(den*f2.num);
		f3.den=den*f2.den;
		
		return f3;
	}
	
	Fraction operator -(Fraction f2){
		Fraction f3;
     	f3.num=num*f2.den-den*f2.num;
		f3.den=den*f2.den;
		 return f3;
	}
	
	Fraction operator *(Fraction f2){
		Fraction f3;
		f3.num=num*f2.num;
		f3.den=den*f2.den;
		return f3;
	}
	
	Fraction operator /(Fraction f2){
		Fraction f3;
		f3.num=num*f2.den;
		f3.den=den*f2.num;
	}
	
	Fraction operator ~(){
		int temp=num;
		num=den;
		den=temp;
	}
	
	void isproper(){
		if(num < den){
			cout<<"This is a proper fraction"<<endl;
		}
		else
		 cout<<"This is not a proper fraction"<<endl;
	}
};

int main(){
	Fraction f1(1,2),f2(1,2),f3;
	f3=f1+f2;
	cout<<f3;
	f3=f1-f2;
	cout<<f3;
	f3=f1*f2;
	cout<<f3;
	f3=f1/f2;
	f3.isproper();
	cout<<f3;
	~f1;
	cout<<f1;
	
	
}
