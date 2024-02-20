#include <iostream>
using namespace std;

int main()
{
    int n, m;
    char pos[100][100], color[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> pos[i][j];
            if ((i + j) % 2 == 0 && pos[i][j] == '.')
            {
                color[i][j] = 'B';
            }
            else if (pos[i][j] == '-')
            {
                color[i][j] = '-';
            }
            else
            {
                color[i][j] = 'W';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << color[i][j];
        }
        cout << endl;
    }
    return 0;
}