#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, val;
    map<int, int> m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        m[val]++;
    }
    if (m[200] % 2 != 0 && m[100] == 0)
        cout << "NO" << endl;
    else if ((n - m[200] - m[200] * 2) % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}