#include<iostream>
using namespace std;
class Solution{
public:
	void days(int t){
		int d,m,y;
		y=t/356;
		m=(t%365)/12;
		d=((t%365)%12)/30;
		cout<<d<<":"<<m<<":"<<y<<endl;
		
	}
};
int main(){
	Solution s;
	s.days(370);
}
