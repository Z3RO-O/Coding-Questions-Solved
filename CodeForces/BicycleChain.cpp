#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, m, a[50], b[50];
    cin >> n;
    map<int, int> max;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] % a[i] == 0)
            {
                max[b[j] / a[i]]++;
            }
        }
    }
    auto it = max.end();
    it--;
    cout << (*it).second << endl;
    return 0;
}