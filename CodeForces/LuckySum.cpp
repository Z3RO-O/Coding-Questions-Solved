#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
#define testcase while (t--)
#define for0 for (i = 0; i < n; i++)
#define for1 for (j = 1; j <= n; j++)
#define vi vector<int>
#define si set<int>
#define vs vector<string>
#define pii pair<int, int>
#define mii map<int, int>
#define ms map<string, int>
#define pb push_back
#define eb emplace_back
#define ull unsigned long long
#define ll long long
#define U unsigned int

const int I9 = 1e9;
const int I7 = 1e7;
const int I5 = 1e5;

// Toh Chaliye Shuru karte...
ll int next(ll int n)
{
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '4' && s[i] != '7')
            return next(n + 1);
    }
    return n;
}
main
{
    ll int l, r, i, sum = 0;
    cin >> l >> r;
    for (i = l; i < r + 1; i++)
        sum += next(i);
    cout << sum;
    return 0;
}