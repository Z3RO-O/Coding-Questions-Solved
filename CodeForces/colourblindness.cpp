#include <iostream>
using namespace std;

int main()
{
    int t, n, c;
    string s1, s2;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s1;
        cin >> s2;
        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                c = 0;
                if (s1[i] == s2[i] || s1[i] == 'G' && s2[i] == 'B' || s1[i] == 'B' && s2[i] == 'G')
                {
                    c = 1;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            if (c == 1)
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}