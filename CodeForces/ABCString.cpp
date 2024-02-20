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
    int n, flag, sum, ans, open, close;
    char c;
    string a;
    T
    {
        cin >> a;
        n = a.size();
        unordered_map<char, int> m = {{'A', 0}, {'B', 0}, {'C', 0}};
        if (a[0] != a[n - 1])
        {
            flag = 0, sum = 0, ans = 0, open = 0, close = 0;
            m[a[0]] = 1;
            m[a[n - 1]] = -1;
            // to assign unknown character some value we catch it first
            for (int i = 0; i < n; i++)
            {
                if (m[a[i]] == 0)
                {
                    c = a[i];
                    break;
                }
            }
            // to check that such sequence is possible or not
            if (flag == 0)
            {
                m[c] = -1;
                for (int i = 0; i < n; i++)
                {
                    sum += m[a[i]];
                    (m[a[i]] == 1 ? open++ : close++);
                    if (close > open)
                    {
                        ans = -1;
                        break;
                    }
                }
                if (sum == 0 && ans != -1)
                    flag = 1;
            }
            if (flag == 0)
            {
                m[c] = 1;
                sum = 0, ans = 0, open = 0, close = 0;
                for (int i = 0; i < n; i++)
                {
                    sum += m[a[i]];
                    (m[a[i]] == 1 ? open++ : close++);
                    if (close > open)
                    {
                        ans = -1;
                        break;
                    }
                }
                if (sum == 0)
                    flag = 1;
            }
            cout << ((flag == 1 && ans != -1) ? "YES" : "NO") << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}