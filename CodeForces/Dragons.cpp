#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
    int s, n, x, y, f = 1;
    pair<int, int> m[1000];
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        m[i].first = x;
        m[i].second = y;
    }
    sort(m, m + n);
    for (int j = 0; j < n; j++)
    {
        if (m[j].first < s)
        {
            s += m[j].second;
        }
        else
        {
            f = 0;
            cout << "NO" << endl;
            break;
        }
    }
    if (f == 1)
    {
        cout << "YES" << endl;
    }
    return 0;
}