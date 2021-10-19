#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
	int data;
	struct Node*next;
};
typedef Node NODE;
typedef Node* NODE_PTR;
void create_LL(NODE_PTR *head,int data[],int x){
	int i;
	NODE_PTR current,newnode;
	(*head)=(NODE_PTR)malloc(sizeof(NODE));
	(*head)->data=NULL;
	(*head)->next=NULL;
	current=(*head);
	for(i=0;i<x;i++){
		newnode=(NODE_PTR)malloc(sizeof(NODE));
		newnode->data=data[i];
		newnode->next=NULL;
		current->next=newnode;
		current=newnode;
	}	
}



//searchig a key
bool key_LL(NODE_PTR HEAD,int x){
	NODE_PTR ptr;
	ptr=HEAD->next;
	while(ptr->next!=NULL){
		if(ptr->data==x){
			return true;
		}
		ptr=ptr->next;
	}
	return false;
}
void reverse_Display(NODE_PTR ptr){
	if(ptr!=NULL){
		reverse_Display(ptr->next);
		printf("%d ",ptr->data);
	}
}
void merge_LL(NODE_PTR *head,NODE_PTR HEAD1,NODE_PTR HEAD2){
	NODE_PTR ptr1,ptr2,current,newnode;
	ptr1=HEAD1->next;
	ptr2=HEAD2->next;
	(*head)=(NODE_PTR)malloc(sizeof(NODE));
	(*head)->data=NULL;
	(*head)->next=NULL;
	current=(*head);
	while(ptr1!=NULL && ptr2!=NULL){
		if(ptr1->data<ptr2->data){
			newnode=(NODE_PTR)malloc(sizeof(NODE));
			newnode->data=ptr1->data;
			newnode->next=NULL;
			current->next=newnode;
			current=newnode;
			ptr1=ptr1->next;
		}
		else {
			newnode=(NODE_PTR)malloc(sizeof(NODE));
			newnode->data=ptr2->data;
			newnode->next=NULL;
			current->next=newnode;
			current=newnode;
			ptr2=ptr2->next;
		
		}
	}
	
	
	while(ptr2!=NULL){
		newnode=(NODE_PTR)malloc(sizeof(NODE));
		newnode->data=ptr2->data;
		newnode->next=NULL;
		current->next=newnode;
		current=newnode;
		ptr2=ptr2->next;
	}
	while(ptr1!=NULL){
		newnode=(NODE_PTR)malloc(sizeof(NODE));
		newnode->data=ptr1->data;
		newnode->next=NULL;
		current->next=newnode;
		current=newnode;
		ptr1=ptr1->next;
	}

}
void display_LL(NODE_PTR HEAD){
	NODE_PTR ptr;
	ptr=HEAD->next;
	printf("\nTHE LIST IS:");
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
void sort_LL(NODE_PTR HEAD,NODE_PTR* head){
	
	NODE_PTR newnode,pptr;
   	(*head)=(NODE_PTR)malloc(sizeof(NODE));
   	(*head)->data=NULL;
   	(*head)->next=NULL;

   	int key;
   	NODE_PTR ptr = HEAD->next;
   	while(ptr != NULL)
   	{
		key = ptr->data;
		pptr = *head;
	   	while(pptr->next != NULL){
	   		
	   		if(pptr->next->data>key)
	   			break;
	   		pptr= pptr->next;
		}
		newnode=(NODE_PTR)malloc(sizeof(NODE));
	   	newnode->data=key;
	   	newnode->next=pptr->next;
	   	pptr->next = newnode;
	   	
	   	ptr=ptr->next;
	}
	
}
void reverse_LL(NODE_PTR HEAD){
	NODE_PTR current,next,prev;
	prev=HEAD->next;
	current=prev->next;
	next = current->next;
	while(next!=NULL)
	{
		current->next=prev;
		prev=current;
		current=next;
		next=next->next;
	}
    current->next=prev;
    HEAD->next->next=NULL;
	HEAD->next=current;
}
int main(){
	NODE_PTR HEAD=NULL,SHEAD=NULL;
	NODE_PTR HEAD1,HEAD2,HEAD3=NULL,HEAD4=NULL;
	int data1[]={2,4,6};
	int data2[]={1,3,5};
	int data3[]={8};
	create_LL(&HEAD,data1,3);
	display_LL(HEAD);
	key_LL(HEAD,8)?printf("\nkey found") : printf("\nkey not found");
	reverse_Display(HEAD);
	create_LL(&HEAD1,data1,3);
	display_LL(HEAD1);
	create_LL(&HEAD2,data2,3);
	display_LL(HEAD2);
	merge_LL(&HEAD3,HEAD1,HEAD2);
	
	create_LL(&HEAD4,data3,7);
	display_LL(HEAD4);
	sort_LL(HEAD4,&SHEAD);
	printf("\nAfter Sorting");
	display_LL(SHEAD);
	reverse_LL(SHEAD);
	display_LL(SHEAD);
	
	return 0;
}
