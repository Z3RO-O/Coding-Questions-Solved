#include <bits/stdc++.h>
using namespace std;

const int N = 5010;
int dp[300][N];
// dp[n] is the state of DP
int ways(int ind, int amount, vector<int> &coins)
{
    if (amount == 0)
        return 1;
    if (ind < 0 || amount < 0)
        return 0;
    if (dp[ind][amount] != -1)
        return dp[ind][amount];
    int way = 0;
    // More Optimal
    way += ways(ind - 1, amount, coins);
    way += ways(ind, amount - coins[ind], coins);
    // Time Limit Exceeds
    // for (int coin_value = 0; coin_value <= amount; coin_value += coins[ind])
    // {
    //     way += ways(ind - 1, amount - coin_value, coins);
    // }
    return dp[ind][amount] = way;
}
int coinChange(int amount, vector<int> &coins)
{
    memset(dp, -1, sizeof(dp));
    return ways(coins.size() - 1, amount, coins);
}
int main()
{
    int n, amount;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    cin >> amount;
    cout << coinChange(amount, coins);
}