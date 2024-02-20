#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> v(N);
vector<int> dp(N, -1);
// dp[n] is the state of DP
// O(n) approx
int lis(int i)
{
    int ans = 1;
    if (dp[i] != -1)
        return dp[i];
    for (int j = 0; j < i; j++)
    {
        if (v[i] > v[j])
            ans = max(ans, lis(j) + 1);
    }
    return dp[i] = ans;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, lis(i));
    cout << ans;
}