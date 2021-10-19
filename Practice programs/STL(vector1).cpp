#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>vec;
	vec.push_back(50);
	vec.push_back(60);
	vec.push_back(70);
	cout<<vec[0]<<endl;
	cout<<vec[1]<<endl;
	cout<<vec[2]<<endl;
	
	cout<<"the size is:-"<<vec.size()<<endl;
	
	vec.pop_back();
	
	cout<<"the size is:-"<<vec.size()<<endl;
	
	/**vector<int>vec{10,20,30};//will create a vector named vec with elements 10,20,30
	vector<int>vec(3);//will create a vec with size 3;
	vector<int>vec(3,0);//will create a vector with size 3 and with the elements 0
	vector<char>vec(3,'a');**/
	vec.push_back(70);
	cout<<vec.front()<<endl;
	cout<<vec.back()<<endl;
	cout<<vec.at(1)<<endl;
	
return 0;		
	
}
