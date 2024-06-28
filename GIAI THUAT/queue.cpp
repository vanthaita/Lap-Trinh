#include <iostream>
class Node
{
	public:
		int Value;
		Node *Next;
		Node(int x)
		{
			this -> Value = x;
			this -> Next = NULL;
		}
	friend class Queue;
};

class Queue
{
	public:
		Node * front;
		Node * rear;
	Queue()
	{
		front = rear = NULL;
	}
	void push(int x)
	{
		Node * temp = new Node(x);
		if (rear == NULL)
		{
			front = rear = temp;
		}
		rear -> next = temp;
		rear = temp;
	}

	void pop()
	{
		if(front == NULL)
		{
			return;
		}
		Node * temp = front;
		front = front -> Next;
		if (front == NULL)
		{
			rear == NULL;
		}
		delete(temp);
	}
	
	void peek()
	{
		if(front == NULL)
		{
			return;
		}
		cout << front -> Value; 
	}

	void isEmpty()
	{
		return front == rear == NULL;
	}
};


int main()
{


}