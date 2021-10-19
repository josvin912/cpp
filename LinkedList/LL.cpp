 #include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

typedef struct Node NODE;
typedef struct Node* NODE_PTR;

void Create_LL(NODE_PTR *head,int data[],int n)
{
	
	int i;
	NODE_PTR current,newnode;
	(*head)=(NODE_PTR)malloc(sizeof(NODE));
	(*head)->data=NULL;
	(*head)->next=NULL;
	current=*head;
	for(i=0;i<n;i++)
	{
		newnode=(NODE_PTR)malloc(sizeof(NODE));
		newnode->data=data[i];
		newnode->next=NULL;
		current->next=newnode;
		current=newnode;
	}
}
void Insert_LL(NODE_PTR HEAD_PTR,int x){ //NODE_PTR* HEAD HEAD_PTR = NODE_ptr HEAD,ptr=HEAD->next
	NODE_PTR ptr,newnode;
	ptr=HEAD_PTR;//same as writing ptr=head->next
	newnode=(NODE_PTR)malloc(sizeof(NODE));
	newnode->data=x;
    newnode->next=	ptr->next;
	ptr->next=newnode;
}
void Append_LL(NODE_PTR HEAD_PTR,int x){//to insert last
	NODE_PTR ptr,newnode;
	ptr=HEAD_PTR;
	newnode=(NODE_PTR)malloc(sizeof(NODE));
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	newnode->data=x;
	ptr->next=newnode;
	newnode->next=NULL;
}
void Insert_After_LL(NODE_PTR HEAD_PTR,int x,int key){//to insert second last
	NODE_PTR SL_ptr,newnode;//SL_ptr,second last pointer 
	SL_ptr=HEAD_PTR->next;
	while(SL_ptr != NULL ){
		if(SL_ptr->data==key)
			break;
		SL_ptr=SL_ptr->next;
	}
	if(SL_ptr != NULL)
	{
		newnode=(NODE_PTR)malloc(sizeof(NODE));
		newnode->data=x;
		newnode->next=SL_ptr->next;
		SL_ptr->next=newnode;
	}
	else
	{
		printf("\nKey not found!");
	}
}
void Insert_Before_LL(NODE_PTR HEAD_PTR,int x,int key){//to insert before
	NODE_PTR ptr,newnode;//SL_ptr,second last pointer 
	ptr=HEAD_PTR;
	newnode=(NODE_PTR)malloc(sizeof(NODE));
	while(ptr != NULL ){
		ptr=ptr->next;
		if(ptr->next->data==key)
			break;
	}
	if(ptr != NULL)
	{
		newnode->data=x;
		newnode->next=ptr->next;
		ptr->next=newnode;
	}
	else
	{
		printf("\nKey not found!");
	}
}
void Remove_LL(NODE_PTR HEAD){//delete 1st node
	NODE_PTR temp;
	temp=HEAD->next;
	HEAD->next=temp->next;
	free(temp);
}
void Delete_Key(NODE_PTR HEAD,int key){//delete last node
	NODE_PTR SL_ptr,temp,ptr;//second last node pointer
	SL_ptr=HEAD;
	while(ptr != NULL ){
		if(ptr->next->data==key)
			break;
	}
	temp=SL_ptr->next;
	SL_ptr->next = temp->next;
	free(temp);
}
void Delete_LL(NODE_PTR HEAD){//delete last node
	NODE_PTR SL_ptr;//second last node pointer
	SL_ptr=HEAD->next;
	while(SL_ptr->next->next!=NULL){
		SL_ptr=SL_ptr->next;
	}
	free(SL_ptr->next);
	SL_ptr->next=NULL;
}
void reverse(NODE_PTR ptr)
{
	if(ptr!=NULL){
		reverse(ptr->next);
		printf("%d ",ptr->data);
	}
}
void Display_Reverse(NODE_PTR HEAD){
	printf("\nList : ");
	reverse(HEAD->next);
}
void Display_LL(NODE_PTR HEAD){
	NODE_PTR ptr; 
	ptr=HEAD->next;
	printf("\nList : ");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

int main()
{
	NODE_PTR HEAD=NULL;
	int data[]={3,4,5};
	Create_LL(&HEAD,data,3);
	Display_LL(HEAD);
	Insert_LL(HEAD,2);
	Display_LL(HEAD);
	Insert_LL(HEAD,1);
	Display_LL(HEAD);
	Append_LL(HEAD,9);
	Display_LL(HEAD);
	Insert_After_LL(HEAD,15,2);
	Display_LL(HEAD);
	Insert_Before_LL(HEAD,16,2);
	Display_LL(HEAD);
	Display_Reverse(HEAD);
	Display_LL(HEAD);
	Remove_LL(HEAD);
	Display_LL(HEAD);
	Delete_LL(HEAD);
	Display_LL(HEAD);
	return 0;
	
}
