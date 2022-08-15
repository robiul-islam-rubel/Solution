#include<iostream>
using namespace std;
typedef struct ListNode{


int data;
  ListNode *next;
}*nodeptr;
nodeptr head=NULL,curr;
void node_add_koro(int item)
{
    nodeptr newNode=new ListNode;
    newNode->data=item;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;

    }
    else
    {
        curr->next=newNode;
    }
    curr=newNode;
}

void ki_korle_dekhao()
{
    nodeptr ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
void first_node_del_koro()
{
    nodeptr ptr=head;
    head=ptr->next;
    delete(ptr);
}
void mid_node_del_koro(int item)
{
    nodeptr ptr=head,del;

    while(ptr->next->data!=item&&ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    del=ptr->next;
    ptr->next=ptr->next->next;
    delete(ptr);


}
void last_node_del_koro()
{
  nodeptr ptr=head,del;
  while(ptr->next!=NULL)
  {
      ptr=ptr->next;
      del=ptr->next;
      ptr->next=NULL;
      delete(ptr);

  }

}
int main()
{
    nodeptr ptr= NULL,curr;
    node_add_koro(4);
    node_add_koro(5);
    node_add_koro(6);
    node_add_koro(7);
    first_node_del_koro();
    ///display();
    last_node_del_koro();
    ///display();
    mid_node_del_koro(6);
    ki_korle_dekhao();

}
