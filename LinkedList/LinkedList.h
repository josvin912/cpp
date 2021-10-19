
class Node
{
	public:
	int data;
	Node* next;
};
class LinkedList
{
	Node* head;
	public:
		LinkedList();
		~LinkedList();
		void Create_LL(int[],int);
		void Display_LL();
		void Insert_LL(int);
		LinkedList &operator ~();
		
};
