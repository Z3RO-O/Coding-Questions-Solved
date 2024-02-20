#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, n1, m, max = 0, min = 0, a[1000], b[1000];
    cin >> n >> m;
    n1 = n;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    copy(a, a + m, b);
    while (n--)
    {
        max += a[m - 1];
        a[m - 1]--;
        for (int i = m - 1; i > 0; i--)
        {
            if (a[i] >= a[i - 1])
            {
                break;
            }
            swap(a[i], a[i - 1]);
        }
    }
    for (int i = 0; i < m;)
    {
        min += b[i];
        b[i]--;
        n1--;
        if (b[i] == 0)
        {
            i++;
        }
        if (n1 == 0)
        {
            break;
        }
    }
    cout << max << " " << min << endl;
    return 0;
}