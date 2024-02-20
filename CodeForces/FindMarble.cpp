#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
#define T while (t--)
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
main
{
    int n, t, s, j, count = 0;
    cin >> n >> s >> t;
    int p[I5 + 10];
    for1
    {
        cin >> p[j];
        if (s == t)
        {
            cout << 0 << endl;
            return 0;
        }
        else if (t == p[t] || s == p[s])
        {
            cout << -1 << endl;
            return 0;
        }
        else if (s != t && (j != p[j]))
            count++;
    }
    cout << count - 1 << endl;
    return 0;
}