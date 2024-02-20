#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
// cin.tie & cout.tie automatically flushes
// sync disables synchronization between c & c++
// as a side effect it makes execution of code faster
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define testcase while (tc--)
#define for0 for (i = 0; i < n; i++)
#define vi vector<int>
#define si set<int>
#define vs vector<string>
#define pii pair<int, int>
#define mii map<int, int>
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
    // Start Code
    int n, k, i, j, p, t;
    sf("%d %d", &n, &k);
    map<pii, int> count;
    vector<pii> teams;
    for0
    {
        sf("%d %d", &p, &t);
        teams.eb(p, t);
    }
    // sorting
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (teams[j].first < teams[j + 1].first)
                swap(teams[j], teams[j + 1]);
            else if (teams[j].first == teams[j + 1].first && teams[j].second > teams[j + 1].second)
                swap(teams[j], teams[j + 1]);
        }
    }
    for0
        count[teams[i]]++;
    pf("%d", count[teams[k - 1]]);
    return 0;
}