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
        string s;
        cin>>s;
        queue<char>q;
        for(char c: s)
        {
            char x=tolower(c);

            if(q.empty())
            {
                q.push(x);
            }
            else if(q.back()!=x)
            {
            //   cout<<q.back()<<endl;
              q.push(x);
            }
        }
        bool flag=true;
        string s2="meow";
       if(q.size()!=4)
       {
        cout<<"NO"<<endl;
       }
       else
       {
         for(char c:s2)
         {
            if(c!=q.front())
            {
                flag=false;
                break;
            }
            q.pop();
         }
         if(flag==true)
         {
            cout<<"YES"<<endl;
         }
         else
         {
            cout<<"NO"<<endl;
         }
       }

    }
}