#include <iostream>
using namespace std;

int main()
{
    int n, a[100], a1, b, min = 1001;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            if (min > abs(a[i] - a[0]))
            {
                min = abs(a[i] - a[0]);
                a1 = i;
                b = 0;
            }
        }
        else
        {
            if (min > abs(a[i] - a[i + 1]))
            {
                min = abs(a[i] - a[i + 1]);
                a1 = i;
                b = i + 1;
            }
        }
    }
    cout << a1 + 1 << " " << b + 1 << endl;
    return 0;
}