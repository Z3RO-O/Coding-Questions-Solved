#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string A[3][1000];
        int m1 = 0, m2 = 0, m3 = 0;
        cin >> n;
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> A[j][i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (A[0][i] == A[1][j])
                {
                    for (int k = 0; k < n; k++)
                    {
                        if (A[0][i] == A[2][j])
                        {
                            break;
                        }
                        else
                        {
                            m1++, m2++;
                        }
                    }
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (A[0][i] == A[2][j])
                {
                    for (int k = 0; k < n; k++)
                    {
                        if (A[0][i] == A[1][j])
                        {
                            break;
                        }
                        else
                        {
                            m1++, m3++;
                        }
                    }
                }
                else
                {
                    m1+=3;
                }
            }
        }
        cout << m1 << " " << m2 << " " << m3 << " " << endl;
    }
    return 0;
}