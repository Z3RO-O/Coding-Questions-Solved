#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, val, pos = 1, l, i;
    map<int, vector<int>> m;
    scanf("%d", &n);
    for (i = 1; i <= 2 * n; i++)
    {
        scanf("%d", &val);
        m[val].emplace_back(i);
    }
    for (auto it : m)
    {
        if (it.second.size() % 2 != 0)
        {
            cout << -1 << endl;
            pos = -1;
            break;
        }
    }
    if (pos == 1)
    {
        for (auto it : m)
        {
            l = (it.second).size();
            for (i = 0; i < l; i += 2)
                printf("%d %d\n", (it.second)[i], (it.second)[i + 1]);
        }
    }
    m.clear();
    return 0;
}