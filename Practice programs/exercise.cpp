#include<iostream>

using namespace std;
const int SIZE=5;

class Stack{
	int top;
	int arr[SIZE];
	public:
		Stack(){
			top=-1;
		}
		
		int full(){
			
			if(top=SIZE+1){
				 return 1;
			}
			
			else{
				
				return 0;
			}
		}
		
		int empty(){
			
			if(top=-1){
				return 1;
			}
			else{
				return 0;
			}
		}
	
	  void operator --(){
	  	
	  	if(empty()){
	  		cout<<"stack underflow";
		  }
		  else{
		  	 top--;
		  }
	  }
	  
	 friend ostream &operator <<(ostream &os,Stack s1){
	 	
	 	os<<"current stack"<<endl;
	 	for(int i=0;i<=4;i++){
	 		os<<s1.arr[i]<<" ";
		 }
	 }
	 
	 friend Stack operator +(Stack s1,int ele){
	 	 if(s1.full()){
	 	 	cout<<"stack overflow"<<endl;
		  }
		  else{
		  	s1.arr[++s1.top]=ele;
		  }
		  return s1;
	 } 
};

int main(){
	Stack s;
	s=s+5;
	s=s+7;
	cout<<s;
	--s;
	cout<<s;
}
