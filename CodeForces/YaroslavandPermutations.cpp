#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, val;
    unordered_map<int, int> m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        m[val]++;
    }
    val = 0;
    for (auto it : m)
        val = max(val, it.second);
    if (val <= (n + 1) / 2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}