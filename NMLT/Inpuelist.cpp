struct mole
{
    int info;
    mole *next;
};
struct list{
    int n;
    mole *head;
};
int main(){
    list l;
    l.head = NULL;
    int x,y;
    cin>>x;
    while(x != 3)
    {
        mole *p = new mole;
        cin>>y;
        p->info = y;
        p->next = NULL;
        if(l.head == NULL)
            l.head = p;
        else 
        {
            p->next = l.head;
            l.head = p;
        }
        cin>>x;
    }
    mole *p = l.head;
    while(p != NULL)
    {
        cout<<p->info<<" ";
        p =p->next;
    }
    return 0;
}