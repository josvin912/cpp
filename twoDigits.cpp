#include<iostream>
using namespace std;
class Solution{
public:
	void digit(int t){
		if(t>9 && t<100 ) cout<<"the number is two digit"<<endl;
		else cout<<"not two digits"<<endl;
	}
};
int main(){
	Solution s;
	s.digit(423);
	
	return 0;
}
