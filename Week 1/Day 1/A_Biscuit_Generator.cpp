#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    int ans=0;
    int k=2,i=a;
    while(i<=t+0.5)
    {
        ans=ans+b;
        i=k*a;
        k++;

    }
    cout<<ans<<endl;
}