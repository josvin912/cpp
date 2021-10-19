/**Write a program to enter a character and display its opposite case.**/
#include<iostream>
using namespace std;
class Solution{
public:
	void convert(string str){
		int len = str.length();
		for(int i=0;i<len;i++){
			if(str[i]>='a'&& str[i]<='z'){
				str[i]-=32;
			}
			if(str[i]>='A'&& str[i]<='Z'){
				str[i]+=32;
			}
		}
		cout<<str;
	}
};
int main(){
	Solution s;
	string str = "HELLO WORLD";
	s.convert(str);
	
	return 0;
}
