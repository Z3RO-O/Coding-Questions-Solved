#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
// cin.tie & cout.tie automatically flushes
// sync disables synchronization between c & c++
// as a side effect it makes execution of code faster
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define testcase while (t--)
#define for0 for (i = 0; i < n; i++)
#define for1 for (i = 1; i <= n; i++)
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
    // Start Code
    int n, k, joy, f, t;
    cin >> n >> k;
    cin >> f >> t;
    if (t <= k)
        joy = f;
    else
        joy = f - (t - k);
    for (int i = 1; i < n; i++)
    {
        cin >> f >> t;
        if (t <= k && joy < f)
            joy = f;
        else if (t > k)
        {
            if (joy < (f - (t - k)))
                joy = f - (t - k);
        }
    }
    cout << joy << endl;
    return 0;
}