#include <bits/stdc++.h>
using namespace std;

const int N = 5010;
int dp[1005];
// dp[n] is the state of DP
int func(vector<int> &prices, int len)
{
    if (len == 0)
        return 0;
    if (dp[len] != -1)
        return dp[len];
    int ans = 0;
    for (int i = 1; i <= prices.size(); i++)
    {
        if (len - i >= 0)
            ans = max(ans, func(prices, len - i) + prices[i - 1]);
    }
    return dp[len] = ans;
}
int cutRod(int price[], int n)
{
    vector<int> prices(price, price + n);
    memset(dp, -1, sizeof(dp));
    return func(prices, n);
}
int main()
{
    int n;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; i++)
        cin >> price[i];
    cout << cutRod(price, n);
}