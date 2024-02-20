#include <iostream>
using namespace std;

int main()
{
    string s, t, rev = "";
    cin >> s;
    cin >> t;
    for (int i = s.size() - 1; i > -1; i--)
    {
        rev += s[i];
    }
    if (rev == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}