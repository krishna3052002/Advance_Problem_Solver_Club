#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<ll> v(n+1,0);
        for (int i = 0; i < n; i++)
        {
           if(s[i]=='1')
           {
            v[i+1]=2;
           }
        }
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j+=i)
            {
                if(v[j]==0)
                {
                    ans+=i;
                    v[j]=1;
                }
                else if(v[j]==2){
                    break;
                }
            }
        }

       
        cout<< ans << endl;
    }
}