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
        string name="Timur";
       
       
        if(name.size()!=s.size())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int count=0;
            for(char c: name)
            {
                bool flag=false;
                for(int i=0;i<n;i++)
                {
                    
                    if(c==s[i])
                    {
                      flag=true;
                      break;
                    }
                    
                }
                if(flag==false)
                {
                    cout<<"NO"<<endl;
                    break;
                }
                count++;
            }
            if(count==5)
            {
                cout<<"YES"<<endl;
            }
           
        }
        

    }
}