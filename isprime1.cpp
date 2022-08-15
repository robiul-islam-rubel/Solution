#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
			break;
		}
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
  if(isprime(n))
  {
  	cout<<"Yes"<<endl;
  }
  else
  {
  	cout<<"No"<<endl;
  }
	return 0;
}
