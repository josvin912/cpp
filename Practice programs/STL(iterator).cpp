#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>vec;
	vec.push_back(50);
	vec.push_back(60);
	vec.push_back(70);
		
	vector<int> :: iterator it = vec.begin();
	
	
	//cout<<*it<<endl;
	it++;
	//cout<<*it<<endl;
	
	vector<int> :: reverse_iterator it1 = vec.rbegin();
	
	cout<<*it1<<endl;
	it1++;
	cout<<*it1<<endl;
	
	cout<<vec.empty()<<endl;
	
	//to insert
	cout<<"============"<<endl;
	vec.insert(it+1,20);
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<endl;
	}
	}
