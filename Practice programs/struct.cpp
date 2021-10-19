#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct Student{
	int age;
	string name;
	int sem;
};
int main(){
	Student st;
	cout<<"enter your age :- "<<endl;
	cin>>st.age;
	cout<<"enter your name:-"<<endl;
	cin>>st.name;
	cout<<"enter your semester"<<endl;
	cin>>st.sem;
	cout<<"age is:-"<<st.age<<endl<<"name is:-"<<st.name<<"semester is:-"<<st.sem;
}
