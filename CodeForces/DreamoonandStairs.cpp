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
    int n, m, min;
    cin >> n >> m;
    min = (n / 2 + n % 2);
    if (m > n)
        cout
            << -1 << endl;
    else
        cout << (min % m == 0 ? min : min + m - min % m) << endl; // m - min % m is used to convert step of size 2 into 1
    // Since when remainder is non zero we have to add dividend - remainder to make it multiple
    return 0;
}