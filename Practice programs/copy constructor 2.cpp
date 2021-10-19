#include<iostream>
using namespace std;
class example{
	private:
		int x,y;
	public:
		example();
		example(int x1,int x2);
		example( example &dummy);
		void display();
		void operator=(example B){
			x=B.x;
			y=B.y;
		}
		friend void sample();
	
};
example::example(){
		}
example::example(int x1,int x2){
	x=x1;
	y=x2;
}
example::example( example &dummy){
	x=dummy.x;
	y=dummy.y;
}
void example::display(){
	cout<<"Testing"<<x<<endl;
}

int main(){
example obj1(5,6);
example obj2(obj1);//example obj2=obj1;
example obj3;
obj1.display();
obj2.display();
obj3 = obj2;
obj3.display();
}

