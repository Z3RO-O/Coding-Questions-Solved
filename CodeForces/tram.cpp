#include <iostream>
using namespace std;

int main()
{
    int n, in_now = 0, a[1000][2], max_c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
            if (j == 0)
            {
                in_now -= a[i][j];
            }
            else
            {
                in_now += a[i][j];
                if (in_now > max_c)
                {
                    max_c = in_now;
                }
            }
        }
    }
    cout << max_c << endl;
    return 0;
}