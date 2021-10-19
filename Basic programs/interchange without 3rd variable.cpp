/**Write a program to enter two unequal number and interchange them without using third variable.**/
#include<iostream>
using namespace std;
class Solution{
public:
	void answer(int a,int b){
		a=a+b;
		b=a-b;
		a=a-b;
	    cout<<a<<" "<<b<<endl;
	}
};
int main(){
	Solution s;
	s.answer(3,4);
	
	return 0;
}
