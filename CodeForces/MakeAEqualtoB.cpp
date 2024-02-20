#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, a[100], b[100], a1[100], b1[100], count, ops, ops1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        count = 0, ops = 0, ops1 = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        copy(a, a + n, a1);
        copy(b, b + n, b1);
        for (int i = 0; i < n;)
        {
            if (a1[i] != b1[i])
            {
                a1[i] = b1[i];
                ops1++;
            }
            i++;
        }
        if (equal(a, a + n, b))
            cout << 0 << endl;
        else
        {
            sort(a, a + n);
            sort(b, b + n);
            ops = 1;
            if (equal(a, a + n, b))
                cout << ops << endl;
            else
            {
                for (int i = 0; i < n;)
                {
                    if (a[i] != b[i])
                    {
                        a[i] = b[i];
                        ops++;
                    }
                    i++;
                }
                if (ops > ops1)
                    cout << ops1 << endl;
                else
                    cout << ops << endl;
            }
        }
    }
    return 0;
}