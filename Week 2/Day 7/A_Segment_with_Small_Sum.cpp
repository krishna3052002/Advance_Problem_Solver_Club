#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n,s;
    cin>>n>>s;
    vector<long long int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    long long int  l=0,r=0,sum=0,ans=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=s)
        {
            // ans+=(r-l+1);
            ans=max(ans,(r-l+1));
            
        }
        else
        {
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
}