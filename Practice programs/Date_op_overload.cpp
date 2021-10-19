#include<iostream>
using namespace std;
class Date{
private:
	int d,m,y;
public:
	date(int d=0,int m=0,int y=0){
		this->d=d;
		this->m=m;
		this->y=y;
	}
	setDate(int u,int v,int w){
		d=u;
		m=v;
		y=w;
	}
	friend ostream& operator <<(ostream& os,Date t){
		os<<"dd/mm/yy"<<d<<m<<y<<endl;
		return os;
	}
};
int main(){
	Date t;
	t.setDate(4,5,21);
	cout<<t;
}
