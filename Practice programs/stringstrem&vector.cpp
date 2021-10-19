
//input 2,3,4 output 2 3 4
# include<iostream>
#include<vector>
#include<sstream>
#include <bits/stdc++.h>
using namespace std;
vector <int> parseint (string str){
	stringstream ss(str);
	vector <int> result;
	int temp;
	char ch;
	while(ss>>temp){
		result.push_back(temp);
		ss>>ch;
	}
	return result;
}

vector <int> vectasc(vector <int> &A){
	sort(A.begin(),A.end());
	return A;
}

vector <int> vectdesc(vector <int> &B){
	
	sort(B.begin(),B.end(),greater<int>());
	return B;
}

vector <int> vectrev(vector <int> &C){
	reverse(C.begin(),C.end());
	 return C;
}

vector<int> vecterase(vector <int> &D){
	D.erase(D.begin()+4);//removes the ele at 5th position
	D.erase(D.begin()+2,D.begin()+4);//removes the ele from 3rd pos to 5th pos
	return D;
}
void printvector (vector <int> &vect){
	   
      for(int i = 0 ;i<vect.size() ; i++){
	    	cout<<vect[i]<<endl;
		
	}
}


int main(){
	string str;
	cout<<"enter the string"<<endl;
	cin>>str;
	vector <int> vec = parseint(str);
	cout<<"The vector is"<<endl;
    printvector(vec);
	    
	vector <int> v;
	v.push_back(8);
	v.push_back(0);
	v.push_back(6);
	v.push_back(12);
	
	vector <int> B = vectasc(v);
	cout<<"Vector in ascending order is"<<endl;
	printvector(B);
	
	cout<<"Vector in descending order is"<<endl;
	vector <int> C = vectdesc(v);
	printvector(C);
	
	cout<<"Reversesd Vector is :"<<endl;
	vector <int> D = vectrev(v);
	printvector(D);
	
	cout<<"The vector after erasing is :"<<endl;
	vector <int> E = vecterase(v);
	printvector(E);
	
	
	return 0;
}

