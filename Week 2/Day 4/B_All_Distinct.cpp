#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        stack<int>s;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int count=0;
        for(auto c:v)
        {
            if(s.empty())
            {
                s.push(c);
            }
            else{
                int x=s.top();
                if(x==c)
                {
                  count++;
                }
                else
                {
                    s.push(c);
                }
            }
        }
        if(count%2==0)
        {
            cout<<n-count<<endl;
        }
        else
        {
            cout<<n-(count+1)<<endl;
        }
    }
}