#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
// cin.tie & cout.tie automatically flushes
// sync disables synchronization between c & c++
// as a side effect it makes execution of code faster
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define testcase while (t--)
#define for0 for (i = 0; i < n; i++)
#define for1 for (i = 1; i <= n; i++)
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
    // Start Code
    fast;
    int n, i, j, l, r, copy_a[I5 + 10], a[I5 + 10], segment = 0, count = 0;
    cin >> n;
    for0
    {
        cin >> a[i];
    }
    copy(a, a + n, copy_a);
    sort(a, a + n);
    for0
    {
        if (a[i] == copy_a[i])
            count++;
    }
    if (count == n) // Case in which array is already sorted
    {
        cout << "yes" << endl
             << "1 1";
        return 0;
    }
    for (i = 0; i < n - 1, segment < 1;) // segment is a condition as for only one segment we can sort the array
    {
        if (copy_a[i] < copy_a[i + 1])
            i++;
        else
        {
            l = i, r = i;
            while (copy_a[i] > copy_a[i + 1] && i < n - 1)
            {
                i++;
                r++;
            }
            sort(copy_a + l, copy_a + r + 1);
            segment++; // we have got one segment
        }
    }
    for0
    {
        if (a[i] != copy_a[i])
        {
            cout << "no" << endl; // it returns no when sorted one segment does not gives sorted array
            return 0;
        }
    }
    cout << "yes" << endl
         << l + 1 << " " << r + 1;
    return 0;
}