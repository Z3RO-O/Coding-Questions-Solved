#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    int count = 3;
    map<char, int> m1, m2;
    cin >> s1;
    cin >> s2;
    if (s1.size() != s2.size())
        cout << "NO" << endl;
    else
    {
        for (int i = 0; i < s1.size(); i++)
        {
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
                count--;
            if (count < 1)
                break;
        }
        if (count == 1)
            if (m1 == m2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}