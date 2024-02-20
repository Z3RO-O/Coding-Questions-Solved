#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int dp[N];
// dp[n] is the state of DP
int func(int amount, vector<int> &coins)
{
    if (amount == 0)
        return 0;
    if (dp[amount] != -1)
        return dp[amount];
    int ans = INT_MAX;
    // int take,notTake;
    // take = 1+func(ind,amount-coins[ind],coins);
    // notTake = func(ind-1,amount,coins);
    // return min(take,notTake);
    for (int coin : coins)
    {
        if (amount - coin >= 0)
            ans = min(ans + 0LL, func(amount - coin, coins) + 1LL);
    }
    return dp[amount] = ans;
}
int coinChange(int amount, vector<int> coins)
{
    memset(dp, -1, sizeof(dp));
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans;
}
int main()
{
    vector<int> coins;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        coins.push_back(val);
    }
    int amount;
    cin >> amount;
    cout << coinChange(amount, coins);
}