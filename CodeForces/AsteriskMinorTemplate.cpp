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
    // Toh Chaliye Shuru karte...
    string a, b, temp = "", mx, mn;
    cin >> a >> b;
    int n = a.size(), m = b.size(), k = 0;
    if (n > m)
    {
        mx = a, mn = b;
    }
    else
        mn = a, mx = b;
    if (a[0] == b[0])
        cout << "YES\n"<< a[0] << "*" << endl;
    else if (a[n - 1] == b[m - 1])
        cout << "YES\n*" << a[n - 1] << endl;
    else
    {
        n = mx.size(),m = mn.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (mx.substr(i, 2) == mn.substr(j, 2))
                {
                    temp += mx.substr(i, 2);
                    break;
                }
            }
            if (temp.size() == 2)
                break;
        }
        if (temp.size() == 2)
            cout << "YES\n*" << temp << "*" << endl;
        else
            cout << "NO" << endl;
    }
}
main
{
    fast;
    T solve();
    return 0;
}