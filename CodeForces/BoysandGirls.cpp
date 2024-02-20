#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, j = 0, countB = 0, countG = 0;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m;
    char boy = 'B', girl = 'G', pos[200], ch;
    ch = n >= m ? boy : girl;
    for (int i = 0; i < n + m; i++)
    {
        if (i % 2 != 0 && j < m && ch == boy)
        {
            pos[i] = girl;
            j++;
        }
        else if (i % 2 != 0 && j < n && ch == girl)
        {
            pos[i] = boy;
            j++;
        }
        else
            pos[i] = ch;
    }
    pos[n + m] = '\0';
    cout << pos;
    return 0;
}