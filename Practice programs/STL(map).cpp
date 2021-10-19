#include<iostream>
#include<map>
using namespace std;
int main(){
	
	map<string,int>coffee;
	
	coffee["Espresso"]=25;
	coffee["Cappucino"]=30;
	coffee["Tea"]=20;
	//OR
	
	coffee.insert(make_pair("Chai",15));
	cout<<coffee["Espresso"]<<endl;
	//to find a key
	if(coffee.find("Tea") != coffee.end()){
		cout<<"Key Found"<<endl;
	}
	else{
		cout<<"Key not found"<<endl;
	}
	
	map<string,int> :: iterator it = coffee.begin();//in map the keys will be always sorted
	
	cout<<it->first<<endl;//op will be cappucino coz the value is sorted
	//To erase
	coffee.erase(it);//using iterator
	coffee.erase("Tea");//using key
	
	for(it ; it != coffee.end() ; it++){
		
		cout<<it->first<<":"<<it->second<<endl;
	}
	
	
	
	return 0;
}
