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

void solve()
{
    // Toh Chaliye Shuru karte...
    int n, rem, i, A[2][2], j, c = 1;
    cin >> n;
    A[0][0] = 1, A[0][1] = 0, A[1][0] = 0, A[1][1] = 0, j = 1;
    n--;
    while (n)
    {
        for (int i = 0; i < 2; i++)
        {
            if (n - (++j) >= 0)
            {
                n -= j;
                if (c == 0)
                {
                    A[0][0] += (j + 1) / 2;
                    A[0][1] += j / 2;
                }
                else
                {
                    A[1][0] += j / 2;
                    A[1][1] += (j + 1) / 2;
                }
            }
            else
            {
                if (c == 0)
                {
                    A[0][0] += (n + 1) / 2;
                    A[0][1] += n / 2;
                }
                else
                {
                    A[1][0] += n / 2;
                    A[1][1] += (n + 1) / 2;
                }
                n -= n;
                break;
            }
        }
        (c == 1 ? c = 0 : c = 1);
    }
    cout << A[0][0] << " " << A[0][1] << " " << A[1][0] << " " << A[1][1] << endl;
}
main
{
    fast;
    T solve();
    return 0;
}