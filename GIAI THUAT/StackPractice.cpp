#include <iostream>
using namespace std;

class Node
{
	public:
	int Info;
	Node * Next;
	Node(int x)
	{
		this -> Info = x;
		this -> Next = NULL;
	}
	friend class Stack;
};
class Stack
{
	private:
		Node * Topnext;
	public:
		Stack()
		{
			this -> Topnext = NULL;
		}
		bool isEmpty()
		{
			return Topnext == NULL;
		}
		void push(int x)
		{
			Node * temp = new Node(x);
			if(!temp)
			{
				cout << "Stack Overflow";
				exit(1);
			}
			temp -> Next = Topnext;
			Topnext = temp;
		}
		void peek()
		{
			if(!isEmpty())
			{
				return Topnext -> Info;
			}
			else
			{
				exit(1);
			}
		}
		void pop()
		{
			Node * p = Topnext;
			if(Topnext == NULL)
			{
				cout << "Stack Overflow";
				exit(1);
			}
			else
			{
				Topnext = Topnext -> Next;
				free(p);
			}
		}
		void display()
		{
			Node * p = Topnext;
			if(Topnext == NULL)
			{
				cout << "Stack Overflow";
				exit(1);
			}
			else
			{
				while(p != NULL)
				{
					cout << p -> Info;
					p = p -> Next;
				}
			}
		}
};
int main()
{

}