#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int count=0;
    for(int a=0;a<=s;a++)
    {
        for(int b=0;s>=a+b;b++)
        {
            for(int c=0;s>=a+b+c;c++)
            {
                if(a*b*c<=t)
                {
                      count++;
                }
            }
        }
    }
    cout<<count<<endl;
}