#include <iostream>
using namespace std;

int main()
{
    int n, a[1000], zero = 0, five = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            zero++;
        }
        else
        {
            five++;
        }
    }
    if (five / 9 >= 1 && zero > 0)
    {
        cout << string(five - five % 9, '5') + string(zero, '0') << endl;
    }
    else if (zero > 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}