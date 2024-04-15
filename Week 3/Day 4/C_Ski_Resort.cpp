#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        vector<ll>a;//
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            a.push_back(x);
        }
        ll cons=0;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=q){
                cons++;
                if(i==n-1 || a[i+1]>q){
                    if(cons>=k){
                        ll x=cons-k+1ll;
                        ll add=(x*(x+1ll))/2;
                        ans+=add;
                    }
                    cons=0;
                }
            }
        }
        cout<<ans<<endl;
    }
}