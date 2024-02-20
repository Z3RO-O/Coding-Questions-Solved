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
int dx4[] = {1, -1, 0, 0};
int dy4[] = {0, 0, 1, -1};
/*int dx6[] = {0, 0, 1, -1, 0, 0};
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
    int n, x, y;
    string s;
    T
    {
        cin >> n;
        cin >> s;
        x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                x += dx4[1];
                y += dy4[1];
            }
            else if (s[i] == 'R')
            {
                x += dx4[0];
                y += dy4[0];
            }
            else if (s[i] == 'U')
            {
                x += dx4[2];
                y += dy4[2];
            }
            else
            {
                x += dx4[3];
                y += dy4[3];
            }
            if (x == 1 && y == 1)
                break;
        }
        if (x == 1 && y == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}