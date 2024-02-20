#include <bits/stdc++.h>
using namespace std;

const int I5 = 1e5 + 10;
long long dp[105][I5];
long long wt[105], val[105];
// dp[n] is the state of DP
long long func(int ind, int wt_left)
{
    if (wt_left == 0 || ind < 0)
        return 0;
    if (dp[ind][wt_left] != -1)
        return dp[ind][wt_left];
    // Not Take
    long long ans = func(ind - 1, wt_left);
    // Take
    if (wt_left - wt[ind] >= 0)
        ans = max(ans, func(ind - 1, wt_left - wt[ind]) + val[ind]);
    return dp[ind][wt_left] = ans;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];
    cout << func(n - 1, w);
}