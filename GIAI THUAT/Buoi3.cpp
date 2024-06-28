#include <iostream>

using namespace std;

struct Node
{
    int Info;
    Node *pNext;
};
struct List
{
    Node *pHead = NULL;
    Node *pTail = NULL;
};

Node* CreateNode(int x)
{
    Node *p;
    p = new Node();
    if ( p==NULL) exit(1);
    p ->Info = x;
    p->pNext = NULL;
    return p;
}
void AddTail(List &l, Node* p)
{
    if (l.pHead==NULL)
    {
        l.pHead = p;
        l.pTail = l.pHead;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }

}
void CreateList(List &l)
{
    int x;
    cin >> x;
    while(x != 0)
    {
        Node * p = CreateNode(x);
        AddTail(l,p);
        cin >> x;
    }
}
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void soluong(List &l)
{
	Node * p = l.pHead;
	int cnt = 0;
	while(p ! =NULL)
	{
		cnt++;
	}
	return cnt;
}
void hoanDoi(List &L)
{
	Node * p = l.pHead;
	
}
void PrintList(List l)
{
    Node *p;
    p = l.pHead;
    int cnt = 0;
    int tmp = 1;
    while(p!=NULL)
    {
        cout << p->Info << " ";
        p = p->pNext;
    }
}
int main()
{
    List l;
    CreateList(l);
    
}