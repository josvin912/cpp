//when N= 5, the value of the factorial is 120. Now, the sum of the digits of 120 is 1+2+0 = 3. So, only 3 should be printed to the OUTPUT.
#include<iostream>
using namespace std;
class Solution{
	int n;
	public:
		void setN(int n){
			this->n=n;
		}
		int fact(){
			int fact=1;
			for(int i=1;i<=n;i++){
				fact=fact*i;
			}
			return fact;
		}
		int sum(){
			int sum=0,m;
			int f=fact();
			while(f>0){
				m=f%10;
				sum=sum+m;
				f=f/10;
			}
			return sum;
		}
};
int main(){
	Solution s;
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	s.setN(n);
	cout<<s.sum()<<endl;
}
