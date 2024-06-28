#include <iostream>
class Node
{
	public:
		char Info;
		Node *Next;

		Node(char x)
		{
			this -> Info = x;
			this -> Next = NULL;
		}
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
			Node * p = new Node();
			if(!p)
			{
				cout << "\nStack Overflow";
				exit(1);
			}
			p -> Info = x;
			p -> Next = Topnext;
			Topnext = p;

		}
		bool isEmpty()
		{
			return Topnext == NULL;
		}
		char peek()
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
			Node *p;
			if(Topnext == NULL)
			{
				if(Topnext == NULL)
				{
					cout << "\nStack Overflow" << endl;
					exit(1);
				}
			}
			else
			{
				p = Topnext;
				Topnext = Topnext -> Next;
				free(p);
			}
		}

		void display()
		{
			Node *p;

			if (top == NULL) {
            	cout << "\nStack Underflow";
            exit(1);
        	}
        	else
        	{
        		p = Topnext;
        		while(p != NULL)
        		{
        			cout << p -> Info;
        			p = p -> Next;
        			if(p != NULL)
        			{
        				cout << "->";
        			}
        		}
        	}
		}

};
int main()
{
	
}