/**Write a program to find the hexal and octal value of a number.**/
#include<iostream>
using namespace std;
class Solution{
public:
	void convert(int n){
		cout<<oct<<"oct :-"<<n<<endl;
		cout<<hex<<"hex :-"<<n<<endl;
		cout<<dec<<"dec :-"<<n<<endl;
	}
};
int main(){
	Solution s;
	s.convert(54);
}
