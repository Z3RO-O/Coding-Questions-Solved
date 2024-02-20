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
    int n, money, pos = 1, i, R25(0), R50(0), R100(0); // R25 = 25Ruble and so on
    sf("%d", &n);
    for
    {
        sf("%d", &money);
        if (money == 25)
            R25++;
        else if (money == 50)   //clerk gives 25 and get 50 ruble note
        {
            R25--;
            R50++;
        }
        else
        {
            if (R50 > 0) //clerk gives 50 ruble note and one 25 ruble note if he has one 50 ruble note
            {
                R50--;
                R25--;
            }
            else //clerk gives 25 ruble note 
                R25 -= 3;
        }
        if (R25 < 0)
        {
            pos = 0;
            pf("NO");
            break;
        }
    }
    if (pos == 1)
        pf("YES");
    return 0;
}