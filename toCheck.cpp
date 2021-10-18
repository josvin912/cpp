/**Write a program check whether a given character is alphabet, digit, or a special character **/
#include<iostream>
#include<regex>
using namespace std;
class Solution{
public:
	int check(string str){
		const regex digit("[+-]?[0-9]+");
		const regex character("[a-zA-Z]+");
		const regex spcl("[!@#$%^&*]");
		if(str.length()==0){
			return 0;
		}
		if(regex_match(str,digit)){
			cout<<"digit"<<endl;
		}
		if(regex_match(str,character)){
			cout<<"character"<<endl;
		}
		else cout<<"spcl chcar";
	}
};
int main(){
	Solution s;
	s.check("533");
	
	return 0;
}
