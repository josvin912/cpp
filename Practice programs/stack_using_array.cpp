#include<iostream>
#include<string>

using namespace std;

class Stack{
	private:
		int top;
		int arr[5];
	
public:
	 stack(){
	 	top=-1;
	 	for(int i=0;i<4;i++){
	 		arr[i]=0;
		 }
	 }
	 
	 bool isEmpty(){
	 	if(top==-1)
	 		return true;
		 else
		 	return false;
		 
	 }
	 
	 bool isFull(){
	 	 if(top==4)
	 	 	return true;
	 	else
	 		return false;
	 }
	 
	 void push(int val){
	 	 
	 	if(isFull())
	 	 	cout<<"stack overflow"<<endl;
	 	else
	 		top++;
	 	 	arr[top]=val;
	 }
	 
	 int pop(){
	 	if(isEmpty()){
		 
	 		cout<<"stack underflow"<<endl;
	 	}
	 	else{
		 
	 		int popValue=arr[top];
	 		arr[top]=0;
	 		top--;
	 		return popValue;
	 }
}
	
	int count(){
		return (top+1);
	}
	
	int peek(int pos){
		if(isEmpty()){
			cout<< "stack is empty"<<endl;
		}
		else
			return arr[top];
	}
	
	void change(int pos, int val){
		arr[pos]=val;
	}
	
	void display(){
		cout<<"the items on the stack are" <<endl;
		for(int i=4;i>=0;i--){
			cout<<arr[i];
		}
	}
};

int main(){
	Stack s;
	int option,value,position;
	do
	{
	cout<<"enter the options below,enter 0 to exit"<<endl;
	cout<<"1.check the stack is empty"<<endl;
	cout<<"2.check the stack is full"<<endl;
	cout<<"3.push()"<<endl;
	cout<<"4.pop()"<<endl;
	cout<<"5.peek()"<<endl;
	cout<<"6.cout()"<<endl;
	cout<<"7.change()"<<endl;
	cout<<"8.display()"<<endl;
	cout<<"9.clear screen"<<endl;
	
	cin>>option;
	switch(option){
		
		case 0:
			break;
		
		case 1:
			if(s.isEmpty())
				cout<<"stack is empty"<<endl;
			else
				cout<<"stack is not empty"<<endl;
			
			break;
		case 2:
			if(s.isFull())
				cout<<"stack is full"<<endl;
			else
				cout<<"stack is not full"<<endl;
			
			break;
	    case 3:
			cout<<"enter the value to be pushed"<<endl;
			cin>>value;
			s.push(value);
			break;
		case 4:
			cout<<"pop function called"<<s.pop()<<"value_popped"<<endl;
			break;
		case 5:
			cout<<"enter the position to peek"<<endl;
			cin>>position;
			cout<<"peek function called the peeked value is"<<s.peek(position)<<endl;
			break;
		case 6:
			cout<<"the n.o of items is"<<s.count()<<endl;
			break;
		case 7:
			cout<<"enter the position"<<endl;
			cin>>position;
			cout<<"enter the n.o to inserted"<<endl;
			cin>>value;
			s.change(position,value);
			break;
		case 8:
			cout<<"the items are"<<endl;
			s.display();
			break;
		case 9:
			system("clr");
			break;
		default:
			cout<<"invalid option"<<endl;
	}
	}while(option!=0);
	return 0;
}

