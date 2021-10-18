#include<iostream>
using namespace std;
class Solution{
public:
	void seconds(int t){
		int hh,mm,ss;
		mm = t/60;
		ss = t%60;
		hh = mm/60;
		mm = mm%60;
		cout<<hh<<":"<<mm<<":"<<ss<<endl;
		
	}
};
int main(){
	Solution s;
	s.seconds(8274);
}
