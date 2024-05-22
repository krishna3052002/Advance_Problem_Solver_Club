#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long ans = 0;
    vector<int> v;
    if (n % 2 == 0)
    {
        ans = n / 2;
        for (int i = 0; i < ans; i++)
        {
            v.push_back(2);
        }
    }
    else
    {
        ans = (n / 2) - 1;
        for (int i = 0; i < ans; i++)
        {
            v.push_back(2);
        }
        v.push_back(3);
        ans++;
    }
    cout << ans << endl;
    for (auto c : v)
    {
        cout << c << " ";
    }
    cout << endl;
}