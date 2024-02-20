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

int count(string s, char ch)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch)
            count++;
    }
    return count;
}

main
{
    // Start Code
    int n = 4, i, j, pos = 1;
    string a[4];
    for0
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (count(a[i].substr(j, 2) + a[i + 1].substr(j, 2), '#') != 2&&pos!=0) // when equal to 2 you cannot make it a square of 2X2 in just one move
            {
                cout << "YES";
                pos = 0;
                break;
            }
        }
    }
    if (pos == 1)
        cout << "NO";
    return 0;
}