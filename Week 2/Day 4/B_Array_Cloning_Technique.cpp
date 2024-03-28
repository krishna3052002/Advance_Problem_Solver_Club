#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        map<int,int>freq;
        int max_freq=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            freq[x]++;
            max_freq=max(max_freq,freq[x]);
        }
        
        int ans=0;
        while(max_freq<n)
        {
           int rem=n-max_freq;
           int add=max_freq;
           ans++;
           ans+=min(add,rem);
           max_freq+=min(add,rem);
        }
        cout<<ans<<endl;
        
    }
}
