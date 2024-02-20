#include <bits/stdc++.h>
using namespace std;

int determinantOfMatrix(vector<vector<int>> m, int n)
{
    // code here
    if (n == 1)
        return m[0][0];
    else if (n == 2)
        return (m[0][0] * m[1][1] - m[1][0] * m[0][1]);
    else
    {
        int i = 0, sum = 0, sign = 1;
        while (i < n)
        {
            vector<vector<int>> sub(n - 1, vector<int>(n - 1));
            for (int j = 1; j < n; j++)
            {
                int x = 0;
                for (int k = 0; k < n; k++)
                {
                    if (k == i)
                        continue;
                    sub[j - 1][x++] = m[j][k];
                }
            }
            sum += m[0][i] * sign * determinantOfMatrix(sub, n - 1);
            sign = -sign;
            i++;
        }
        return sum;
    }
}