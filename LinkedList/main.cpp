#include <iostream>
#include "LinkedList.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int data[]={4,5,6};
	LinkedList mylist;
	mylist.Create_LL(data,3);
	mylist.Display_LL();
	mylist.Insert_LL(3);
	mylist.Display_LL();
	mylist.Insert_LL(2);
	mylist.Display_LL();
	~mylist;
	mylist.Display_LL();
	~mylist;
	mylist.Display_LL();
	return 0;
}
