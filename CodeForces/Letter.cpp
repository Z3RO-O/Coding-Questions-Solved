#include <iostream>
#include <map>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int pos = 0, count = 0;
    map<char, int> m1;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == ' ')
            continue;
        m1[s1[i]]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] != ' ')
        {
            if (m1[s2[i]] > 0)
            {
                pos++;
                m1[s2[i]]--;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else
            count++;
    }
    if (pos == (s2.size() - count))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}