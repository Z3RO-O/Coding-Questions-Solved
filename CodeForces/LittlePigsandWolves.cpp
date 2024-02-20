#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
#define testcase while (t--)
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

bool valid(int index, int size)
{
    if (index < 0 || index >= size)
        return false;
    return true;
}
main
{
    int n, m, i, k, ans = 0;
    char a[20][20];
    // INPUT
    cin >> n >> m;
    for0
    {
        cin >> a[i];
    }
    // LOGIC
    int x_adjacent[4] = {-1, 0, 0, 1};
    int y_adjacent[4] = {0, -1, 1, 0};
    for0
    {
        for (k = 0; k < m; k++)
        {
            if (a[i][k] == 'W')
            {
                for (int x = 0; x < 4; x++)
                {
                    if (valid(i + x_adjacent[x], n) and valid(k + y_adjacent[x], m))
                    {
                        if (a[i + x_adjacent[x]][k + y_adjacent[x]] == 'P')
                        {
                            ans++, a[i + x_adjacent[x]][k + y_adjacent[x]] = '.';
                            break; // break is used because one wolf can eat only one pig
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}