#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, val, d, count = 0, valid;
    cin >> n;
    map<int, vector<int>> m;
    map<int, int> print;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        m[val].emplace_back(i);
    }
    for (auto it : m)
    {
        valid = 1, d = 0;
        if (it.second.size() >= 2)
        {
            d = it.second[1] - it.second[0];
            for (int i = 1; i < it.second.size() - 1; i++)
            {
                if ((it.second[i + 1] - it.second[i]) != d)
                {
                    valid = 0;
                    break;
                }
                else
                    valid = 1;
            }
        }
        if (valid == 1)
        {
            print[it.first] = d;
            count++;
        }
    }
    if (count > 0)
    {
        cout << count << endl;
        for (auto it1 : print)
            cout << it1.first << " " << it1.second << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}