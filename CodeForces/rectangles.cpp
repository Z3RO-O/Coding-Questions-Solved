#include <iostream>
using namespace std;
int main()
{
    int t, hs, ws, hb, wb, q, n;
    cin >> t;
    while (t--)
    {
        int A[100000][2];
        long long area = 0;
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i][0] >> A[i][1];
        }
        for (int j = 0; j < q; j++)
        {
            area = 0;
            cin >> hs >> ws >> hb >> wb;
            for (int i = 0; i < n; i++)
            {
                if (hs < A[i][0] && hb > A[i][0] && ws < A[i][1] && wb > A[i][1])
                {
                    area += A[i][0] * A[i][1];
                }
            }
            cout << area << endl;
        }
    }
    return 0;
}