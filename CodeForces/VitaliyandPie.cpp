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
    int n, count = 0;
    string s;
    cin >> n;
    cin >> s;
    n = 2 * n - 2;
    map<char, int> m;
    char c;
    for (int i = 0; i < n; i++)
    {
        c = s[i];
        if (islower(c))
            m[c]++;
        else
        {
            c = tolower(c);
            if (m[c] > 0)
                m[c]--;
            else
                count++;
        }
    }
    cout << count << endl;
    return 0;
}