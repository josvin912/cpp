#include<iostream>
#include<list>
using namespace std;
int main(){
	list <int> li;
	li.push_back(10);
	li.push_back(20);
	li.push_back(30);
	li.push_back(40);
	
	list<int> :: iterator it = li.begin();
	
	cout<<li*<<endl;
	
	return 0;
}
