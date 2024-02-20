#include <iostream>
using namespace std;

int main()
{
    int t, n, l = 5, y, z;
    cin >> t;
    string s, name = "Timur";
    while (t--)
    {
        cin >> n;
        cin >> s;
        if (s == "Timur")
        {
            cout << "YES" << endl;
        }
        else if (s.size() == l)
        {
            for (int j = 0; j < l; j++)
            {
                z = 0;
                y = 0;
                for (int i = 0; i < l; i++)
                {
                    if (name[j] == s[i])
                    {
                        y = 1;
                        break;
                    }
                }
                if (y == 1)
                {
                    z = 1;
                    continue;
                }
                else
                {
                    break;
                }
            }
            if (z == 1 && y == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}