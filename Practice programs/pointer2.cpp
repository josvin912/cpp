#include<iostream>
using namespace std;

int main(){
	int arr[]={2,4,5,7,11};//name of the arry itself is the pointer to its array.
	int *p=arr;
	/**cout<<&arr[0]<<endl;
	cout<<arr[3]<<" "<<3[arr]<<endl;
	cout<<3[arr]+2[arr+1]<<endl;
	cout<<arr<<endl;**/
	int s=0;
	s+=3[p++];
	s+=3[p++];
	s+=3[p++];
	
	cout<<s<<endl;
	
	cout<<(*arr+1)<<" "<<((*arr)+1)<<" "<<*(arr+1)<<endl;
	return 0;
}
