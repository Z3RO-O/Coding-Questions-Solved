#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
// cin.tie & cout.tie automatically flushes
// sync disables synchronization between c & c++
// as a side effect it makes execution of code faster
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define testcase while (tc--)
#define for0 for (i = 0; i < n; i++)
#define vi vector<int>
#define si set<int>
#define vs vector<string>
#define pii pair<int, int>
#define mii map<int, int>
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
    // Start Code
    int n, val, i;
    sf("%d", &n);
    ll moves = 0;
    vi a;
    for0
    {
        sf("%d", &val);
        a.eb(val);
    }
    sort(a.begin(), a.end());
    for0
    {
        if (a[i] < (i + 1))
            moves += i + 1 - a[i];
        if (a[i] > (i + 1))
            moves += a[i] - (i + 1);
    }
    cout<<moves;
    return 0;
}