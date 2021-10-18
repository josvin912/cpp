//Looping
#include<iostream>
using namespace std;
class Solution{
public:
	//Write a program to find the reverse of a given number.
	void check(int n){
		int rem=0,reverse=0;
		while(n!=0){
		 rem=n%10;      
     	 reverse=reverse*10+rem;    
     	 n/=10;    
		}
		cout<<reverse<<endl;
	}
	//Write a program to print number of factors of a number
	void factors(int n){
		int c=0;
		for(int i=1;i<=n;i++){
			if(n%i==0){
				c++;
			}
		}
		cout<<c<<endl;
	}
	//prime or not
	void prime(int n){
		int c=0;
		for(int i=2;i<n/2;i++){
			if(n%i==0){
				c++;
			}
		}
		if(c==0) cout<<"prime"<<endl;
		else cout<<"not prime"<<endl;
	}
	//Arithemetic progression
	void ap(int a,int d,int n){
		for(int i=0;i<n;i++){
			cout<<a<<endl;
			a+=d;
		}
	}
	void fibo(int n){
		int a=0,b=1,c=0;
		cout<<a<<endl<<b<<endl;
		for(int i=2;i<n;i++){
			c=a+b;
			cout<<c<<endl;
			a=b;
			b=c;
		}
	}
	void arm(int n){
		int rem=0,r=0;
		int x=n;
		while(n!=0){
		 rem=n%10;      
     	 r=r+rem*rem*rem;    
     	 n/=10;    
		}
		if(x==r) cout<<"armstrong"<<endl;
		else cout<<"not armstrong"<<endl;
	}
	void sumofdigits(int n){
		int rem=0,s=0;
		while(n!=0){
			rem=n%10;
			s+=rem;
			n/=n;
		}
		cout<<s<<endl;
	}
	bool isAutomorphic(int n){
		int sq=n*n;
		while(n!=0){
			if(sq%10 != n%10)
				return 0;
			n/=10;
			sq/=10;
		}
	}
};
int main(){
	Solution s;
	s.isAutomorphic(3)?cout<<"automorphic":cout<<"not automorphic";
	
	return 0;
}
		
