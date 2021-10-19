#include<iostream>
using namespace std;
class Solution{
	public:
		void secondlar(int a[],int n){
			int s=a[0],l=a[0];
			for(int i=1;i<n;i++){
				if(a[i]<s){
					s=a[i];
				}
				else if(a[i]>1){
					l=a[i];
				}
			}
			cout<<"Smallest is :-"<<s<<endl;
			cout<<"Largest is :-"<<l<<endl;
		int secondlargest = a[0];
		for(int i=0;i<n;i++){
			if(a[i]!=l && a[i]>secondlargest){
				secondlargest=a[i];
			}
		}
		cout<<"second largest is :"<<secondlargest<<endl;
	}
	void reverseArray(int a[],int n){
		int start = 0,end=n-1,temp;
		while(start < end){
			temp=a[start];
			a[start]=a[end];
			a[end]=temp;
			start++;
			end--;
		}
		cout<<"The Reverse Array is :"<<endl;
		for(int i=0;i<n;i++){
			cout<<a[i]<<" : ";
		}
	}
	};
	int main(){
		Solution s;
		int arr[5]={2,4,1,9,0};
		s.reverseArray(arr,5);
	}
