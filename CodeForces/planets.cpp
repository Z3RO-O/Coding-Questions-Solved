#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, t, c, a[100], minCost;
    cin >> t;
    while (t--)
    {
        map<int, int> mp;
        cin >> n >> c;
        minCost = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second >= c)
            {
                minCost += c;
            }
            else
            {
                minCost += it.second;
            }
        }
        cout << minCost << endl;
    }
    return 0;
}