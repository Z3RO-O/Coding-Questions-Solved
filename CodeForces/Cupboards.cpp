#include <iostream>
using namespace std;

int main()
{
    int n, l[10000], r[10000], lz = 0, lo = 0, rz = 0, ro = 0, min_left, min_right;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
        if (l[i] == 0)
        {
            lz++;
        }
        else if (l[i] == 1)
        {
            lo++;
        }
        if (r[i] == 0)
        {
            rz++;
        }
        else
        {
            ro++;
        }
    }
    if (lz <= lo)
    {
        min_left = lz;
    }
    else
    {
        min_left = lo;
    }
    if (rz <= ro)
    {
        min_right = rz;
    }
    else
    {
        min_right = ro;
    }
    cout << min_left + min_right << endl;
    return 0;
}