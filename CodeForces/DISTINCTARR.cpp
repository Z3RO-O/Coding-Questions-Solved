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
ll int md = 1e9 + 7;
ll int power(long long a, long long k)
{
    ll int res = 1;
    a %= md;
    while (k > 0)
    {
        if (k & 1)
            res = (res * a) % md;
        a = (a * a) % md;
        k >>= 1;
    }
    return res;
}
void solve()
{
    // Toh Chaliye Shuru karte hai...
    ll int n, k, ans;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        ans = power(2, k);
    }
    else
    {
        ans = power(2, k) - 1;
    }
    cout << ans << endl;
}
main
{
    fast;
    T solve();
    return 0;
}