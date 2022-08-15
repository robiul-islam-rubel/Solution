#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
}*head,*tail;




    void insert_at_last(int n)
    {
        node *t = new node;
        t->data = n;
        t->next = NULL;

        if(head == NULL)
        {
            head = t;
            tail = t;
        }
        else
        {
            tail->next = t;
            tail = tail->next;
        }
    }
    void delete_first()
    {
        if(head==nullptr)
        {
            cout<<"Empty"<<endl;
        }
        else if(head->next==nullptr)
        {
            head=nullptr;
        }
        else
        {
            head=head->next;
        }
    }

void show()
{
    if(head==nullptr)
    {
        cout<<"Empty "<<endl;
    }
    else
    {
        node *tt=head;
        while(tt!=NULL)
        {
            cout<<tt->data<<" ";
            tt=tt->next;
        }
        cout<<"\n";

    }
}

int main()
{

    int n;
    cout<<"Enter your number : ";
    cin>>n;
    insert_at_last(n);
    cout<<"Before deleting "<<endl;
    show();
    delete_first();
    cout<<"After deleting "<<endl;
    show();
    return 0;
}

