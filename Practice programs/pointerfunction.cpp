#include<iostream>
using namespace std;

int add(int a,int b){
	return a+b;
}

int mul(int a,int b){
	return a*b;
}

int generic(int (*f)(int,int),int a , int b){
	return (*f)(a,b);
}
int main(){

//int (*p)(int,int);
//p=&mul;
cout<<generic(&mul,2,3)<<endl;
//cout<<(*p)(2,3)<<endl;

return 0;
}

