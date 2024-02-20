#include <bits/stdc++.h>
using namespace std;

const int N = 5010;
int dp[205][20000];
// dp[n] is the state of DP
bool func(vector<int> &a, int n, int sum)
{
    if (sum == 0)
        return true;
    if (n < 0 || sum < 0)
        return false;
    if (dp[n][sum] != -1)
        return dp[n][sum];
    return dp[n][sum] = (func(a, n - 1, sum - a[n]) || func(a, n, sum));
}
bool canPartition(int a[], int n)
{
    vector<int> arr(a, a + n);
    int sum = accumulate(arr.begin(), arr.end(), 0);
    if (sum % 2 != 0)
        return false;
    memset(dp, -1, sizeof(dp));
    return func(arr, n - 1, sum);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << canPartition(a, n);
}