#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll size = n + m + 1;
        vector<ll> a(size), b(size);
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < size; i++)
        {
            cin >> b[i];
        }
        vector<ll> ans(size);
        for (int i = 0; i < size; i++)
        {
            ll t_skil = 0;
            ll N = n, M = m;
            for (int j = 0; j < size; j++)
            {
                if (j != i)
                {
                    if (a[j] > b[j])
                    {
                        if (N != 0)
                        {
                            t_skil = t_skil + a[j];
                            N--;
                        }
                        else if (M != 0)
                        {
                            t_skil = t_skil + b[j];
                            M--;
                        }
                    }
                    else if (b[j] > a[j])
                    {
                        if (M != 0)
                        {
                            t_skil = t_skil + b[j];
                            M--;
                        }
                        else if (N != 0)
                        {
                            t_skil = t_skil + a[j];
                            N--;
                        }
                    }
                }
            }
            ans[i]=t_skil;
        }
        for(auto c: ans)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}