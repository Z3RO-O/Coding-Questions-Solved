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
    int n, A[110], neg = 0, pos = 0, zero = 0, i;
    cin >> n;
    for0
    {
        cin >> A[i];
        if (A[i] < 0)
            neg++;
        else if (A[i] == 0)
            zero++;
        else
            pos++;
    }
    sort(A, A + n);
    if (neg % 2 != 0 && pos != 0)
    {
        cout << neg << " ";
        for (i = 0; i < neg; i++)
            cout << A[i] << " ";
        cout << endl
             << pos << " ";
        for (i = neg + zero; i < n; i++)
            cout << A[i] << " ";
        cout << endl
             << zero << " ";
        for (i = neg; i < neg + zero; i++)
            cout << A[i] << " ";
    }
    else if (pos == 0 && neg % 2 != 0)
    {
        cout << neg - 2 << " ";
        for (i = 0; i < neg - 2; i++)
            cout << A[i] << " ";
        cout << endl
             << 2 << " ";
        for (i = neg - 2; i < neg; i++)
            cout << A[i] << " ";
        cout << endl
             << zero << " ";
        for (i = neg; i < neg + zero; i++)
            cout << A[i] << " ";
    }
    else if (pos == 0 && neg % 2 == 0)
    {
        cout << neg - 3 << " ";
        for (i = 0; i < neg - 3; i++)
            cout << A[i] << " ";
        cout << endl
             << 2 << " ";
        for (i = neg - 3; i < neg-1; i++)
            cout << A[i] << " ";
        cout << endl
             << zero + 1 << " ";
        for (i = neg - 1; i < neg + zero; i++)
            cout << A[i] << " ";
    }
    else
    {
        cout << neg - 1 << " ";
        for (i = 0; i < neg - 1; i++)
            cout << A[i] << " ";
        cout << endl
             << pos << " ";
        for (i = neg + zero; i < n; i++)
            cout << A[i] << " ";
        cout << endl
             << zero + 1 << " ";
        for (i = neg - 1; i < neg + zero; i++)
            cout << A[i] << " ";
    }
    return 0;
}