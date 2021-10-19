//Write a program to find sum of the given series, 
//S = 1 + (1+2) + (1+2+3) + ..... +(1+2+3+....+n)
#include<iostream>
using namespace std;
class Solution{
	public:
		void series(int n){
			int s=0,x=0;
			for(int i=1;i<=n;i++){
				s+=i;
				x+=s;
			}
			cout<<x<<endl;
		}
   };
   int main(){
   	Solution s;
   	s.series(4);
   	
   	return 0;
   }
	
