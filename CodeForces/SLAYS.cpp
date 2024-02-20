#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define T     \
    int t;    \
    cin >> t; \
    while (t--)
#define all(v) (v).begin(), (v).end()
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define for0 for (i = 0; i < n; i++)
#define for1 for (j = 1; j <= n; j++)
#define vi vector<int>
#define si set<int>
#define usi unordered_set<int>
#define vs vector<string>
#define pii pair<int, int>
#define mii map<int, int>
#define mci map<char, int>
#define msi map<string, int>
#define pb push_back
#define eb emplace_back
#define ull unsigned long long
#define ll long long
#define U unsigned int

const int I9 = 1e9;
const int I7 = 1e7;
const int I5 = 1e5;
/* direction array */
/*int dx4[] = {1, -1, 0, 0};
int dy4[] = {0, 0, 1, -1};
int dx6[] = {0, 0, 1, -1, 0, 0};
int dy6[] = {1, -1, 0, 0, 0, 0};
int dz6[] = {0, 0, 0, 0, 1, -1};
int dx8[] = {1, -1, 0, 0, -1, 1, -1, 1};
int dy8[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dkx8[] = {-1, 1, -1, 1, -2, -2, 2, 2};
int dky8[] = {2, 2, -2, -2, 1, -1, 1, -1};*/
/* direction array */

void solve()
{
    // Toh Chaliye Shuru karte hai...
    int n, q, l, r, mx1, mx2;
    cin >> n >> q;
    int v[5 * I5];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (q--)
    {
        mii m;
        cin >> l >> r;
        l--, r;
        mx1 = *max_element(v + l, v + r);
        mx2 = 0;
        for (int i = l; i < r; i++)
            m[v[i]]++;
        for (int i = l; i < r; i++)
        {
            if (mx2 < v[i] && v[i] != mx1)
                mx2 = v[i];
        }
        if (m[mx1] > 1)
            cout << mx1 + 1 << endl;
        else if (mx1 - mx2 <= 1 && m[mx2] > 1)
            cout << mx1 + 1 << endl;
        else if (mx1 - mx2 <= 1)
            cout << mx1 << endl;
        else if (m[mx1] == 1)
            cout << mx1 << endl;
        else
            cout << mx1 << endl;
    }
}
main
{
    fast;
    T solve();
    return 0;
}