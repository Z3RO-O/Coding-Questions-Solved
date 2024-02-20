#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[3][3];
        int f = 0;
        char winner = '.';
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i][0] != '.' && arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
            {
                winner = arr[i][2];
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[0][j] != '.' && arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j])
                {
                    winner = arr[2][j];
                    f = 1;
                    break;
                }
            }
        }
        if (f == 0)
        {
            if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) || (arr[0][2] == arr[1][1] && arr[2][0] == arr[1][1]))
            {
                winner = arr[1][1];
            }
        }
        ((winner != '.') ? cout << winner << endl : cout << "DRAW\n");
    }
    return 0;
}