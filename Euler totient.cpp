#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int phi(ll n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) break;
        cout<<phi(n)<<endl;
    }
    return 0;
}
