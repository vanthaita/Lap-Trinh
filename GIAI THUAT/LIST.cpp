#include <iostream>
using namespace std;
struct Node
{
	int Value;
	Node *next;
};


typedef struct Node * node;

Node makenode(int x)
{
	node temp = new node();
	temp -> value = x;
	temp -> next = NULL;
	return temp;
}

int Size(node a)
{
	int cnt = 0;
	while(a->next != NULL)
	{
		cnt++;
	}
	return cnt;
}
void insertFirst(node &a, int x)
{
	node temp = makenode(x);
	if(a == NULL)
	{
		temp = a;
	}
	else
	{
		temp -> next = a;
		a = temp;
	}
}

void insertLast(node &a, int x)
{
	node temp = new node();
	if(a == NULL)
	{
		a = temp;
	}
	else
	{
		node p = a;
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}
}

void insertMiddle(node &a, int x, int pox)
{
	int n = Size(a);
	if(pos < 1 || pos > n)
	{
		cout << "KHONG HOP LE\n";
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
		node p = a;
		node temp = new node();
		for (int i = 0; i < pos; i++)
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
	a = a->next;
}

void deleteLast(node &a)
{
	if(a == NULL)
	{
		return;
	}
	node truoc = NULL, sau = a;
	while(sau -> next != NULL)
	{
		truoc = sau;
		sau = sau->next;
	}
	if (truoc == NULL)
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
	for (int i = 0; i < pos; i++)
	{
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL)
	{
		a = a->next;
	}
	else
	{
		truoc -> next = sau -> next;
	}
}
void in(node &a)
{
	while(a->next != NULL)
	{
		cout << a->Value <<" ";
		a = a->next;
	}
}

int main()
{

}