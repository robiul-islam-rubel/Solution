#include<bits/stdc++.h>
using namespace std;
int minrefils(int x[],int n,int L)
{
	int n_ref=0;
	int c_ref=0;
	while(c_ref<=n)
	{
	  int l_ref=c_ref;
	  while(c_ref<=n&&x[c_ref+1]-x[l_ref]<=L)
	  {
	     c_ref=c_ref+1;
	  }

	  if(c_ref<=n)
	  {
	    n_ref=n_ref+1;
	  }
	}
	return n_ref;
}
int main()
{
    int d,m,n;
    cin>>d>>m>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=minrefils(a,m,d);
    cout<<k<<endl;
	return 0;
}
