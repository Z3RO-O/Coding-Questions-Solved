#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int t, m[2], arr[1000000], l;
    string s;
    cin >> t;
    while (t--)
    {
        map<char,int> mp;
        cin >> s;
        m[0] = m[1] = 0;
        for (int i = 1; i < l-1; i++)
        {
            m[s[i]] = i;
        }
        
        cout << m[0] << " " << m[1] << endl;
        cout << 1 << " ";
        for (int i = 0; i < l - 1; i++)
        {
            cout << arr[i] + 1 << " ";
        }
        cout << s.size() + 1 << endl;
    }

    return 0;
}