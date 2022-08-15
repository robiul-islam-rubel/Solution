#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPrime(ll n)
{
	// Check if n=1 or n=0
	if (n <= 1)
		return false;
	// Check if n=2 or n=3
	if (n == 2 || n == 3)
		return true;
	// Check whether n is divisible by 2 or 3
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	// Check from 5 to square root of n
	// Iterate i by (i+6)
	for (int i = 5; i <= sqrt(n); i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}
int fact(int n)
{
    if(n<=1)
    {

        return 1;
    }
    else return n*fact(n-1);
}
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
int fibb(int n)
{

    // Declare an array to store
    // Fibonacci numbers.
    // 1 extra to handle
    // case, n = 0
    int f[n + 2];
    int i;

    // 0th and 1st number of the
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;

    for(i = 2; i <= n; i++)
    {

       //Add the previous 2 numbers
       // in the series and store it
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
    }



void solve()
{
   ll a,b,c,d,e,f,g,h,odd(0),even(0),cnt(0),x,y,z,sum(0),n,k,l;







}



int main()
{
    ll t=1;
    ///cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

