#include <iostream>
using namespace std;
int main()
{
    int t, s, spent = 0;
    cin >> t;
    while (t--)
    {
        cin >> s;
        spent = 0;
        while (s != 0)
        {
            spent += (s / 10) * 10;
            s = (s - (s / 10) * 10) + s / 10;
            if (s < 10)
            {
                spent += s;
                break;
            }
        }
        cout << spent << endl;
    }
    return 0;
}