#include <bits/stdc++.h>
using namespace std;

const int I5 = 1e5 + 10;
long long dp[105][I5];
long long wt[105], val[105];
// In dp[n] n is the state of DP
// S0tates are index and value left
long long func(int ind, int val_left)
{
    if (val_left == 0)
        return 0;
    if (ind < 0)
        return 1e15; // so that this invalid value is neglected while taking minimum
    if (dp[ind][val_left] != -1)
        return dp[ind][val_left];
    // not Take
    long long ans = func(ind - 1, val_left);
    // Take
    if (val_left - val[ind] >= 0)
        ans = min(ans, func(ind - 1, val_left - val[ind]) + wt[ind]);
    return dp[ind][val_left] = ans;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];
    // Here i is the value and is started from maximum so that value becomes maximum as asked
    for (int i = I5; i >= 0; i--)
    {
        if (func(n - 1, i) <= w)
        {
            cout << i << endl;
            break;
        }
    }
}