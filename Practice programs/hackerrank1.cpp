#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    string ar[]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++){
       cout<<((i<=9)?ar[i-1]:(i%2==0)?"even":"odd")<<endl; 
    }
    return 0;
}++

