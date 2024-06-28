#include <iostream>
using namespace std;
class Node 
{
	int Info;
	Node * Next;
	Node(int Info)
	{
		this -> Info = x;
		this -> Next = NULL;
	}
	friend class Queue;
};

class Queue
{
	private:
		Node * Head;
		Node * Tail;
	public:
		Queue()
		{
			this -> Head = NULL;
			this -> Tail = NULL;
		}
		void push()
		{
			Node * p = new Node(x);
			if(Tail == NULL)
			{
				Head = Tail = p;
			}
			Tail -> next = p;
			Tail = p;
		}
		void pop()
		{
			if(Head == NULL)
			{
				return;
			}
			Node * p = Head;
			Head = Head -> Next;
			if(Head == NULL)
			{
				Tail = NULL;
			}
			delete(p);
		}
		void peek()
		{
			if(Head == NULL)
			{
				return;
			}
			cout << Head -> Info;
		}
		void isEmpty()
		{
			return Head == Tail == NULL;
		}

};

int main()
{

}