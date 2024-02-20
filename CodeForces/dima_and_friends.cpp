#include <iostream>
using namespace std;

int main()
{
    int n, a[100], sum_f = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum_f += a[i];
    }
    for (int i = 1; i < 6; i++)
    {
        if ((sum_f + i) % (n + 1) != 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}