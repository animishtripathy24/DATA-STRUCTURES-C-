#include<iostream>
using namespace std;

//creating a node
class Node
{
    public:
        int data;
        Node* next;
    
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    //destructor
	~Node()
	{
		int value = this->data;
		if(this->next != NULL)
		{
			delete next;
			this->next= NULL;
		} 
		cout << "Memory freed for data " << value << endl;
	}
};

//handling the tail node problem
void deleteAtTail(Node* &tail,Node* &current,Node* &prev)
{
	tail=prev;
	prev->next = NULL;
	current->next=NULL;
	delete current;
	
}

//deleting node
void deleteNode(Node* &head,Node* &tail,int position)
{
	//deleting the start node 
	if(position == 1)
	{
		Node*temp=head;
		head = head->next;
		temp->next = NULL;
		//To free the memory
		delete temp;
	}
	else
	{
		//deleting any middle node or last node
		Node* current = head;
		Node* prev =NULL;
		int count = 1;
		while(count < position)
		{
			prev = current;
			current = current->next;
			count++;
		}
        //if we have to delete the tail node then how to handle the tail pointer problem
		if(current->next == NULL )
		{
			deleteAtTail(tail,current,prev);
			return;
		}
		else
		{
			prev->next = current->next;
			current->next = NULL;
            //memory freed for current node 
			delete current;	
		}

	}
}
//inserting a new node at head
void insertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);

    temp->next=head;
    head=temp;

}

//inserting the new Node at tail

void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}

//inserting the new node at any middle position

void insertAtposition(Node* &head,Node* &tail,int position,int data)
{
    if(position==1)
    {
        insertAtHead(head,data);
        return;
    }
    //sabse pehle me first node me hounga...toh count=1 hoga
    int count=1;
    //ek temp node bana lenge....
    Node* temp=head;
    while(count < position-1)
    {
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL)
    {
        insertAtTail(tail,data);
        return;
    }

    //ab ek new node create kar lenge..
    Node* newNode=new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;
}

//traversing the singly linked list
void print(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main()
{
    Node* node1=new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    //creating a head pointer
    Node* head=node1;
    //creating a tail pointer
    Node* tail=node1;
    cout << head->data << endl;
    cout << head->next << endl;

    cout << endl;

    print(head);

    insertAtHead(head,12);

    print(head);
    insertAtHead(head,15);
    print(head);

    insertAtTail(tail,9);
    print(head);

    insertAtTail(tail,5);
    print(head);

    insertAtposition(head,tail,1,50);
    print(head);

    insertAtposition(head,tail,7,100);
    print(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    deleteNode(head,tail,7);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;


    return 0;
}