#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
#define T while (t--)
#define for0 for (i = 0; i < n; i++)
#define for1 for (j = 1; j <= n; j++)
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

// Toh Chaliye Shuru karte...
main
{
    int n, m, a, b, A, B;
    cin >> n >> m >> a >> b;
    A = m * a, B = b;
    if (A <= B)
        cout << a * n << endl;
    // comparing prices for same number of times travelling
    else
        cout << n / m * b + (b > n % m * a ? n % m * a : b) << endl;
    // if cost of remainder of the tickets is lesser when bought using "a" rubles then we take n % m * a otherwise "b" rubles
    return 0;
}