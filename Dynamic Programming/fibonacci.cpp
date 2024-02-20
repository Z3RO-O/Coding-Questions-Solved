#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int dp[N];
// fibo(n) --> nth fibonacci number
// dp[n] is the state of DP
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    // memoise
    if (dp[n] != -1)
        return dp[n];
    // for nth we need n-1th and n-2th number
    return dp[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << fibo(n);
}