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
#define for for (i = 0; i < n; i++)
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
    int n, x, y, i, odd = 0, up(0), down(0);
    sf("%d", &n);
    for
    {
        sf("%d %d", &x, &y);
        if (n == 1 && (x % 2 + y % 2 == 1)) // when n = 1 and both numbers x and y are odd. -1
        {
            pf("-1");
            return 0;
        }
        if (x % 2 + y % 2 == 1) // to count number of domino pieces with one side odd numbers as both sided odd ones are not useful for our goal
            odd++;
        up += x;
        down += y;
    }
    if (up % 2 == 0 && down % 2 == 0) // If sum is already even
        pf("0");
    else if (odd >= 2 && up % 2 == 1 && down % 2 == 1) // Only possiblity to convert into even sum is when we have atleast 2 odd even dominos
        pf("1");
    else
        pf("-1");

    return 0;
}