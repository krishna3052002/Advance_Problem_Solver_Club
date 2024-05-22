#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n)5;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll>b(n);
        for(ll i=0;i<n;i++)
        {
          cin>>b[i];
        }
        sort(b.begin(),b.end());
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<=i;j++)
            {
                a[j]=a[j]+1;
            }
            sort(a.begin(),a.end());
        }
    }
}