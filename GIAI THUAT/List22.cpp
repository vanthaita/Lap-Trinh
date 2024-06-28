#include <iostream>

using namespace std;

class Node
{
    int Value;
    Node next;
};

typedef class Node * node;

nopde makenode(int x)
{
    node temp = new Node();
    temp->value = x;
    temp->next = NULL;
    return temp;
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
void AddTwoNumbers()
{
    
}
int main()
{
    node head = NULL;
    makenode(head);

}