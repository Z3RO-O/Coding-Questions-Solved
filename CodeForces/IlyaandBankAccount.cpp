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
    int n, cpy, count = 1, l, sl, nc;
    cin >> n;
    cpy = n, nc = n;
    if (n >= 0)
        cout << n; // for positive numbers
    else
    {
        while (nc != 0)
        {
            nc /= 10;
            count *= 10;
        }
        l = cpy % 10, cpy /= 10, sl = cpy % 10;
        if (-1 * l >= -1 * sl)
            cout << n / 10;
        else
        {
            if (to_string(n / 100) == "0")
                cout << to_string(l);
            else
                cout << to_string(n / 100) + to_string(-1 * l);
        }
    }
    return 0;
}