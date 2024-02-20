#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
#define T     \
    cin >> t; \
    while (t--)
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
    int n, i, maxm = 0, dif;
    cin >> n;
    vi a(n), v;
    for0
    {
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; i++) // This loop will help in not considering a number as if we removed it.
    {
        maxm = 0;
        for (int j = 0; j < n - 1;)
        {
            if (a[i] == a[j] && a[i] != a[j + 1])
                j++;
            else if (a[j] != a[i] && a[j + 1] == a[i])
            {
                dif = a[j + 2] - a[j];
                j += 2;
            }
            else
            {
                dif = a[j + 1] - a[j];
                j++;
            }
            if (dif > maxm)
                maxm = dif;
        }
        v.push_back(maxm);
    }
    cout << *min_element(v.begin(), v.end()) << endl;
    return 0;
}