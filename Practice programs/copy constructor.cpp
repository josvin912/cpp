#include<iostream>
using namespace std;
class example{

int data;
public:
	
	example(){
		data=0;
	}
	example(int a){
		data=a;
	}
	example(example &dummy){
		data=dummy.data;
	}
	void display(){
		cout<<data<<endl;
	}
};
int main(){
	example obj1(5);
	example obj2(obj1);//the compiler will automatically creates the copy constructor.
	obj1.display();
	obj2.display();
}
