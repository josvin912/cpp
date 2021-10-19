#include<iostream>
using namespace std;
class Graph{
	private:
		int **g;
		int n;
	public:
		Graph(int g[][4],int n){
			this->n=n;
			this->g= new int*[n];
			for(int i = 0; i < n; ++i){
   			 	this->g[i] = new int[n];
   			 	for(int j=0;j<n;j++){
   			 		this->g[i][j]=g[i][j];
				}
   			}
		}
		friend ostream& operator << (ostream& out,Graph gr){
				for(int i = 0;i<gr.n;i++){
					for(int j=0;j<gr.n;j++){
						out<<gr.g[i][j]<<"\t";
					}
					out<<"\n";
				}
				return out;
				
		}
};
int main(){
	int G[4][4]={{0,1,1,0},
			{1,0,1,1},
			{1,1,0,1},
			{0,1,1,0}};
	int n=4;
	Graph gr(G,n);
	cout<<gr;
}
