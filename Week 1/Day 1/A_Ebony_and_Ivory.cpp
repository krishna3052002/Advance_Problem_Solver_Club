#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i*a<=c;i++)
    {
        for(int j=0;(i*a+j*b)<=c;j++)
        {
            if((i*a+j*b)==c)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
}