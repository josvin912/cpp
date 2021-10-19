#include<iostream>
using namespace std;
class Solution{
public:
	void pattern(){
		int n=5;		
		for(int i=0,p=0;i<n;i++,p++){
			for(int j=0;j<=i;j++){
				cout<<p<<"  ";
			}
			cout<<endl;
		}
		cout<<"----------------";
		for(int i=1,p=0;i<=n;i++,p+=2){
			for(int j=1;j<=i;j++){
				cout<<p<<"  ";
			}
			cout<<endl;
		}
		cout<<"----------------"<<endl;
		for(int i=1,p=0;i<=n;i++,p+=2){
			for(int j=1;j<=i;j++){
				if(i%2==0){
				cout<<2<<"  ";
			}
			else cout<<1<<"  ";
			}
			cout<<endl;
		}
		 cout<<"--------------"<<endl;
		for(int i =1,p=1;i<5;i++,p++){
        	for(int j=i;j<=5;j++){
            	cout<<" ";
        }
        	for(int j=1;j<i;j++){
            cout<<p<<" ";
        }
        	for(int j=1;j<=i;j++){
        		cout<<p<<" ";
			}
        cout<<endl;
    }
    for(int i=1,p=5;i<=n;i++,p--){
    	for(int j=1;j<=i;j++){
    		cout<<" ";
		}
		for(int j=i;j<n;j++){
			cout<<p<<" ";
		}
		for(int j=i;j<=n;j++){
			cout<<p<<" ";
		}
		cout<<endl;
	}
	cout<<"--------------"<<endl;
		for(int i =1;i<5;i++){
			int p=1;
        	for(int j=i;j<=5;j++){
            	cout<<"  ";
        }
        	for(int j=1;j<i;j++,p++){
            cout<<p<<"  ";
        }
        	for(int j=1;j<=i;j++,p++){
        		cout<<p<<"  ";
			}
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
    	int p=1;
    	for(int j=1;j<=i;j++){
    		cout<<"  ";
		}
		for(int j=i;j<n;j++,p++){
			cout<<p<<"  ";
		}
		for(int j=i;j<=n;j++,p++){
			cout<<p<<"  ";
		}
		cout<<endl;
	}
	cout<<"--------------"<<endl;
		for(int i=1,k=n;i<=n;i++,k--){
			int p=k;
			 for(int j=1;j<=i;j++){
			 	cout<<"  ";
			 }
			for(int j=i;j<=n;j++,p--){
				cout<<p<<"  ";
			}
			cout<<endl;
		}
		cout<<"--------"<<endl;
		int p=1;
	for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				cout<<p++<<"  ";
			}
			cout<<endl;
		}
}
};
int main(){
	Solution s;
	s.pattern();
}
