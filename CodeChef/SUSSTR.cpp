#include <iostream>
using namespace std;

int main()
{
    int t, n;
    string s, result;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int j = 0;
        result = "";
        while (n != 0)
        {
            if (j % 2 == 0)
            {
                if (s[0] == '0')
                {
                    result = '0' + result;
                }
                else
                {
                    result = result + '1';
                }
                s = s.substr(1, n - 1);
            }
            else
            {
                if (s[n - 1] == '1')
                {
                    result = '1' + result;
                }
                else
                {
                    result = result + '0';
                }
                s = s.substr(0, n - 1);
            }
            n--;
            j++;
        }
        cout << result << endl;
    }
    return 0;
}