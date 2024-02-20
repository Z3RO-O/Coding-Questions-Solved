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
#define for1 for (i = 1; i <= n; i++)
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
ll v[I5 + 10];
ll pfi[I5 + 10];
ll u[I5 + 10];
ll pfs[I5 + 10];
main
{
    // Start Code
    int n, m, type, l, r, i;
    cin >> n;
    for1
    {
        cin >> v[i];
        pfi[i] += pfi[i - 1] + v[i];
    }
    copy(v, v + n + 1, u);
    sort(u, u + n + 1);
    for1
    {
        pfs[i] += pfs[i - 1] + u[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> type >> l >> r;
        if (type == 1)
            cout << pfi[r] - pfi[l - 1] << endl;
        else
            cout << pfs[r] - pfs[l - 1] << endl;
    }
    return 0;
}