#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        vector<long> v;
        cin >> n;
        int pos = 1;
        for (int j = n / 2 + 1; j <= n; j++)
        {
            v.emplace_back(j);
        }
        for (int i = 0; i < n / 2; i++)
        {
            v.emplace_back(i + 1);
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == i + 1||n==3)
            {
                pos = 0;
                cout << -1 << " ";
                break;
            }
        }
        if (pos == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}