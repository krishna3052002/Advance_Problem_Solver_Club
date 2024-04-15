#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll sum=0;

        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            sum=sum+abs(v[i]);
        }
        ll l=0,r=0,count=0;

        while(l<n)
        {
            if(v[l]>=0)
            {
                l++;
            }
            else{
                r=l;
                while(r<n && v[r]<=0)
                {
                    r++;
                }
                l=r;
                count++;
            }
        }
        cout<<sum<<" "<<count<<endl;

    }
}