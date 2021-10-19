#include<iostream>
#include<string>

const int SIZE=5;
using namespace std;

template<class T>
class Stack{
	 int top;
	 T arr[SIZE];
	 int full();
	 int empty();
	 
	public:
		Stack(){
			top=-1;
		}
	    
		Stack<T> operator --(int c=0);
		friend Stack<T> &operator +(Stack<T> &s1,T ele){
				
	   if(s1.full()){
		cout<<"stack overflow"<<endl;
		return s1;
	     }
	
	s1.arr[++s1.top]=ele;
	return s1;
     }
		
		friend ostream &operator <<(ostream &os,Stack<T> s1){
	
	os<<"\n current stack : ";
	for(int i=0;i<=s1.top;i++){
		
		os<<s1.arr[i]<<" ";
	}
	return os;
       }
		
};
template<class T>
int Stack<T>::full(){
	if(top==SIZE-1){
		return 1;
	}
	else
		return 0;
	
}
template<class T>
int Stack<T>::empty(){
	if(top==-1){
		return 1;
	}
	else
		return 0;
}
template<class T>
Stack<T> Stack<T> :: operator --(int c=0){
	
	if(empty()){
		cout<<"stack underflow"<<endl;
		return *this;
	}
	
	top--;
	
	return *this;
}


int main(){
	
	Stack<char> s;
	
	s+'j'+'o';
	//s=s+2;
	s+'s';
	s=s+'v';
	cout<<s;
	s--;
	s=s--;
	cout<<s<<s;
	
	return 0;
}


