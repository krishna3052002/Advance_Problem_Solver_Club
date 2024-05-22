#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a, int b)
{
       return __gcd(a, b);
}
int main()
{
       ll r, l;
       cin >> l >> r;
       ll ans = (r - l + 1) / 2;
       cout << "YES" << endl;
       while (l < r)
       {
              cout << l << " " << l + 1 << endl;
              l += 2;
       }
       return 0;
}