#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void printList(list <int> L){
	
	list<int>::iterator it;
	for(it=L.begin();it!=L.end();it++){
		
		cout<<*it<<endl;
	}
}
	
	int main(){
		
		list<int> l1,l2;
		for(int i=0;i<10;i++){
			l1.push_back(2*i);
		}
		l1.remove_if(odd);
		printList(l1);
		
		}
