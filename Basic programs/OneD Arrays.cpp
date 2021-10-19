#include<iostream>
#include<vector>
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
	void mergeSortedArray(vector<int>&A,vector<int>&B){
		vector<int>C;
		int i=0,j=0;
		while(i<A.size() && j<B.size()){
				if(A[i]<=B[j]){
					C.push_back(A[i]);
					i++;
				}
				else if(A[i]>=B[j]){
					C.push_back(B[j]);
					j++;
				}
			}
			if(i==A.size()){
				while(j<B.size()){
					C.push_back(B[j]);
					j++;
				}
			}
			else if(j==B.size()){
				while(i<A.size()){
					C.push_back(A[i]);
					i++;
				}
			}
			for(int k=0;k<C.size();k++){
				cout<<C[k]<<" : ";
			}
		}
	};
	int main(){
		Solution s;
		int arr[5]={2,4,1,9,0};
		vector<int>vec1={2,4,6,8};
		vector<int>vec2={1,3,5,7};
		s.mergeSortedArray(vec1,vec2);
	}
