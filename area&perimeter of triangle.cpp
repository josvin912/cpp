#include<iostream>
using namespace std;
class Solution{
public:
	void find(int a,int b,int c,int h){
		cout<<"perimeter is :"<<a+b+c<<endl<<"area is :"<<0.5*b*h<<endl;
	}
};
int main(){
	Solution s;
	s.find(3,4,5,8);
	
	return 0;
}
