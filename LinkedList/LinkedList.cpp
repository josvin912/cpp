#include "LinkedList.h"
#include<iostream>

using namespace std;

LinkedList::LinkedList()
{
	head=new Node;
	head->data=0;
	head->next=NULL;
}
LinkedList::~LinkedList()
{
	delete head;
	head=NULL;
}
void LinkedList::Create_LL(int data[],int n){
	Node *current=head,*newnode;
	for(int i=0;i<n;i++)
	{
		newnode=new Node;
		newnode->data=data[i];
		newnode->next=NULL;
		current->next=newnode;
		current=newnode;
	}
}
void LinkedList::Display_LL()
{
	Node* ptr; 
	ptr=head->next;
	cout<<"\nList : ";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

void LinkedList::Insert_LL(int x)
{
	Node *newnode;
	newnode=new Node;
	newnode->data=x;
    newnode->next=	head->next;
	head->next=newnode;
}

LinkedList & LinkedList :: operator ~()
{
	Node *p,*q,*temp;
	p=head->next;
	q=head->next->next;
	while(q->next != NULL){
        temp=q->next;
		q->next=p;
		p=q;
		q=temp;
	}
	q->next=p;
	head->next->next=NULL;
	head->next=q;
	
	return *this;
}
