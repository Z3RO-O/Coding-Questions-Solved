#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, n, a[100], earn = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < m; i++)
    {
        if (a[i] < 0)
        {
            earn -= a[i];
        }
    }
    cout << earn << endl;
    return 0;
}