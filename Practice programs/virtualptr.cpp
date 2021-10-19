

#include <iostream>

using namespace std;

class Rectangle{
    protected:
        int l,b;
    public:
    
       Rectangle(){
            l=0;
            b=0;
       }
       Rectangle(int l,int b){
           this->l=l;
           this->b=b;
       }
 
        void setL(int l){//inline function replaces the function call(macro)
                this->l=l;
     
        }
        void setB(int b){
     
                 this->b=b;
        }
 
        int getL(){
                 return l;
        }
 
        int getB(){
     
                return b;
        }
        virtual void print(){
        	cout<<"Length = "<<l<<" Breadth = "<<b<<endl;
		}
 
};

class Box:public Rectangle{//if public->private the parent's protected and public will change to private 
    protected:
           int h;
    public:
    
         Box():Rectangle(){
               h=0;
                }
         Box(int l,int b,int h):Rectangle(l,b){
             this->h=h;
                      }
         void setH(int h){//inline function replaces the function call(macro)
             this->h=h;
                     }
         int getH(){
                 return h;
                    }
        
         int volume(){
                int v = l*b*h;
                return v;
                    }
        void print(){
        	cout<<"Length = "<<l<<" Breadth = "<<b<<" Height = "<<h<<endl;
		}
 
};

int main(){
    Box box(5,6,7);
    Rectangle rec(4,5);
    //Box *bp;
    Rectangle *rp;
    rp=&rec;
    rp->print();
    rp=&box;
    rp->print();
    //rp=&rec;
    //bp->print();
    //rp->print();
    
    //box.setL(5);
    //box.setB(8);
    //box.setH(4);
    cout<<"The volume is :"<<box.volume()<<endl;
}



