#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin>>x>>y;
    long long int i=x;
    int count=0;
    while(i<=y)
    {
        i=i*2;
        count++;
    }
    cout<<count<<endl;
}