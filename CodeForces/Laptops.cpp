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

main
{
    int n, count = 0, a, b;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[i].first = a, v[i].second = b;
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1].second > v[i].second) // on checking adjacent it will automatically create a condition of higher quality laptops with lesser price
        {
            count = 1;
            break;
        }
    }
    if (count)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
    return 0;
}