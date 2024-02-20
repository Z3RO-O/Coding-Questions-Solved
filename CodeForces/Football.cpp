#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    map<string, int> m;
    cin >> n;
    string s, win;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
    }
    auto it1 = m.begin();
    int max = (*it1).second;
    win = (*it1).first;
    for (auto it : m)
    {
        if (it.second > max)
        {
            max = it.second;
            win = it.first;
        }
    }
    cout << win << endl;
    return 0;
}