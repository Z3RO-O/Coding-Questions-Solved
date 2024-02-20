#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int l = n.size(), magic = 1;
    for (int i = 0; i < l;)
    {
        if (i <= (l - 2) && n[i] == '1' && n[i + 1] == '4' && n[i + 2] == '4')
        {
            i += 3;
        }
        else if (i <= (l - 1) && n[i] == '1' && n[i + 1] == '4')
        {
            i += 2;
        }
        else if (i <= l && n[i] == '1')
        {
            i += 1;
        }
        else
        {
            magic = 0;
            cout << "NO" << endl;
            break;
        }
    }
    if (magic == 1)
    {
        cout << "YES" << endl;
    }
    return 0;
}