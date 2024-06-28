#include <iostream>
using namespace std;

struct Node
{
    int Info;
    Node *pNext;
};

struct List
{
    Node *pHead;
    Node *pTail;
};

Node* CreateNode(int x)
{
    Node *p = new Node();
    if (p == NULL) exit(1);
    p->Info = x;
    p->pNext = NULL;
    return p;
}

void AddTail(List &l, Node* p)
{
    if (l.pHead == NULL)
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
    l.pHead = NULL;
    l.pTail = NULL;
    int x;
    cin >> x;
    while (x != 0)
    {
        Node *p = CreateNode(x);
        AddTail(l, p);
        cin >> x;
    }
}

int countX(List l, int x)
{
    Node *p = l.pHead;
    int count = 0;
    while (p != NULL)
    {
        if (p->Info == x)
        {
            count++;
        }
        p = p->pNext;
    }
    return count;
}

void PrintList(List l)
{
    Node *p;
    p = l.pHead;
    if (p == NULL)
    {
        cout << "Danh sach rong." << endl;
        return;
    }
    cout << "Danh sach vua nhap la: ";
    while (p != NULL)
    {
        cout << p->Info << " ";
        p = p->pNext;
    }
    cout << endl;
}

void TanSo(List l, List &k)
{
    k.pHead = NULL;
    k.pTail = NULL;
    Node *p = l.pHead;
    while (p != NULL)
    {
        int x = p->Info;
        // Kiểm tra x đã được đếm hay chưa
        bool counted = false;
        Node *q = k.pHead;
        while (q != NULL)
        {
            if (q->Info == x)
            {
                counted = true;
                break;
            }
            q = q->pNext;
        }
        if (!counted)
        {
            int count = countX(l, x);
            Node *temp = CreateNode(x);
            AddTail(k, temp);
            temp = CreateNode(count);
            AddTail(k, temp);
        }
        p = p->pNext;
    }
}

int main()
{
    List l, k;
    CreateList(l);
    PrintList(l);
    TanSo(l, k);
    if (k.pHead == NULL)
    {
        cout << "Danh sach rong." << endl;
        return 0;
    }
    cout << "So lan xuat hien cua tung phan tu trong danh sach la: " << endl;
    Node *p = k.pHead;
    while (p != NULL)
    {
        cout << p->Info << ": " << p->pNext->Info << endl;
        p = p->pNext->pNext;
    }
    return 0;
}
