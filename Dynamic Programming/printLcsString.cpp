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
string longestCommonSubsequence(string text1, string text2)
{
    memset(dp, -1, sizeof(dp));
    int i = text1.size(), j = text2.size();
    int mx = lcs(i - 1, j - 1, text1, text2);
    string s = string(mx, '*');
    mx--;
    while (i > 0 && j > 0)
    {
        if (text1[i - 1] == text2[j - 1])
        {
            s[mx--] = text1[i - 1];
            i--, j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }
    return s;
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << longestCommonSubsequence(a, b);
}