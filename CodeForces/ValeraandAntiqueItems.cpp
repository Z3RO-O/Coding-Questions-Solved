#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
#define T     \
    cin >> t; \
    while (t--)
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
    int n, v, i, s, val, pos;
    multiset<int> antique;
    cin >> n >> v;
    int j = n - 1, N = n;
    while (n--)
    {
        pos = 0;
        cin >> s;
        for (int i = 0; i < s; i++)
        {
            cin >> val;
            if (val < v)
            {
                pos = 1;
            }
        }
        if (pos == 1)
            antique.insert(N - j);
        j--;
    }
    cout << antique.size() << endl;
    for (auto it : antique)
    {
        cout << it << " ";
    }
    return 0;
}