#include<iostream>
#include<string>
using namespace std;

class Stack{

private:
	int top;
	int a[5];
public:
	Stack(){
	   top=-1;
	   for(int i=0;i<4;i++){
	   	a[i] = 0;
	   }
	}

   bool isEmpty(){
   	 if(top==-1){
   	 	return true;
		}
	else{
		return false;
	}
   }
   
   bool isFull(){
   	
   	if(top==4){
   		return true;
	   }
	   
	else{
		return false;
	}
   }
   
   void push(int val){
   	if(isFull()){
   		cout<<"stack overflow";
	   }
	else{
		top++;
		a[top]=val;
	}
   }
   
   int pop(){
   	int poppedval=a[top];
   	top--;
   }
   
   int count(){
   	return(top+1);
   }
   int peak(int pos){
   	if(isEmpty()){
   		cout<<"stack is empty";
	   }
	else{
		return a[pos]; 
	}
   }
   void display(){
   	for(int i =4;i>=0 ;i++){
   		cout<<cout<<a[i]<<endl;
	   }
   }
   int main(){
   	
   	int pos,val,option;
   	Stack s;
   	cout<<"Enter the below option"<<endl;
   	cout<<"1.isempty(),2.isfull(),3.push(),4.pop(),5.count(),6.peak(),7.display()"<<endl;
   	cin>>option;
   	switch(option){
   		case 1:
   			if(isEmpty()){
   				cout<<"empty"<<endl;
			   }
			   else
			   {
			   	cout<<"not empty"<<endl;
			   }
	  case 2:
				if(isFull()){
   				cout<<"full"<<endl;
			   }
			   else
			   {
			   	cout<<"not full"<<endl;
			   }
	    case 3:
	    	cout<<"enter the value to be pushed"<<endl;
	    	cin>>val;
	    	s.push(val);
	    case 4:
	   	 s.pop();
	   	 cout<<"the value is popped"<<endl;
	   	case 5:
	   		cout<<"the count is :"<<s.count()<<endl;
	   	case 6:
	   		cout<<"enter the position to be peaked"<<endl;
	   		cin>>pos;
	   		cout<<"the value at "<<pos<<"is"<<s.peak(pos)<<endl;
	   	case 7:
	   		s.display();
   }
}
};
