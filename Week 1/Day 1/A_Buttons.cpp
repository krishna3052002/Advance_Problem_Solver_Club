#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    // int ans=max(a,b);
    int ans;
    if(a>=b)
    {
      ans=a;
      a--;
    }
    else
    {
        ans=b;
        b--;
    }
    if(a>=b)
    {
      ans=ans+a;
    
    }
    else
    {
        ans=ans+b;
       
    }
    cout<<ans<<endl;

    

}