/**Problem Description

Given an array A containing N integers.

You need to find the maximum sum of triplet ( Ai + Aj + Ak ) such that 0 <= i < j < k < N and Ai < Aj < Ak.

If no such triplet exist return 0.**/
#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution{
public:
	int solve(vector<int> &A)
	{
	    int n=A.size(),el=A[n-1],ans=0;
	    // Right[i] indicates the max element after A[i]
	    vector<int>right(n);
	    set<int>s;
	    s.insert(A[0]);
	    for(int i=n-1;i>=0;i--)
	    {
	        right[i]=el;
	        el=max(A[i],el);
	    }
	    for(int i=1;i<n-1;i++)
	    {
	        //If there is no element greater than A[i] to the right then A[i] can't be a middle element 
	        if(right[i]<=A[i])
	        {
	            continue;
	        }
	        s.insert(A[i]);
	        auto it=s.find(A[i]);
	        // If there is no element lesser than A[i] to it's left then A[i] can't be a middle element
	        if(it==s.begin())
	        {
	            continue;
	        }
	        // else get the maximum element,leser than A[i], to the left of A[i] 
	        it--;
	        ans=max(ans,*it+A[i]+right[i]);
	    }
	    return ans;
	}


};
int main(){
	Solution s;
	vector<int>vec = {2,3,5,6,1,4,1};
	cout<<s.solve(vec);
}

