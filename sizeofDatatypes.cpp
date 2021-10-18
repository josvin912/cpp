/**Write a program to print the size of each datatype with its name in a table.**/
#include<iostream>
using namespace std;
class Solution{
public:
	void datatypes(){
		cout<<"int	"<<sizeof(int)<<endl<<"char	"<<sizeof(char)<<endl<<"float	"<<sizeof(float)<<endl<<"long	"<<sizeof(long)<<endl;
	}
};
int main(){
	Solution s;
	s.datatypes();
	 
	 
}
