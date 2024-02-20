#include <iostream>
using namespace std;
int main()
{
    int t, sx, sy, ex, ey, time = 0, pos = 0;
    string s;
    cin >> t >> sx >> sy >> ex >> ey;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        time++;
        if (s[i] == 'N' && sy < ey)
            sy++;
        else if (s[i] == 'S' && sy > ey)
            sy--;
        else if (s[i] == 'E' && sx < ex)
            sx++;
        else if (s[i] == 'W' && sx > ex)
            sx--;
        if (ex == sx && ey == sy && time <= t)
        {
            cout << time << endl;
            pos = 1;
            break;
        }
    }
    if (pos != 1)
        cout << -1 << endl;
    return 0;
}