#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void printList(list<int>p){
	
	list<int>::iterator it;
	for(it=p.begin();it!=p.end();it++){
		
		cout<<*it<<endl;
		
	}
}
	
	int main(){
		
		list<int> l1,l2;
		for(int i = 1 ;i<=10;i++){
			l1.push_back(2*i);
			l2.push_back(3*i);
		}
		cout<<"list 1 is"<<endl;
		printList(l1);
		cout<<"list 2 is"<<endl;
		printList(l2);
		cout<<"pop front"<<endl;
		l1.pop_front();
		printList(l1);
		cout<<"pop back"<<endl;
		l1.pop_back();
		printList(l2);
		l1.reverse();
		cout<<"reverse"<<endl;
		printList(l1);
		cout<<"sort"<<endl;
		l2.sort();
		printList(l2);
		
	
	}
