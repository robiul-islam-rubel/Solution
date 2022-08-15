#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
const int MAX=10001;

int main()
{
          //ios_base::sync_with_stdio(0);
          //cin.tie(0);
         // cout.tie(0);

	ll a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;

         cout<<"Enter the size of the array: ";
         cin>>n;
         ll ar[n];
         for(i=0;i<n;i++)cin>>ar[i];

         for(i=0;i<n;i++)
		 {
		 	b=i;
		 	for(j=i+1;j<n;j++)
			{
				if(ar[b]>ar[j])
				{
					b=j;
				}
			}
			swap(ar[i],ar[b]);
		 }

	    for(i=0;i<n;i++)cout<<ar[i]<<" ";

	    cout<<"\n";

	return 0;
}
