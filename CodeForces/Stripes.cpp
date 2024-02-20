#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, row[8], colm[8];
    char a[8][8];
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
                colm[j] = 0;
                row[j] = 0;
            }
        }
        // ROW
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] == 'R')
                {
                    row[i]++;
                }
            }
        }
        // COLUMN
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a[j][i] == 'B')
                {
                    colm[i]++;
                }
            }
        }
        sort(row, row + 8);
        sort(colm, colm + 8);
        if (row[7] > colm[7])
        {
            cout << 'R' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }
    return 0;
}