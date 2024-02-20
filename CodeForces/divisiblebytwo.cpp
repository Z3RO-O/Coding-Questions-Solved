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
int power(int n)
{
    int ans = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        ans++;
    }
    return ans;
}
main
{
    int c, i, j, t, val, p, n;
    vi a;
    cin >> t;
    testcase
    {
        p = 0, c = 0;
        cin >> n;
        for1
        {
            cin >> val;
            p += power(val);
        }
        if (p >= n)
            cout << c << endl;
        else
        {
            val = 0;
            for (i = n; i >= 1; i--)
            {
                cout << power(i) << " ";
                a.eb(power(i));
            }
            cout << endl;
            sort(a.begin(), a.end());
            for (i = n; i >= 1; i--)
            {
                p += a[i];
                c++;
                if (p >= n)
                {
                    cout << c << endl;
                    val = 1;
                    break;
                }
            }
            if (val == 0)
                cout << -1 << endl;
        }
    }

    return 0;
}