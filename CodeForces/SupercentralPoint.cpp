#include <iostream>
using namespace std;

int main()
{
    int n, x, y, count = 0, a[200][2];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        int l = 0, r = 0, up = 0, low = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j][0] > a[i][0] && a[j][1] == a[i][1] && r == 0)
            {
                r++;
            }
            else if (a[j][0] < a[i][0] && a[j][1] == a[i][1] && l == 0)
            {
                l++;
            }
            else if (a[j][0] == a[i][0] && a[j][1] < a[i][1] && low == 0)
            {
                low++;
            }
            else if (a[j][0] == a[i][0] && a[j][1] > a[i][1] && up == 0)
            {
                up++;
            }
            if (l == 1 && r == 1 && up == 1 && low == 1)
            {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}