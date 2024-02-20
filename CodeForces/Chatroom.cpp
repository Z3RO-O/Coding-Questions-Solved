#include <iostream>
using namespace std;

int main()
{
    string s, h = "hello";
    cin >> s;
    int f = 0, j = 0, pos = 0;
    for (int i = 0; i < s.size(); i++)
    {
        f = 0;
        if (h[j] == s[i])
        {
            j++;
            pos++;
        }
        if (pos == 5)
        {
            cout << "YES" << endl;
            break;
        }
    }
    if (pos != 5)
    {
        cout << "NO" << endl;
    }
    return 0;
}
