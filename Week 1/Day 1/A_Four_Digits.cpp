#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=s.length();
    queue<char>st;
    for(int k=0;k<4-i;k++)
    {
        st.push('0');
    }
    for(auto c:s)
    {
        st.push(c);
    }
    while (!st.empty())
    {
        /* code */
        cout<<st.front();
        st.pop();
    }
    cout<<endl;
    

   
}