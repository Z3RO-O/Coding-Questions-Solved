#include <bits
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long n, val, pos;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        cin >> n;
        for (long i = 0; i < n; i++)
        {
            cin >> val;
            v.emplace_back(val);
        }
        val = 0, pos = 1;
        for (long i = 0; i < n; i++)
        {
            for (long j = 0; j < n; j++)
            {
                if (__gcd(v[i], v[j]) == 1 && val < (i + j))
                {
                    pos = 0;
                    val = i + j;
                }
            }
        }
        if (pos == 0)
            cout << val + 2 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}