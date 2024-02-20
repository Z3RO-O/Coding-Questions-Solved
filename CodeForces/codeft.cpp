#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m], c[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
        cin >> c[i];

    // create prefix sum arrays
    int prefixB[m], prefixC[m];
    prefixB[0] = b[0];
    prefixC[0] = c[0];
    for (int i = 1; i < m; i++)
    {
        prefixB[i] = prefixB[i - 1] + b[i];
        prefixC[i] = prefixC[i - 1] + c[i];
    }

    // calculate the minimum value of F(i)
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int minF = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            int ceilA = ceil((double)a[i] / b[j]);
            int F = ceilA * c[j];
            if (F < minF)
                minF = F;
        }
        ans += minF;
    }

    cout << ans << endl;

    return 0;
}
