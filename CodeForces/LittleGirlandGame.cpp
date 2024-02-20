#include <iostream>
#include <map>
using namespace std;
int main()
{
    string s;
    map<char, int> m;
    int odd = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    for (auto it : m)
    {
        if (it.second % 2 != 0)
            odd++;
    }
    if (odd % 2 == 0 && odd != 0)
        cout << "Second" << endl;
    else
        cout << "First" << endl;
    return 0;
}