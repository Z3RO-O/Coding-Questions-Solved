#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X / 25 == 0)
        {
            cout << 1 << endl;
        }
        else if (X % 25 > 0)
        {
            cout << X / 25 + 1 << endl;
        }
        else
        {
            cout << X / 25 << endl;
        }
    }

    return 0;
}