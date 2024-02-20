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

main
{
    fast;
    int t, i = 1;
    cin >> t;
    while (i <= t)
    {
        // Toh Chaliye Shuru karte hai...
        int n;
        cin >> n;
        vector<long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(all(a));
        double f, l;
        if (n == 5)
        {
            f = (a[0] + a[1]) / 2.0;
            l = (a[3] + a[4]) / 2.0;
            if(l-a[2]>a[2]-f)
                ;
            else ;
        }
        else
        {
            f = (a[0] + a[1]) / 2.0;
            l = (a[n - 2] + a[n - 1]) / 2.0;
        }
        cout << "Case #" << i++ << ": " << setprecision(16) << (l - f) << endl;
    }
    return 0;
}
