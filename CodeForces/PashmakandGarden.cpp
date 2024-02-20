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

main
{
    int x1, y1, x2, y2, x3, y3, x4, y4, x_diff, y_diff;
    cin >> x1 >> y1 >> x2 >> y2;
    x_diff = x1 - x2;
    y_diff = y1 - y2;
    if (x_diff != 0 && y_diff != 0) // 0 0 1 1 CASE
    {
        x3 = x1; // 0 1       1 1
        y3 = y2;
        x4 = x2; // 0 0       1 0
        y4 = y1;
    }
    else if (x_diff != 0)
    {
        x3 = x1;
        y3 = y1 + abs(x_diff);
        x4 = x2;
        y4 = y2 + abs(x_diff);
    }
    else
    {
        x3 = x1 + abs(y_diff);
        y3 = y1;
        x4 = x2 + abs(y_diff);
        y4 = y2;
    }
    if (x_diff != 0 and y_diff != 0 and abs(x_diff) != abs(y_diff)) // along with both non zero diff if absolute values of diff are not equal it means such a square is not possible
        cout << -1 << endl;
    else
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}