#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll odd=0;
        for(ll i=0;i<k;i++)
        {
            if(a[i]%2!=0)
            {
                odd++;
            }
        }
        ll ans=0;
        if(odd>0)
        {
            ans++;
        }
        for(ll i=k;i<n;i++)
        {
            if(a[i-k]%2!=0)
            {
                odd--;
            }
            if(a[i]%2!=0)
            {
                odd++;
            }
            if(odd>0)
            {
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
return 0;
}