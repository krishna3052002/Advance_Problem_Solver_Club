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
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            int left=0+j;
            int right= (n-1)-j;
            if(left>right)
            {
              if(s[j]=='R')
              {
                
              }
            }
            else if(right>left)
            {

            }
        }
    }
}
}