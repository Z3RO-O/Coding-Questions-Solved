#include <bits/stdc++.h>
using namespace std;

const int N = 5010;
int dp[1005][1005];
// dp[n] is the state of DP
int lcs(int i, int j, string &a, string &b)
{
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = lcs(i - 1, j, a, b);
    ans = max(ans, lcs(i, j - 1, a, b));
    ans = max(ans, lcs(i - 1, j - 1, a, b) + (a[i] == b[j]));
    return dp[i][j] = ans;
}
int longestCommonSubsequence(string text1, string text2)
{
    memset(dp, -1, sizeof(dp));
    return lcs(text1.size() - 1, text2.size() - 1, text1, text2);
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << longestCommonSubsequence(a, b);
}