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
    int n, A[3100], i, j = 0;
    cin >> n;
    for0
        cin >> A[i];
    sort(A, A + n);
    for (i = 1; i <= A[n - 1]+1; i++)
    {
        if (i != A[j])
        {
            cout << i;
            return 0;
        }
        j++;
    }
    return 0;
}