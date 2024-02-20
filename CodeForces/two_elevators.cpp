#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c, ta, tb;
    cin >> t;
    while (t--)
    {
        ta = 0, tb = 0;
        cin >> a >> b >> c;
        ta = abs(a - 1);
        tb = abs(b - c) + abs(c - 1);
        if (ta > tb)
        {
            cout << 2 << endl;
        }
        else if (ta < tb)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}