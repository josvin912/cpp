//Write a program to check whether a given number is a Special or not. (A number is said to be a special, 
//if the sum of the factorial of the digits is equal to the original number. eg 145 = 1! + 4! + 5! )
#include<iostream>
using namespace std;
class Solution{
	public:
		void special(int n){
			int rem=0,s=0;
			int k = n;
			while(n!=0){
				rem = n%10;
				int fact=1;
				for(int i=1;i<=rem;i++){
					fact=fact*i;
				}
				s+=fact;
				n/=10;
			}
			if(k==s) cout<<"This is a special number"<<endl;
			else cout<<"Not a special number
			"<<endl;
		}
};
int main(){
	Solution s;
	s.special(145);
	
	return 0;
}
