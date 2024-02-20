#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int h[N];
vector<int> dp(N, -1);

int func(int i, int n)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;

    // Flight to city (i + 1)
    if (i - 1 >= 0)
        cost = min(cost, func(i - 1, n) + abs(h[i] - h[i - 1]));

    // Flight to city (i + 3)
    if (i - 3 >= 0)
        cost = min(cost, func(i - 3, n) + abs(h[i] - h[i - 3]));

    return dp[i] = cost;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> h[i];
    cout << func(n - 1, n);
}
