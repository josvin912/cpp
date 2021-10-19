#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution{
public:
	int answer(vector<int> &A){
		set <int> s;
		int current_sum=0;
		int max_sum=0;
		for(int i=0;i<A.size();i++){
			current_sum+=A[i];
			if(current_sum > max_sum ){
				max_sum=current_sum;
				s.insert(A[i]);
			}
			if(current_sum < 0){
				current_sum=0;
				s.clear();
			}
		}
		for(auto it=s.begin();it!=s.end();it++){
			cout<<*it<<" ";
		}
		return max_sum;
	}
};
int main(){
	Solution s;
	vector<int>vec={5,-4,-2,6,10,14};
	cout<<endl<<s.answer(vec);
}
