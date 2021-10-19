/**Example Input
Input 1:

 A = [0, 1, 1]
 B = [0, 1, 2]


Example Output
Output 1:

 2


Example Explanation
Explanation 1:

 Given three points are: (0, 0), (1, 1) and (1, 2).
 It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).
 **/
#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
	answer(vector<int>&A,vector<int>&B){
	    /**int n=A.size(),ans=0;
	    for(int i=0;i<n-1;i++){
	        if(abs(A[i]+A[i+1])<=abs(B[i]+B[i+1])){
	        ans+=abs(B[i]-B[i+1]);
	        }
	        else{
	            ans+=abs(A[i]-A[i+1]);
	        }
	    }
	    
	return ans;
	}**/
	int n=A.size(),soln=0;
	for(int i=0;i<n-1;i++){
		int x1=A[i];
		int y1=B[i];
		int x2=A[i+1];
		int y2=B[i+1];
		soln+=max(abs(x2-x1),abs(y2-y1));
}
	return soln;
}
};
 int main(){
 	Solution s;
 	vector<int>X={1,1,1};
 	vector<int>Y={0,2,4};
 	cout<<s.answer(X,Y)<<endl;
 }
