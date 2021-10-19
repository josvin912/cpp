#include<iostream>
#include<vector>
class Solution{
	int answer(vector<int&A){
		current_sum=0;
		max_sum=0;
		for(int i=0;i<A.lenght();i++){
			current_sum+=A[i];
			if(current_sum > max_sum ){
				max_sum=current_sum;
			}
			if(current_sum < 0){
				current_sum=0;
			}
		}
		return max_sum;
	}
};
int main(){
	Solution s;
	vector<int>vec={5,-4,-2,6-1};
	cout<<s.answer(vec);
}
