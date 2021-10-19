#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
class str{
public:
string a,b;

	string fn(){
	     cout<<"enter the 2 strings"<<endl;
	     cin>>a>>b;
	     cout<<"The length of two strings are:"<<endl;
	     cout<<a.size()<<' '<<b.size()<<endl;
	     cout<<"concatenation"<<endl;
	     cout<<a+b<<endl;
	     cout<<"swapping the first character.."<<endl;
	     swap(a[0],b[0]);
	     cout<<a<<' '<<b;
}
};
int main(){
	str s;
	s.fn();
}
