#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n + 1; i++)
    {
        cout << string(2 * (n - i), ' ');
        if (i == 0)
        {
            cout << 0;
        }
        else
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << j << " ";
            }
            for (int k = i - 1; k >= 0; k--)
            {
                if (k == 0)
                {
                    cout << k;
                }
                else
                {
                    cout << k << " ";
                }
            }
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << string(2 * (n - i), ' ');
        if (i == 0)
        {
            cout << 0;
        }
        else
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << j << " ";
            }
            for (int k = i - 1; k >= 0; k--)
            {
                if (k == 0)
                {
                    cout << k;
                }
                else
                {
                    cout << k << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}