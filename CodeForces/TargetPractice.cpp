#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define T     \
    int t;    \
    cin >> t; \
    while (t--)
#define all(v) (v).begin(), (v).end()
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define for0(n) for (int i = 0; i < n; i++)
#define for1(n) for (int j = 1; j <= n; j++)
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

void solve()
{
    // Toh Chaliye Shuru karte hai...
    int n = 10;
    char a[n][n];
    int score = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 'X')
            {
                if (((i == 0 || i == 9) && (j >= 0)) || ((j == 0 || j == 9) && i >= 0))
                    score++;
                else if (((i == 1 || i == 8) && (j >= 1)) || ((j == 1 || j == 8) && i >= 1))
                    score += 2;
                else if (((i == 2 || i == 7) && (j >= 2)) || ((j == 2 || j == 7) && i >= 2))
                    score += 3;
                else if (((i == 3 || i == 6) && (j >= 3)) || ((j == 3 || j == 6) && i >= 3))
                    score += 4;
                else if (((i == 4 || i == 5) && (j >= 4)) || ((j == 4 || j == 5) && i >= 4))
                    score += 5;
            }
        }
    }
    cout << score << endl;
}

main
{
    fast;
    T solve();
    return 0;
}