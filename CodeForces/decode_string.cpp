#include <iostream>
using namespace std;

int main()
{
    int q, n;
    cin >> q;
    string t, ans;
    while (q--)
    {
        cin >> n;
        cin >> t;
        ans = "";
        for (int i = 0; i < n;)
        {
            if (t[i + 2] != '0' || t[i + 3] == '0' || (i == n - 1))
            {
                ans += char(96 + int(t[i]) - int('0'));
                i++;
            }
            else
            {
                ans += char(96 + (int(t[i] - '0') * 10 + int(t[i + 1] - '0')));
                i += 3;
            }
        }
        cout << ans << endl;
    }
    return 0;
}