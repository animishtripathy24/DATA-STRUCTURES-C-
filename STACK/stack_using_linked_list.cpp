#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		
	//constructor
	public:
		Node(int data)
		{
			this->data = data;
			this->next=NULL; 
		}
	//destructor
	~Node()
	{
		int value = this->data;
		if(this->next==NULL)
		{
			delete next;
			this->next=NULL;	
		}	
		cout << "Memory freed for data " << value << endl;
	}	
};


void push(Node* &top,int data)
{
	Node *temp=new Node(data);
	if(top==NULL)
	{
		top=temp;
		return;
	}
	else
	{
		temp->next=top;
		top=temp;
	}
}

void pop(Node* &top)
{
	if(top==NULL)
	{
		cout << "stack underflow " << endl;
		return;	
	}	
	else
	{
		Node* temp=top;
		top=top->next;
        temp->next=NULL;
		delete temp;
	}
}
int peek(Node* &top)
{
	if(top==NULL)
	{
		return -1;
	}
	else
	{
		return top->data;
	}
}
bool isEmpty(Node* &top)
{
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void display(Node* &top)
{
	Node *temp=top;
	while(temp!= NULL)
	{
		cout << temp->data << " ";
		temp=temp->next;
	}
	cout << endl;
}
int main()
{
	Node *node1=new Node(22);
	Node *top=node1;
	
	push(top,25);
	push(top,35);
	display(top);
	
	pop(top);
	display(top);
	
	cout << "Top element of the stack is  " << peek(top) << endl;
	cout << "stack empty???  " << isEmpty(top) << endl;
	
	return 0;
}