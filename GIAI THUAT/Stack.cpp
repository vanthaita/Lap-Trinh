#include <iostream>
using namespace std;
class Node 
{
	public:
		char Value;
		Node * Next;

		Node(char x)
		{
			this -> Value = x;
			this -> Next = NULL;
		}
	friend class Stack;
};

class Stack
{
	Node * Topnext;
	public:
	Stack()
	{
		this -> Topnext = NULL;
	}
	void push(char x)
	{
		Node * temp = new Node(x);
		if(!temp)
		{
			cout << "\nStack Overflow";
			exit(1);
		}
		temp -> Next = Topnext;
		Topnext = temp;
	}
	bool isEmpty()
	{
		return Topnext == NULL;
	}
	char peek()
	{
		if(!isEmpty())
		{
			return Topnext -> Value;
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
			cout <<"\nStack Underflow";
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
			cout << "\n Stack Underflow";
			exit(1);
		}
		else
		{
			while(p != NULL)
			{
				cout << p -> Value;
				p = p -> Next;
			}
		}
	}
};
bool stackCheck(Stack L,int n, char x)
{	
	while(n--)
	{
		cin >> x;
		char CurChar = x;
		if(CurChar == '(' || CurChar == '{' || CurChar == '[')
		{
			L.push(CurChar);
		}
		else
		{
			if(L.isEmpty())
				return false;
			char prevChar = L.peek();
			L.pop();
			if((prevChar == '(' && CurChar == ')') || (prevChar == '{' && CurChar == '}') || (prevChar == '[' && CurChar == ']'));
			else
			{
				return false;
			}
		}
	}
	return L.isEmpty() ? true : false;
}
int main()
{
	Stack L;
	int n;
	cin >> n;
	char x;
    cout << stackCheck(L,n,x);
	return 0;
}