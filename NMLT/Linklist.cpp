#include <iostream>

using namespace std;
struct node
{
	int info;
	node *next;
};
struct list
{
	int n;
	node *head;
};

int main()
{
	list l;
	l.head = NULL;
	int x,y;
	cin >> x;
	while(x != 3)
	{
		node *p = new node;
		cin >> y;
		p->info = y;
		p->next = NULL;

		if(l.head == NULL)
			l.head = p;
		else
		{
			p->next = l.head;
			l.head = p;
		}
		cin >> x;
	}
	node *p = l.head;
	while(p != NULL)
	{
		cout << p->info << " ";
		p = p->next;
	}
	return 0;
}