#include<bits/stdc++.h>
using namespace std;
struct  node
{
    int data;
    node *next;

};
node *root=NULL;
void Insert(int x)
{
    if(root==NULL)
    {
        root =new node();
        root->data=x;
        root->next=NULL;
    }
    else
    {
        node *currentnode=root;
        while(currentnode->next!=NULL)
        {
            currentnode=currentnode->next;
        }
        node *newnode=new node();
        newnode->data=x;
        newnode->next=NULL;
        currentnode->next=newnode;
    }
}
void Del(int x)
{
     node *currentnode=root;
     node *previousnode=NULL;
     while(currentnode->data!=x)
     {
         previousnode=currentnode;
         currentnode=currentnode->next;
     }
     if(currentnode==root)
     {
         node *temp=root;
         root =root->next;
         delete(temp);
     }
     else
     {
         previousnode->next=currentnode->next;
         delete(currentnode);
     }
}
void print()
{
    node *currentnode=root;
    while(currentnode!=NULL)
    {
        cout<<currentnode->data<<endl;
        currentnode=currentnode->next;
    }
}
int main()
{
    int n,a,b,c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        Insert(a);
    }
    print();
    Del(5);
    cout<<endl;
    print();
    return 0;
}
