#include<stdio.h>
int main(){
	int i,l,sl,x;
	l=-1;
	sl=-1;
	scanf("%d",&x);
	while(x!=-1){
		if(x>l){
			sl=l;
			l=x;
		}
		else if(x>sl){
			sl=x;
		}
		scanf("%d",&x);
	}
	if(sl==l){
		printf("0");
	}
	else{
		printf("the second largest is %d",sl);
	}
	return 0;
}
