#include <iostream>
#include <map>
using namespace std;
int main()
{
    int k, l, possible = 1;
    string s, kstring;
    cin >> k;
    cin >> s;
    l = s.size();
    map<char, int> m;
    for (int i = 0; i < l; i++)
    {
        m[s[i]]++;
    }
    for (auto it : m)
    {
        if (it.second % k != 0)
        {
            possible = 0;
            cout << -1 << endl;
            break;
        }
    }
    if (possible == 1)
    {
        for (auto it : m)
        {
            kstring += string(it.second / k, it.first);
        }
        for (int i = 0; i < k; i++)
        {
            cout << kstring;
        }
    }
    return 0;
}