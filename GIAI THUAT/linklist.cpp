#include <iostream>
using namespace std;


struct Node
{
	int value;
	Node *next;
};
typedef struct *Node node;
node makenode(int x)
{
	node temp = new node();
	temp->value = x;
	temp->next = NULL;
	return temp;
}

void Makelist(node &a);
{
	int x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		insertFirst(a,x);
	}
}

bool empty(node a)
{
	return a == NULL; 
}

int Size(node a)
{
	int cnt = 0;
	while(a != NULL)
	{
		a = a->next;
		cnt++;
	}
	return cnt;
}

void insertFirst(node &a, int x)
{
	node temp = makenode(x);
	if(a == NULL)
	{
		a = temp;
	}
	else
	{
		temp->next = a;
		a = temp;
	}
}
void insertLast(node &a, int x)
{
	node temp = makenode(x);
	if(a == NULL)
	{	
		a = temp;
	}
	else
	{
		node p = a;
		while(p -> next != NULL)
		{
			p = p->next;
		}
		p -> next = temp;
	}
}
void insertMiddle(node &a, int x, int pos)
{
	int n = Size(a);
	if(pos <= 0 || pos > pos + 1)
	{
		cout << "Vi tri khong hop le";
	}
	if(n == 1)
	{
		insertFirst(a,x); return;
	}
	else if(n == pos + 1)
	{
		insertLast(a,x); return;
	}
	else
	{
		node temp = makenode(x);
		node p = a;
		for (int i = 1; i < pos - 1; i++)
		{
			p = p->next;
		}
		temp->next = p->next;
		p->next = temp; 
	}
}

void deleteFrist(node &a)
{
	if(a == NULL)
	{
		return;
	}
	a = a -> next;
}
void deleteLast(node &a)
{
	n = Size(a);
	if(a == NULL)
	{
		return;
	}
	/*node p = a;
	for (int i = 0; i < n - 1; i++)
	{
		p = p->next;
	}
	p -> next = NULL;
	*/
	node truoc = NULL, sau = a;
	while(sau -> next != NULL)
	{
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL)
	{
		a = NULL;
	}
	else
	{
		truoc -> next = NULL;
	}
}

void deleteMiddle(node &a, int pos)
{
	if(pos <=  0 || pos > Size(a))
		return;

	node truoc = NULL, sau = a;
	for(int i = 0; i < pos;i++)
	{
		truoc = sau;
		sau = sau -> next;
	}
	if(truoc == NULL)
	{
		a = a->next;
	}
	else
	{
		truoc->next = sau->next;
	}
}

void in(node a)
{
	cout << "-----------------------------\n";
	while(a != NULL)
	{
		cout << a -> value << " ";
		a = a -> next;
		if(a ->next != NULL)
		{
			cout >> "->";
		}
	}
	cout << "-----------------------------\n";
}
void chanvale()
{
	
}

int main()
{
	node head = NULL;	
	Makelist(head);
	in(head);

	return 0;
}