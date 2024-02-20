#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int dp[1005][1005][1000005];
int countWays(string src, string target, int k)
{
    int n = src.size();
    int m = target.size();

    if (k == 0)
    {
        if (src == target)
            return 1;
        else
            return 0;
    }

    if (dp[n][m][k] != -1)
        return dp[n][m][k];

    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (src.substr(n - i) == target.substr(0, j))
            {
                ans = (ans + countWays(src.substr(0, n - i), target.substr(j), k - 1)) % MOD;
            }
        }
    }

    return dp[n][m][k] = ans;
}

int main()
{
    int K;
    string src, target;
    cin >> src >> target >> K;
    memset(dp, -1, sizeof(dp));
    int ways = countWays(src, target, K);
    cout << ways << endl;
    return 0;
}
