#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int l = s1.size(), chk = 0;
    for (int i = 0; i < l; i++)
    {
        if (tolower(s1[i]) > tolower(s2[i]))
        {
            cout << 1 << endl;
            chk = 1;
            break;
        }
        else if (tolower(s1[i]) < tolower(s2[i]))
        {
            cout << -1 << endl;
            chk = 1;
            break;
        }
    }
    if (chk == 0)
    {
        cout << 0 << endl;
    }
    return 0;
}