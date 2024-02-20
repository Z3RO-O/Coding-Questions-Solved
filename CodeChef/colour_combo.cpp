#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T, a[3], sum = 0;
    cin >> T;
    while (T--)
    {
        sum = 0;
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[0] > 0)
        {
            sum++;
            a[0]--;
        }
        if (a[1] > 0)
        {
            sum++;
            a[1]--;
        }
        if (a[2] > 0)
        {
            sum++;
            a[2]--;
        }
        if (a[1] > 0 && a[2] > 0)
        {
            sum++;
            a[1]--;
            a[2]--;
        }
        if (a[0] > 0 && a[2] > 0)
        {
            sum++;
            a[0]--;
            a[2]--;
        }
        if (a[0] > 0 && a[1] > 0)
        {
            sum++;
            a[0]--;
            a[1]--;
        }
        cout << sum << endl;
    }
    return 0;
}