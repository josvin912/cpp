#include<iostream>
using namespace std;
class Box{
	int l,b,h;
	public:
	void setValues(int l,int b,int h){
	    this->l=l;
		this->b=b;
		this->h=h;
	}
	
	int volume(){
		int v=l*b*h;
		return v;
	}
};
int main(){
	Box b;
	b.setValues(4,5,7);
	cout<<b.volume()<<endl;
	
	Box *bp;
	bp=&b;
	bp->setValues(4,5,7);//*bp.setValues(2,3,4)
	cout<<bp->volume()<<endl;
	
	Box *dbp = new Box; //dynamic memory allocation
	dbp->setValues(4,5,7);
	cout<<dbp->volume()<<endl;
}
