#include<bits/stdc++.h>
using namespace std;
class   baseclass
{
public:
    void dis()
    {
        cout<<"This is baseclass method"<<endl;
    }
};

class derived : public baseclass
{
public:
    void dis()
    {
        cout<<"This is derived method"<<endl;
    }
};
int main()
{
    derived d;
    d.dis();
    return 0;
}
