#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[205][205];
long long int topLeftSum;
long long int topRightSum;
long long int bottomLeftSum;
long long int bottomRightSum;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
int bottom_RightSum(int si, int sj)
{
    //  cout<<a[si][sj]<<endl;
    if (valid(si, sj) == false)
    {
        return 0;
    }
    else
    {
        bottomRightSum = bottomRightSum + a[si][sj];
        // cout<<a[si][sj]<<endl;
        // cout<<topLeftSum<<endl;
        bottom_RightSum(si + 1, sj + 1);
        return bottomRightSum;
    }
}
int bottom_LeftSum(int si, int sj)
{
    //  cout<<a[si][sj]<<endl;
    if (valid(si, sj) == false)
    {
        return 0;
    }
    else
    {
        bottomLeftSum = bottomLeftSum + a[si][sj];
        // cout<<a[si][sj]<<endl;
        // cout<<topLeftSum<<endl;
        bottom_LeftSum(si + 1, sj - 1);
        return bottomLeftSum;
    }
}
int top_RightSum(int si, int sj)
{
    //  cout<<a[si][sj]<<endl;
    if (valid(si, sj) == false)
    {
        return 0;
    }
    else
    {
        topRightSum = topRightSum + a[si][sj];
        // cout<<a[si][sj]<<endl;
        // cout<<topLeftSum<<endl;
        top_RightSum(si - 1, sj + 1);
        return topRightSum;
    }
}
int top_leftSum(int si, int sj)
{
    //  cout<<a[si][sj]<<endl;
    if (valid(si, sj) == false)
    {
        return 0;
    }
    else
    {
        topLeftSum = topLeftSum + a[si][sj];
        // cout<<a[si][sj]<<endl;
        // cout<<topLeftSum<<endl;
        top_leftSum(si - 1, sj - 1);
        return topLeftSum;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;
        // int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                topLeftSum = 0;
                topRightSum = 0;
                bottomLeftSum = 0;
                bottomRightSum = 0;
                ans = max(ans, top_leftSum(i, j) + top_RightSum(i - 1, j + 1) + bottom_LeftSum(i + 1, j - 1) + bottom_RightSum(i + 1, j + 1));
            }
        }
        cout << ans << endl;
    }
    return 0;
}