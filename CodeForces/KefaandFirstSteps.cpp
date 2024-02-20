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

// Toh Chaliye Shuru karte...
main
{
    int n,len(1),ans(1),money[I5+10],i;
    cin>>n;
    for0
    {
        cin>>money[i];
        if(i>0)
        {
            if(money[i]>=money[i-1])
            {
                len++;
                ans = max(len,ans);
            }
            else
                len = 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}