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
        pair<int,int>ans;
        for(int i=1;i<=n;i++)
        {
          if(i*2<=n)
          {
            ans={i,i*2};
          }
          if(i*2>n)
          {
            break;
          }
        }
        cout<<__gcd(ans.first,ans.second)<<endl;
    }
}