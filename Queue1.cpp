#include<bits/stdc++.h>
using namespace std;
int ar[10],front=-1,rear=-1;
bool isFull()
{
    if(front==0)
    {
        return true;
    }
    return false;
}
bool isEmpty()
{
    if(front==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enQueue(int n)
{
    if(isFull())
    {
        cout<<"Queue is Full!"<<endl;
    }
    else
    {
        if(front==-1)
        {
            front=0;
            rear++;
            ar[rear]=n;
            cout<<"Inserted element : "<<n<<endl;
        }
    }
}
void deQueue()
{
    if(isEmpty())
    {
        cout<<"Queue is empty!"<<endl;

    }
    front++;
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<ar[i]<<endl;
    }
}
void solve()
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    display();

}
int main()
{
    solve();
}
