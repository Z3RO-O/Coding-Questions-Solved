#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, val, min = 1e9, index = -1;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val <= min)
        {
            min = val;
            index = i;
        }
        m[val]++;
    }
    if (m[min] == 1)
        cout << index + 1 << endl;
    else
        cout << "Still Rozdil" << endl;
    return 0;
}