#include<iostream>
#include<vector>
class Solution{
public:
	int vect(vector<int>&A,int B){
		int sum1,sum2,min1;
		for(int i=0;i<A.size(),i++){
			sum1+=A[i];
		}
		int i=0,j=A.size()-B-1;
		for(int k=0;k<j;j++){
			sum2=+A[k];
		}
		min1=sum2;
		while(j<A.size()){
			sum2+=(A[j]-A[i-1]);
			min1=min(sum2,min1);	
		}
		return sum1-min1;
	}
};
int main(){
	Solution s;
	vector<int>vec={5,-2,3,1,2};
	cout<<s.vect(vec,3);
}
