#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,k,z;
    cin>>n;
    if(n<5)
    {
        cout<<n<<endl;
    }
    else if(n==5)
    {
        cout<<n<<endl;
    }
    else if(n<10)
    {
         k=n%5;
        z=n/5;
        cout<<k+z<<endl;
    }
    else if(n==10)
    {
        cout<<"1"<<endl;
    }
    else
    {
        while(n>=10)
        {
            c++;
            n-=10;
        }
        if(n>=5)
        {
            k=n%5;
            z=n/5;
            cout<<c+k+z<<endl;
        }
        else
        {
            cout<<c+n<<endl;
        }

    }
    return 0;
}
