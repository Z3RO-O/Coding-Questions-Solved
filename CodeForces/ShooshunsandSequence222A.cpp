#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, val, ops = 0, a[100000];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        map<int, int> m;
        val = a[k - 1];
        for (int q = 0; q < n - 1; q++)
        {
            a[q] = a[q + 1];
        }
        a[n - 1] = val;
        for (int q = 0; q < n; q++)
        {
            cout << a[q] << " ";
        }
        cout<<endl;
        for (int j = 0; j < n; j++)
        {
            m[a[j]]++;
        }
        ops++;
        if (m.size() == 1)
        {
            break;
        }
    }
    cout << ops << endl;
    return 0;
}