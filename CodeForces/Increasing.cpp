#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t, n, val, pos;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            m[val]++;
        }
        pos = 1;
        for (auto it : m)
        {
            if (it.second > 1)
            {
                pos = 0;
                cout << "NO" << endl;
                break;
            }
        }
        if (pos == 1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}