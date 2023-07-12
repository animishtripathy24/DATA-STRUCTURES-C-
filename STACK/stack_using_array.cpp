#include<bits/stdc++.h>
using namespace std;

class Stack
{
	public:
		
	//properties
	int top;
	int *arr;
	int size;
	
	public:
		
	//behaviour
	Stack(int size)
	{
		this->size =size;
		arr=new int[size];
		top=-1;
	}
	
	void push(int element)
	{
		if(size-top>1)
		{
			top++;
			arr[top]=element;
		}
		else
		{
			cout << "STACK OVERFLOW" << endl;
		}
	}
	
	void pop()
	{
		if(top>=0)
		{
			int element=arr[top];
			top--;
			cout << element << " is deleted from the stack" << endl;
		}
		else
		{
			cout << "STACK UNDERFLOW" << endl;
		}
	}
	
	int peek()
	{
		if(top>=0)
		{
			return arr[top];
		}
		else
		{
			return -1;
		}
	}
	
	bool isEmpty()
	{
		if(top==-1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void display()
	{
		if(top==-1)
		{
			cout << "EMPTY STACK" << endl;
		}
		else
		{
			for(int i=top;i>=0;i--)
			{
				cout << arr[i] << endl;
			}
		}
	}
	
};

int main()
{
	Stack st(5);
	st.push(22);
	st.push(43);
	st.push(44);
	st.push(50);
	st.push(60);
	cout << st.peek() << endl;
	st.pop();	
	st.display();
	
	return 0;
}