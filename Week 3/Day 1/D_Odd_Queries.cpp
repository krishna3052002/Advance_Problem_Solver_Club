#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, q;
        cin >> n >> q;
        vector<long long int> v;
        vector<long long int> prefix_sum(n);

        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            v.push_back(x);
        }
        prefix_sum[0] = v[0];
        for (long long int i = 1; i < n; i++)
        {
            prefix_sum[i] = v[i] + prefix_sum[i - 1];
        }
        while (q--)
        {
            long long int l, r, k;
            cin >> l >> r >> k;
            l = l - 1;
            r = r - 1;
            
            long long int replace_sum = (r - l + 1) * k;
           
            long long int sum;
            if (l == 0)
            {
                sum = prefix_sum[n - 1] - prefix_sum[r];
            }
            else
            {
                sum = prefix_sum[n - 1] - (prefix_sum[r] - prefix_sum[l - 1]);
            }
            // cout<<endl;
            long long int total_sum = sum + replace_sum;
            if (total_sum % 2 != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
