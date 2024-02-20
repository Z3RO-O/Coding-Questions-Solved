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
int dx4[] = {1, -1, 0, 0};
int dy4[] = {0, 0, 1, -1};

// Toh Chaliye Shuru karte...
main
{
    int n, i, count, pos = 1;
    cin >> n;
    char c, a[110][110];
    for0
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for0
    {
        for (int j = 0; j < n; j++)
        {
            count = 0;
            for (int k = 0; k < 4; k++)
            {
                if (a[i + dx4[k]][j + dy4[k]] == 'o')
                    count++;
            }
            if (count % 2 != 0)
            {
                cout << "NO" << endl;
                pos = 0;
                break;
            }
        }
        if (pos == 0)
            break;
    }
    if (pos == 1)
    {
        cout << "YES" << endl;
    }

    return 0;
}