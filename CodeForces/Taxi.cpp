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

// Toh Chaliye Shuru karte...
main
{
    fast;
    int mini, n, i, val, taxi = 0;
    cin >> n;
    mii m;
    for0
    {
        cin >> val;
        m[val]++;
    }
    taxi += m[4];
    if (m[3] != 0 && m[1] != 0)
    {
        mini = min(m[3], m[1]);
        taxi += mini;
        m[3] -= mini, m[1] -= mini;
    }
    taxi += m[3];
    if (m[2] != 0)
    {
        mini = m[2] / 2;
        taxi += mini;
        m[2] %= 2;
    }
    if (m[2] != 0 && m[2] <= m[1])
    {
        mini = m[1] / 2 >= m[2] ? m[2] : m[1] / 2;
        taxi += mini;
        m[2] -= mini, m[1] -= mini*2;
    }
    if (m[2] != 0 && m[1] != 0)
    {
        taxi += 1;
        m[2] -= 1, m[1] -= 1;
    }
    taxi += m[2];
    if (m[1] != 0)
    {
        mini = m[1] / 4;
        taxi += mini;
        m[1] %= 4;
        mini = m[1] / 3;
        taxi += mini;
        m[1] %= 3;
        mini = m[1] / 2;
        taxi += mini;
        m[1] %= 2;
    }
    taxi += m[1];
    cout << taxi;
    return 0;
}