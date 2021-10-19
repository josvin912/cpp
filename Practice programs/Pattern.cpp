#include<iostream>
using namespace std;
class Solution{
public:
	void pattern(){
		int n=5;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<"*  ";
			}
			cout<<endl;
		}
		cout<<"--------------"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				cout<<"*  ";
			}
			cout<<endl;
		}
		cout<<"--------------"<<endl;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				cout<<"*  ";
			}
			cout<<endl;
		}
		
		cout<<"--------------"<<endl;
		for(int i=0;i<n;i++){
			 for(int j=i;j<n;j++){
			 	cout<<"  ";
			 }
			for(int j=0;j<i;j++){
				cout<<"* ";
			}
			cout<<endl;
		}
		cout<<"--------------"<<endl;
		for(int i =0;i<5;i++){
        	for(int j=0;j<i;j++){
            	cout<<"  ";
        }
        	for(int j=i;j<5;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"--------------"<<endl;
		for(int i =1;i<=5;i++){
        	for(int j=i;j<=5;j++){
            	cout<<"  ";
        }
        	for(int j=1;j<i;j++){
            cout<<"* ";
        }
        	for(int j=1;j<=i;j++){
        		cout<<"* ";
			}
        cout<<endl;
    }
    cout<<"--------------"<<endl;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=i;j++){
    		cout<<"  ";
		}
		for(int j=i;j<n;j++){
			cout<<"* ";
		}
		for(int j=i;j<=n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	 cout<<"--------------"<<endl;
		for(int i =1;i<5;i++){
        	for(int j=i;j<=5;j++){
            	cout<<"  ";
        }
        	for(int j=1;j<i;j++){
            cout<<"* ";
        }
        	for(int j=1;j<=i;j++){
        		cout<<"* ";
			}
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=i;j++){
    		cout<<"  ";
		}
		for(int j=i;j<n;j++){
			cout<<"* ";
		}
		for(int j=i;j<=n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	 cout<<"--------------"<<endl;
	 for(int i=1;i<5;i++){
    
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=i;j<5;j++){
            cout<<"  ";
        }
        for(int j=i;j<5;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
		cout<<endl;
}

    for(int i=1;i<=5;i++){
    
        for(int j=i;j<=5;j++){
            cout<<"* ";
        }
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int j=i;j<=5;j++){
            cout<<"* ";
        }
		cout<<endl;
}
	}
};
int main(){
	Solution s;
	s.pattern();
}
