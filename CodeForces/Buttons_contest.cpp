#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define T     \
    int t;    \
    cin >> t; \
    while (t--)
#define all(v) (v).begin(), (v).end()
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define for0(n) for (i = 0; i < n; i++)
#define for1(n) for (j = 1; j <= n; j++)
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

// SIEVE ALGO
void Sieve(vi &sieve)
{
    sieve[0] = 0, sieve[1] = 0;
    for (int i = 2; i <= 1e6; i++)
    {
        if (sieve[i] == 1)
        {
            int j = 2;
            while (i * j <= 1e6)
                sieve[i * j++] = 0;
        }
    }
}

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
    int a, b, c;
    bool ans = false;
    cin >> a >> b >> c;
    if (a > c)
        a -= c, c = 0;
    else
        c -= a, a = 0;
    if (a)
    {
        // cout<<"A is greateer";
        if (a > b)
            ans = true;
        else
        {
            b -= a;
            if (b % 2)
                ans = true;
            else
                ans = false;
        }
    }
    else
    {
        // cout<<"C is more";
        if (c > b)
            ans = false;
        else
        {
            b -= c;
            // cout<<"Else "<<b<<" .";
            if (b % 2)
                ans = true;
            else
                ans = false;
        }
    }
    cout << (ans ? "First\n" : "Second\n");
    // cout<<endl;
}
main
{
    fast;
    T solve();
    
    return 0;
}