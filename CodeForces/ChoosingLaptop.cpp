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

// void solve(){
// // Toh Chaliye Shuru karte hai...

// }
main
{
    fast;
    // T
    //    solve();
    int n, a[100][4], cost[100][2], j = 0, ind;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    for (int i = 0; i < n; i++)
    {
        bool out = false;
        for (int k = 0; k < n; k++)
        {
            if (a[i][0] < a[k][0] && a[i][1] < a[k][1] && a[i][2] < a[k][2])
            {
                out = true;
                break;
            }
        }
        if (out == false)
        {
            cost[j][0] = a[i][3];
            cost[j++][1] = i;
        }
    }
    int mn = INT16_MAX, mnind = -1;
    for (int i = 0; i < j; i++)
    {
        if (cost[i][0] < mn)
        {
            mnind = cost[i][1];
            mn = cost[i][0];
        }
    }
    cout << mnind + 1 << endl;
    return 0;
}