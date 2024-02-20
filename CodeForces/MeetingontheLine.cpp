#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t, n, val;
    vector<int> x, time;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int tm = 0, pos = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            x.emplace_back(val);
            pos += x[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            time.emplace_back(val);
            mp[x[i]] = time[i];
            tm += time;
        }
        pos /= n;
        tm /= n;
        for (auto it : mp)
        {
            if (it.first>pos&&it.second>tm)
            {
                pos = tz
            }
        }
    }

    return 0;
}