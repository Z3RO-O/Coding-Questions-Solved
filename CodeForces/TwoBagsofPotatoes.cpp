#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int y, n, k, x = 1, i = 1, sum, ans = 0;
    cin >> y >> k >> n;
    if (y >= n)
    {
        cout << -1;
        exit(0);
    }
    while (x + y <= n)
    {
        sum = i * (k);
        x = sum - y;
        if (x >= 1 && x + y <= n)
        {
            cout << x << " ";
            ans++;
        }
        i++;
    }
    if (ans == 0)
        cout << -1;
    return 0;
}