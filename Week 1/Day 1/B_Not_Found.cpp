#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int fa[26]={0};
    for(char c: s)
    {
      int x=c-97;
      fa[x]=1;
    }
    for(int i=0;i<26;i++)
    {
        if(fa[i]==0)
        {
            char x=97+i;
            cout<<x<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
}